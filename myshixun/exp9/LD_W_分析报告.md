# LD.W指令阻塞和前递执行分析报告

## 1. 汇编代码片段解读

### 1.1 LD.W指令格式
LD.W指令格式：`ld.w $rd, $rj, si12`
- **功能**：从内存地址 `$rj + si12` 处加载一个字（32位）到寄存器 `$rd`
- **操作码**：`op_31_26 = 6'h0a` 且 `op_25_22 = 4'h2`
- **指令编码**：`{op_31_26[5:0], op_25_22[3:0], rj[4:0], rd[4:0], si12[11:0]}`

### 1.2 典型使用场景示例

从测试文件中提取的典型LD.W指令序列：

```assembly
# 示例1：基本加载操作
ld.w  $r16, $r12, 0      # 从地址($r12 + 0)加载数据到$r16

# 示例2：带偏移量的加载
ld.w  $r10, $r12, 1704   # 从地址($r12 + 1704)加载数据到$r10
ld.w  $r6,  $r4,  1704   # 从地址($r4 + 1704)加载数据到$r6

# 示例3：Load-Use冲突场景（需要阻塞）
addi.w $r12, $r0, 100    # $r12 = 100
ld.w   $r16, $r12, 0     # 从地址($r12 + 0)加载数据到$r16
add.w  $r17, $r16, $r1   # $r17 = $r16 + $r1  (使用刚加载的数据)
```

### 1.3 指令执行流程

LD.W指令在5级流水线中的执行过程：

```
时钟周期 | IF阶段          | ID阶段          | EXE阶段         | MEM阶段         | WB阶段
---------|----------------|----------------|----------------|----------------|----------------
T1       | 取指令ld.w     | -              | -              | -              | -
T2       | 取下一条指令   | 译码ld.w       | -              | -              | -
T3       | 取指令         | 译码           | 计算地址       | -              | -
         |                |                | (rj + si12)    |                |
T4       | 取指令         | 译码           | 计算地址       | 访问数据内存   | -
         |                |                |                | 读取数据       | -
T5       | 取指令         | 译码           | 计算地址       | 访问数据内存   | 写回寄存器
         |                |                |                |                | (rd = 内存数据)
```

## 2. 阻塞（Stall）机制分析

### 2.1 Load-Use数据冲突

当LD.W指令加载的数据被下一条指令立即使用时，会产生Load-Use冲突，必须阻塞流水线。

**冲突检测逻辑**（`hazard.sv`）：

```45:47:myshixun/exp9/mycpu/hazard.sv
// Load-use冲突：仅当MEM前递无效时才阻塞（Load进入MEM后可前递）
assign load_use_hazard = es_valid && es_to_ds_load_op && (es_to_ds_dest != 5'd0) && 
                        (es_to_ds_dest == id_raddr1 || es_to_ds_dest == id_raddr2) && !mem_forward_valid;
```

**阻塞条件**：
1. EXE阶段是LD.W指令（`es_to_ds_load_op = 1`）
2. LD.W要写的寄存器（`es_to_ds_dest`）与ID阶段要读的寄存器（`id_raddr1`或`id_raddr2`）相同
3. MEM阶段前递无效（`!mem_forward_valid`），即数据还未从内存读出

### 2.2 阻塞信号生成

```49:53:myshixun/exp9/mycpu/hazard.sv
// 阻塞信号生成（组合逻辑）
assign block_id = reset ? 1'b0 : (id_valid && (load_use_hazard || exe_conflict_r1 || exe_conflict_r2 || 
                             mem_conflict_r1 || mem_conflict_r2 || wb_conflict_r1 || wb_conflict_r2));
assign block_if = reset ? 1'b0 : block_id;
assign br_stall = reset ? 1'b0 : block_if;
```

**阻塞效果**：
- `block_id = 1`：阻塞ID阶段，ID阶段保持当前指令不变
- `block_if = 1`：阻塞IF阶段，IF阶段暂停取指令
- 流水线插入一个气泡（bubble）

### 2.3 阻塞时序示例

假设有以下指令序列：
```assembly
T1: ld.w  $r1, $r2, 0    # 加载数据到$r1
T2: add.w $r3, $r1, $r4   # 使用$r1（产生Load-Use冲突）
```

**无阻塞时的错误执行**（数据未就绪）：
```
时钟 | IF      | ID      | EXE     | MEM     | WB
-----|---------|---------|---------|---------|--------
T1   | ld.w    | -       | -       | -       | -
T2   | add.w   | ld.w    | -       | -       | -
T3   | next    | add.w   | ld.w    | -       | -      ← 此时add.w需要$r1，但ld.w还在EXE阶段
T4   | next    | next    | add.w   | ld.w    | -      ← $r1数据在MEM阶段，但add.w在EXE阶段需要
```

**有阻塞时的正确执行**：
```
时钟 | IF      | ID      | EXE     | MEM     | WB
-----|---------|---------|---------|---------|--------
T1   | ld.w    | -       | -       | -       | -
T2   | add.w   | ld.w    | -       | -       | -
T3   | bubble  | add.w   | ld.w    | -       | -      ← 阻塞：IF插入气泡，ID保持add.w
T4   | next    | bubble  | add.w   | ld.w    | -      ← 阻塞：ID插入气泡，EXE保持add.w
T5   | next    | next    | bubble  | add.w   | ld.w   ← 此时$r1数据在WB阶段，可通过前递解决
```

## 3. 前递（Forwarding）机制分析

### 3.1 前递原理

前递机制允许将后续阶段的计算结果直接传递给前面阶段，避免不必要的阻塞。

**前递优先级**：
1. **EXE阶段前递**：非Load指令的ALU结果（优先级最高）
2. **MEM阶段前递**：Load指令的数据或ALU结果（优先级次之）
3. **寄存器文件读取**：当前面两个都不满足时，从寄存器文件读取

### 3.2 EXE阶段前递

**前递条件**（`exe_stage.sv`）：

```63:67:myshixun/exp9/mycpu/exe_stage.sv
// -------------------------- 新增前递输出逻辑 --------------------------
// 非Load指令且EXE阶段有效、要写寄存器时，前递有效
assign exe_forward_valid = es_valid && es_gr_we && !es_res_from_mem;
assign exe_forward_addr = es_dest;       // 要写的寄存器地址
assign exe_forward_data = es_alu_result; // 要写的数据（ALU结果）
```

**特点**：
- 仅对非Load指令有效（`!es_res_from_mem`）
- Load指令的数据在EXE阶段还未从内存读出，无法前递

### 3.3 MEM阶段前递

**前递条件**（`mem_stage.sv`）：

```44:48:myshixun/exp9/mycpu/mem_stage.sv
// -------------------------- 新增前递输出逻辑 --------------------------
// MEM阶段有效且要写寄存器时，前递有效（覆盖ALU结果和Load数据）
assign mem_forward_valid = ms_valid && ms_gr_we;
assign mem_forward_addr = ms_dest;         // 要写的寄存器地址
assign mem_forward_data = ms_final_result;  // 要写的数据（ALU或Load结果）
```

**特点**：
- 对Load指令和ALU指令都有效
- Load指令的数据在MEM阶段从内存读出，可以前递

### 3.4 ID阶段前递选择逻辑

**rj_value前递选择**（`id_stage.sv`）：

```219:231:myshixun/exp9/mycpu/id_stage.sv
// -------------------------- 新增前递选择逻辑 --------------------------
// 前递选择：rj_value（对应rf_raddr1）
always_comb begin
    if (rf_raddr1 == 5'd0) begin
        rj_value = 32'd0;
    end else if (exe_forward_valid && (exe_forward_addr == rf_raddr1)) begin
        rj_value = exe_forward_data;  // EXE前递优先级最高
    end else if (mem_forward_valid && (mem_forward_addr == rf_raddr1)) begin
        rj_value = mem_forward_data;  // 其次是MEM前递
    end else begin
        rj_value = rf_rdata1;         // 最后读寄存器文件
    end
end
```

**rkd_value前递选择**：

```232:245:myshixun/exp9/mycpu/id_stage.sv
// 前递选择：rkd_value（对应rf_raddr2或rd，根据src_reg_is_rd）
always_comb begin
    logic [4:0] actual_raddr2;
    actual_raddr2 = src_reg_is_rd ? rd : rk;  // 确定实际读地址
    if (actual_raddr2 == 5'd0) begin
        rkd_value = 32'd0;
    end else if (exe_forward_valid && (exe_forward_addr == actual_raddr2)) begin
        rkd_value = exe_forward_data;
    end else if (mem_forward_valid && (mem_forward_addr == actual_raddr2)) begin
        rkd_value = mem_forward_data;
    end else begin
        rkd_value = rf_rdata2;
    end
end
```

### 3.5 前递时序示例

**场景1：ALU指令前递（无需阻塞）**
```assembly
T1: add.w $r1, $r2, $r3   # $r1 = $r2 + $r3
T2: add.w $r4, $r1, $r5   # $r4 = $r1 + $r5（使用$r1）
```

```
时钟 | IF      | ID      | EXE     | MEM     | WB
-----|---------|---------|---------|---------|--------
T1   | add.w1  | -       | -       | -       | -
T2   | add.w2  | add.w1  | -       | -       | -
T3   | next    | add.w2  | add.w1  | -       | -      ← add.w2的ID阶段需要$r1
                                                          add.w1在EXE阶段，可通过EXE前递获得$r1
```

**场景2：Load指令前递（需要1个周期阻塞）**
```assembly
T1: ld.w  $r1, $r2, 0     # 从内存加载到$r1
T2: add.w $r4, $r1, $r5   # $r4 = $r1 + $r5（使用$r1）
```

```
时钟 | IF      | ID      | EXE     | MEM     | WB
-----|---------|---------|---------|---------|--------
T1   | ld.w    | -       | -       | -       | -
T2   | add.w   | ld.w    | -       | -       | -      ← 检测到Load-Use冲突
T3   | bubble  | add.w   | ld.w    | -       | -      ← 阻塞1个周期（$r1数据未就绪）
T4   | next    | bubble  | add.w   | ld.w    | -      ← $r1数据在MEM阶段，可通过MEM前递获得
```

## 4. Verilog代码详细分析

### 4.1 LD.W指令识别（`id_stage.sv`）

```170:171:myshixun/exp9/mycpu/id_stage.sv
assign inst_ld_w = op_31_26_d[6'h0a] & op_25_22_d[4'h2];
```

**控制信号生成**：
```173:194:myshixun/exp9/mycpu/id_stage.sv
assign alu_op[0] = inst_add_w | inst_addi_w | inst_jirl | inst_bl | inst_ld_w | inst_st_w;
assign alu_op[1] = inst_sub_w;
assign alu_op[2] = inst_slt;
assign alu_op[3] = inst_sltu;
assign alu_op[4] = inst_and;
assign alu_op[5] = inst_nor;
assign alu_op[6] = inst_or;
assign alu_op[7] = inst_xor;
assign alu_op[8] = inst_slli_w;
assign alu_op[9] = inst_srli_w;
assign alu_op[10] = inst_srai_w;
assign alu_op[11] = inst_lu12i_w;
assign src1_is_pc = inst_jirl | inst_bl;
assign src2_is_imm = inst_addi_w | inst_slli_w | inst_srli_w | inst_srai_w | inst_lu12i_w | inst_jirl | inst_bl | inst_ld_w | inst_st_w;
assign res_from_mem = inst_ld_w;
assign dst_is_r1 = inst_bl;
assign dest = dst_is_r1 ? 5'd1 : rd;
assign gr_we = ~inst_b & ~inst_beq & ~inst_bne & ~inst_st_w;
assign mem_we = inst_st_w;
assign src_reg_is_rd = inst_beq | inst_bne | inst_st_w;
assign need_ui5 = inst_slli_w | inst_srli_w | inst_srai_w;
assign need_si12 = inst_addi_w | inst_ld_w | inst_st_w;
```

**关键信号**：
- `res_from_mem = inst_ld_w`：标识结果来自内存
- `src2_is_imm = 1`：第二个操作数是立即数（偏移量）
- `alu_op[0] = 1`：ALU执行加法运算（计算地址）
- `gr_we = 1`：需要写寄存器

### 4.2 EXE阶段执行（`exe_stage.sv`）

**地址计算**：
```84:85:myshixun/exp9/mycpu/exe_stage.sv
assign es_alu_src1 = es_src1_is_pc ? es_pc[31:0] : es_rj_value;
assign es_alu_src2 = es_src2_is_imm ? es_imm : es_rkd_value;
```

对于LD.W指令：
- `es_alu_src1 = es_rj_value`（基址寄存器值）
- `es_alu_src2 = es_imm`（符号扩展的12位立即数偏移）
- `es_alu_result = es_rj_value + es_imm`（内存地址）

**数据内存访问控制**：
```92:96:myshixun/exp9/mycpu/exe_stage.sv
// 数据SRAM控制（原有逻辑不变）
assign data_sram_en    = (es_res_from_mem || es_mem_we) && es_valid;
assign data_sram_wen    = es_mem_we ? 4'hf : 4'h0;
assign data_sram_addr  = es_alu_result;
assign data_sram_wdata = es_rkd_value;
```

对于LD.W指令：
- `data_sram_en = 1`（使能数据内存）
- `data_sram_wen = 4'h0`（读操作，写使能为0）
- `data_sram_addr = es_alu_result`（访问地址）

**Load操作标志输出**：
```59:62:myshixun/exp9/mycpu/exe_stage.sv
// 输出到hazard：是否为ld_w指令
assign es_to_ds_load_op = es_res_from_mem && es_valid;
// 输出到hazard：要写的寄存器地址
assign es_to_ds_dest = es_dest & {5{es_valid}};
```

### 4.3 MEM阶段数据读取（`mem_stage.sv`）

**数据选择**：
```64:65:myshixun/exp9/mycpu/mem_stage.sv
assign mem_result = data_sram_rdata;
assign ms_final_result = ms_res_from_mem ? mem_result : ms_alu_result;
```

对于LD.W指令：
- `ms_res_from_mem = 1`
- `ms_final_result = data_sram_rdata`（从内存读取的数据）

### 4.4 冲突检测逻辑（`hazard.sv`）

**EXE阶段冲突检测**（排除前递可解决的冲突）：
```37:39:myshixun/exp9/mycpu/hazard.sv
// 冲突检测逻辑：排除可通过前递解决的冲突
assign exe_conflict_r1 = es_valid && (es_to_ds_dest != 5'd0) && (es_to_ds_dest == id_raddr1) && !exe_forward_valid;
assign exe_conflict_r2 = es_valid && (es_to_ds_dest != 5'd0) && (es_to_ds_dest == id_raddr2) && !exe_forward_valid;
```

**Load-Use冲突检测**：
```45:47:myshixun/exp9/mycpu/hazard.sv
// Load-use冲突：仅当MEM前递无效时才阻塞（Load进入MEM后可前递）
assign load_use_hazard = es_valid && es_to_ds_load_op && (es_to_ds_dest != 5'd0) && 
                        (es_to_ds_dest == id_raddr1 || es_to_ds_dest == id_raddr2) && !mem_forward_valid;
```

**关键点**：
- Load指令在EXE阶段时，数据还未从内存读出，无法前递，必须阻塞
- Load指令进入MEM阶段后，数据已从内存读出，可以通过MEM前递解决冲突

## 5. 波形展示分析

### 5.1 关键信号说明

**流水线控制信号**：
- `ds_valid`：ID阶段有效标志
- `es_valid`：EXE阶段有效标志
- `ms_valid`：MEM阶段有效标志
- `ws_valid`：WB阶段有效标志
- `block_id`：ID阶段阻塞信号
- `block_if`：IF阶段阻塞信号

**数据相关信号**：
- `es_to_ds_load_op`：EXE阶段是否为Load指令
- `es_to_ds_dest`：EXE阶段要写的寄存器地址
- `id_raddr1`、`id_raddr2`：ID阶段要读的寄存器地址
- `exe_forward_valid`、`mem_forward_valid`：前递有效信号
- `load_use_hazard`：Load-Use冲突标志

### 5.2 典型波形时序（Load-Use冲突场景）

假设指令序列：
```assembly
PC=0x100: addi.w $r1, $r0, 0x100
PC=0x104: ld.w   $r2, $r1, 0
PC=0x108: add.w  $r3, $r2, $r4
```

**预期波形**（关键时钟周期）：

```
时钟周期:  T1    T2    T3    T4    T5    T6    T7    T8
------------------------------------------------------------------
clk:       __|‾‾|__|‾‾|__|‾‾|__|‾‾|__|‾‾|__|‾‾|__|‾‾|__

IF阶段:
fs_to_ds_valid: 1    1    1    0    1    1    1    1
fs_to_ds_bus[31:0]: addi ld.w add.w -   next next next

ID阶段:
ds_valid:        0    1    1    1    0    1    1    1
ds_inst[31:0]:   -    addi ld.w add.w add.w -   next next
id_raddr1:       -    0    1    2    2    -    next next
id_raddr2:       -    0    0    4    4    -    next next
block_id:        0    0    0    1    1    0    0    0

EXE阶段:
es_valid:        0    0    1    1    0    0    1    1
es_res_from_mem: 0    0    0    1    1    0    0    0
es_to_ds_load_op:0    0    0    1    1    0    0    0
es_to_ds_dest:   0    0    1    2    2    0    0    3
es_alu_result:   -    -    0x100 0x100 0x100 -    -    -
data_sram_en:    0    0    0    1    1    0    0    0
data_sram_addr:  -    -    -    0x100 0x100 -    -    -

MEM阶段:
ms_valid:        0    0    0    1    1    0    0    1
ms_res_from_mem: 0    0    0    1    1    0    0    0
ms_final_result: -    -    -    mem_data mem_data -    -    alu_result
mem_forward_valid:0   0    0    1    1    0    0    1
mem_forward_addr: 0   0    0    2    2    0    0    3
mem_forward_data: -   -    -    mem_data mem_data -    -    alu_result

WB阶段:
ws_valid:        0    0    0    0    1    1    0    1
ws_to_rf_bus:    -    -    -    -    {we,addr,data} -    -

Hazard模块:
load_use_hazard:  0    0    0    1    0    0    0    0
exe_conflict_r1:  0    0    0    0    0    0    0    0
exe_conflict_r2:  0    0    0    0    0    0    0    0
mem_conflict_r1:  0    0    0    0    0    0    0    0
mem_conflict_r2:  0    0    0    1    0    0    0    0
```

### 5.3 波形关键点分析

**T3周期**：
- `ld.w`指令进入EXE阶段
- `es_to_ds_load_op = 1`，标识这是Load指令
- `es_to_ds_dest = 2`，要写$r2寄存器
- `add.w`指令在ID阶段，需要读$r2（`id_raddr1 = 2`）
- 检测到Load-Use冲突，但此时数据还未从内存读出

**T4周期**：
- `load_use_hazard = 1`，触发阻塞
- `block_id = 1`，阻塞ID阶段
- `block_if = 1`，阻塞IF阶段
- ID阶段保持`add.w`指令不变
- IF阶段插入气泡（`fs_to_ds_valid = 0`）
- `ld.w`进入MEM阶段，开始从内存读取数据

**T5周期**：
- `ld.w`在MEM阶段，数据已从内存读出（`ms_final_result = mem_data`）
- `mem_forward_valid = 1`，MEM前递有效
- `mem_forward_addr = 2`，前递地址为$r2
- `mem_forward_data = mem_data`，前递数据为内存读取的值
- `load_use_hazard = 0`，冲突已解决（可通过MEM前递）
- `block_id = 0`，解除阻塞
- ID阶段的`add.w`可以通过MEM前递获得$r2的值

**T6周期**：
- `add.w`进入EXE阶段，使用前递的$r2值进行计算
- 流水线恢复正常流动

## 6. 总结

### 6.1 LD.W指令执行特点

1. **地址计算**：在EXE阶段通过ALU计算 `$rj + si12`
2. **内存访问**：在MEM阶段从数据内存读取数据
3. **数据写回**：在WB阶段将数据写回寄存器文件

### 6.2 阻塞机制

- **触发条件**：Load指令在EXE阶段，且下一条指令需要使用Load的结果
- **阻塞周期**：1个时钟周期（等待数据从内存读出）
- **阻塞效果**：IF和ID阶段暂停，插入气泡

### 6.3 前递机制

- **EXE前递**：仅对非Load指令有效（ALU结果）
- **MEM前递**：对Load指令和ALU指令都有效
- **优先级**：EXE前递 > MEM前递 > 寄存器文件读取
- **Load指令前递**：数据在MEM阶段可前递，避免额外阻塞

### 6.4 性能优化

通过前递机制，大多数数据冲突可以在不阻塞流水线的情况下解决。只有Load-Use冲突需要阻塞1个周期，这是无法避免的，因为数据必须从内存读取后才能使用。

## 7. 波形文件位置和查看方法

### 7.1 波形文件位置

项目中的波形文件位置如下：

| 实验目录 | 波形文件路径 | 文件格式 | 说明 |
|---------|------------|---------|------|
| `myshixun/exp9/` | `dump.fst` | FST格式 | 当前实验的波形文件（包含LD.W指令执行波形） |
| `myshixun/exp7/` | `dump.fst` | FST格式 | exp7实验的波形文件 |
| `myshixun/exp8/` | `dump.fst` | FST格式 | exp8实验的波形文件 |
| `myshixun/single5/` | `dump.vcd` | VCD格式 | single5实验的波形文件 |

**当前实验（exp9）的波形文件**：
```
D:\lab\LA-CPU\LA-CPU\myshixun\exp9\dump.fst
```

### 7.2 波形文件生成

波形文件在运行仿真时自动生成。生成过程如下：

1. **编译和仿真**（在`myshixun/exp9/`目录下）：
   ```bash
   make
   ```
   这会执行以下操作：
   - 使用Verilator编译SystemVerilog代码（带`--trace-fst`选项）
   - 运行仿真程序（`obj_dir/Vsoc_lite_top`）
   - 自动生成`dump.fst`波形文件

2. **波形生成代码**（`main.cpp`）：
```33:33:myshixun/exp9/main.cpp
  tfp->open("dump.fst");
```
   仿真过程中，每个时钟周期都会调用`tfp->dump()`将信号值写入波形文件。

### 7.3 查看波形文件

#### 方法1：使用GTKWave（推荐）

GTKWave是开源的波形查看器，支持FST和VCD格式。

**安装GTKWave**：
- Windows: 从 [GTKWave官网](http://gtkwave.sourceforge.net/) 下载安装包
- Linux: `sudo apt-get install gtkwave`
- macOS: `brew install gtkwave`

**打开波形文件**：
```bash
# 在exp9目录下
gtkwave dump.fst
```

**查看关键信号**：
在GTKWave中，可以添加以下关键信号到波形窗口：
- `TOP.soc_lite_top.cpu.id_stage.*` - ID阶段所有信号
- `TOP.soc_lite_top.cpu.exe_stage.*` - EXE阶段所有信号
- `TOP.soc_lite_top.cpu.mem_stage.*` - MEM阶段所有信号
- `TOP.soc_lite_top.cpu.wb_stage.*` - WB阶段所有信号
- `TOP.soc_lite_top.cpu.hazard_u.*` - Hazard模块信号

**重点关注信号**（用于LD.W分析）：
- `es_to_ds_load_op` - Load指令标志
- `es_to_ds_dest` - EXE阶段写寄存器地址
- `id_raddr1`, `id_raddr2` - ID阶段读寄存器地址
- `load_use_hazard` - Load-Use冲突标志
- `block_id`, `block_if` - 阻塞信号
- `exe_forward_valid`, `mem_forward_valid` - 前递有效信号
- `exe_forward_data`, `mem_forward_data` - 前递数据
- `data_sram_en`, `data_sram_addr`, `data_sram_rdata` - 数据内存接口

#### 方法2：使用ModelSim/QuestaSim

如果使用ModelSim或QuestaSim：
```bash
# 打开ModelSim
vsim

# 在ModelSim命令窗口
add wave -recursive *
run -all
```

#### 方法3：使用Verdi（Synopsys）

如果使用Verdi：
```bash
verdi -fst -ssf dump.fst
```

### 7.4 波形分析技巧

1. **定位LD.W指令执行周期**：
   - 搜索`es_to_ds_load_op`信号为1的周期
   - 查看`es_to_ds_dest`确定要写的寄存器

2. **观察Load-Use冲突**：
   - 同时查看`es_to_ds_load_op`和`id_raddr1`/`id_raddr2`
   - 当`load_use_hazard = 1`时，观察`block_id`和`block_if`的变化

3. **验证前递机制**：
   - 查看`mem_forward_valid`和`mem_forward_data`
   - 确认数据是否正确前递到ID阶段

4. **分析流水线气泡**：
   - 观察`ds_valid`、`es_valid`等有效信号
   - 当`block_id = 1`时，流水线会插入气泡

### 7.5 重新生成波形文件

如果需要重新生成波形文件：

```bash
# 清理旧文件
make clean

# 重新编译和运行仿真
make
```

注意：每次运行`make`都会重新生成`dump.fst`文件，覆盖之前的波形。

