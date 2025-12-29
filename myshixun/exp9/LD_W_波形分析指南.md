# LD.W指令波形分析详细指南

## 1. 打开波形文件

### 1.1 使用GTKWave打开波形

```bash
# 进入exp9目录
cd myshixun/exp9

# 打开波形文件
gtkwave dump.fst
```

### 1.2 GTKWave界面说明

GTKWave界面分为几个区域：
- **左侧**：信号层次树（SST窗口）
- **中间**：信号列表（Signals窗口）
- **右侧**：波形显示区域（Waves窗口）
- **底部**：时间轴和搜索栏

## 2. 添加关键信号到波形窗口

### 2.1 导航到CPU模块

在左侧的SST窗口中，展开以下层次结构：
```
TOP
  └── soc_lite_top
      └── cpu (mycpu_top)
```

### 2.2 添加关键信号（按优先级）

#### 第一优先级：流水线控制信号

**IF阶段**：
- `cpu.if_stage.fs_to_ds_valid` - IF到ID的有效信号
- `cpu.if_stage.fs_to_ds_bus[31:0]` - 指令数据（可选）

**ID阶段**：
- `cpu.id_stage.ds_valid` - ID阶段有效标志
- `cpu.id_stage.ds_inst[31:0]` - 当前指令（十六进制显示）
- `cpu.id_stage.id_raddr1[4:0]` - 读寄存器1地址
- `cpu.id_stage.id_raddr2[4:0]` - 读寄存器2地址
- `cpu.id_stage.ds_ready_go` - ID阶段就绪信号
- `cpu.id_stage.ds_allowin` - ID阶段允许输入信号

**EXE阶段**：
- `cpu.exe_stage.es_valid` - EXE阶段有效标志
- `cpu.exe_stage.es_res_from_mem` - 结果来自内存（Load指令标志）
- `cpu.exe_stage.es_to_ds_load_op` - **关键：Load指令标志**
- `cpu.exe_stage.es_to_ds_dest[4:0]` - **关键：要写的寄存器地址**
- `cpu.exe_stage.es_alu_result[31:0]` - ALU计算结果（内存地址）
- `cpu.exe_stage.exe_forward_valid` - EXE前递有效
- `cpu.exe_stage.exe_forward_addr[4:0]` - EXE前递地址
- `cpu.exe_stage.exe_forward_data[31:0]` - EXE前递数据

**MEM阶段**：
- `cpu.mem_stage.ms_valid` - MEM阶段有效标志
- `cpu.mem_stage.ms_res_from_mem` - 结果来自内存
- `cpu.mem_stage.ms_final_result[31:0]` - **关键：最终结果（Load的数据）**
- `cpu.mem_stage.mem_forward_valid` - **关键：MEM前递有效**
- `cpu.mem_stage.mem_forward_addr[4:0]` - MEM前递地址
- `cpu.mem_stage.mem_forward_data[31:0]` - **关键：MEM前递数据**

**WB阶段**：
- `cpu.wb_stage.ws_valid` - WB阶段有效标志
- `cpu.wb_stage.ws_to_rf_bus[37:0]` - 写回总线（包含we, addr, data）

#### 第二优先级：Hazard模块信号

- `cpu.hazard_u.load_use_hazard` - **关键：Load-Use冲突标志**
- `cpu.hazard_u.block_id` - **关键：ID阶段阻塞信号**
- `cpu.hazard_u.block_if` - **关键：IF阶段阻塞信号**
- `cpu.hazard_u.exe_conflict_r1` - EXE阶段对r1的冲突
- `cpu.hazard_u.exe_conflict_r2` - EXE阶段对r2的冲突
- `cpu.hazard_u.mem_conflict_r1` - MEM阶段对r1的冲突
- `cpu.hazard_u.mem_conflict_r2` - MEM阶段对r2的冲突

#### 第三优先级：数据内存接口

- `cpu.exe_stage.data_sram_en` - 数据内存使能
- `cpu.exe_stage.data_sram_addr[31:0]` - 数据内存地址
- `cpu.exe_stage.data_sram_wen[3:0]` - 数据内存写使能（LD.W时为0）
- `cpu.mem_stage.data_sram_rdata[31:0]` - **关键：从内存读取的数据**

#### 第四优先级：前递选择逻辑（ID阶段）

- `cpu.id_stage.rj_value[31:0]` - rj寄存器值（经过前递选择）
- `cpu.id_stage.rkd_value[31:0]` - rk/rd寄存器值（经过前递选择）
- `cpu.id_stage.rf_rdata1[31:0]` - 从寄存器文件读取的rdata1（原始值）
- `cpu.id_stage.rf_rdata2[31:0]` - 从寄存器文件读取的rdata2（原始值）

### 2.3 添加信号的方法

1. **方法1：双击添加**
   - 在SST窗口中找到信号
   - 双击信号名称，自动添加到波形窗口

2. **方法2：拖拽添加**
   - 从SST窗口拖拽信号到Waves窗口

3. **方法3：使用Insert按钮**
   - 选中信号后，点击工具栏的"Insert"按钮

### 2.4 信号显示格式设置

对于不同信号，建议设置合适的显示格式：

- **指令信号**（`ds_inst`）：右键 → Format → Hexadecimal
- **地址信号**（`id_raddr1`等）：右键 → Format → Decimal 或 Hexadecimal
- **数据信号**（`rj_value`等）：右键 → Format → Hexadecimal
- **布尔信号**（`es_valid`等）：保持Binary格式

## 3. 定位LD.W指令执行周期

### 3.1 搜索LD.W指令

**方法1：搜索指令编码**
- LD.W指令编码：`op_31_26 = 6'h0a` 且 `op_25_22 = 4'h2`
- 在GTKWave中搜索：`0x2880`（LD.W指令的常见编码模式）

**方法2：搜索Load标志**
- 搜索`es_to_ds_load_op`信号为1的周期
- 使用工具栏的"Find"功能（Ctrl+F）

**方法3：查看指令序列**
- 在波形中查看`ds_inst`信号
- LD.W指令格式：`ld.w $rd, $rj, si12`
- 指令编码特征：高6位为`0x28`或`0x29`

### 3.2 识别LD.W指令的关键特征

当看到以下信号组合时，说明当前是LD.W指令：

```
EXE阶段：
- es_valid = 1
- es_res_from_mem = 1          ← 关键特征
- es_to_ds_load_op = 1          ← 关键特征
- data_sram_en = 1
- data_sram_wen = 0              ← 读操作，写使能为0
- es_alu_result = 某个地址值    ← 计算出的内存地址
```

## 4. 分析Load-Use冲突场景

### 4.1 典型场景识别

寻找以下指令序列模式：
```assembly
ld.w  $rX, $rY, offset    # Load指令
add.w $rA, $rX, $rB       # 使用$rX（产生Load-Use冲突）
```

### 4.2 分析步骤

**步骤1：定位Load指令**
- 找到`es_to_ds_load_op = 1`的周期（设为T1）
- 记录`es_to_ds_dest`的值（设为$rX）

**步骤2：检查下一条指令**
- 在T1+1周期，查看ID阶段的`id_raddr1`和`id_raddr2`
- 如果`id_raddr1 == $rX`或`id_raddr2 == $rX`，则存在冲突

**步骤3：观察冲突检测**
- 在T1+1周期，检查`load_use_hazard`信号
- 如果`load_use_hazard = 1`，说明检测到Load-Use冲突

**步骤4：观察阻塞机制**
- 当`load_use_hazard = 1`时：
  - `block_id`应该变为1
  - `block_if`应该变为1
  - ID阶段的`ds_valid`保持不变（不更新）
  - IF阶段的`fs_to_ds_valid`变为0（插入气泡）

**步骤5：观察前递解决**
- Load指令进入MEM阶段后（T1+2周期）：
  - `mem_forward_valid`应该变为1
  - `mem_forward_addr`应该等于$rX
  - `mem_forward_data`应该等于从内存读取的数据
  - `load_use_hazard`应该变为0（冲突已解决）
  - `block_id`和`block_if`应该变为0（解除阻塞）

### 4.3 关键时间点分析

假设LD.W指令在T1周期进入EXE阶段：

```
T1周期（LD.W在EXE阶段）：
- es_to_ds_load_op = 1
- es_to_ds_dest = $rX
- es_alu_result = 内存地址
- data_sram_en = 1
- data_sram_addr = 内存地址
- 下一条指令在ID阶段，需要读$rX
- load_use_hazard = 0（此时还未检测，或检测到但数据未就绪）

T2周期（LD.W进入MEM阶段，下一条指令仍在ID阶段）：
- ms_valid = 1（LD.W在MEM阶段）
- ms_res_from_mem = 1
- data_sram_rdata = 从内存读取的数据
- ms_final_result = data_sram_rdata
- mem_forward_valid = 1 ← 关键：MEM前递有效
- mem_forward_addr = $rX
- mem_forward_data = data_sram_rdata ← 关键：前递数据
- load_use_hazard = 1（如果下一条指令仍需要$rX）
- block_id = 1 ← 关键：阻塞ID阶段
- block_if = 1 ← 关键：阻塞IF阶段
- ds_valid保持不变（ID阶段不更新）

T3周期（LD.W进入WB阶段，下一条指令仍在ID阶段）：
- ws_valid = 1（LD.W在WB阶段）
- mem_forward_valid = 1（仍有效）
- load_use_hazard = 0（可通过MEM前递解决）
- block_id = 0 ← 关键：解除阻塞
- block_if = 0
- ID阶段可以通过mem_forward_data获得$rX的值

T4周期（下一条指令进入EXE阶段）：
- 下一条指令使用前递的$rX值进行计算
- 流水线恢复正常流动
```

## 5. 验证前递机制

### 5.1 EXE前递验证（非Load指令）

**场景**：ALU指令后跟使用其结果的指令
```assembly
add.w $r1, $r2, $r3
add.w $r4, $r1, $r5
```

**验证步骤**：
1. 第一个`add.w`在EXE阶段时：
   - `exe_forward_valid = 1`
   - `exe_forward_addr = $r1`
   - `exe_forward_data = ALU结果`

2. 第二个`add.w`在ID阶段时：
   - `id_raddr1 = $r1`
   - `rj_value`应该等于`exe_forward_data`（不是`rf_rdata1`）
   - 说明EXE前递生效

### 5.2 MEM前递验证（Load指令）

**场景**：Load指令后跟使用其结果的指令
```assembly
ld.w  $r1, $r2, 0
add.w $r4, $r1, $r5
```

**验证步骤**：
1. `ld.w`在MEM阶段时：
   - `mem_forward_valid = 1`
   - `mem_forward_addr = $r1`
   - `mem_forward_data = data_sram_rdata`（从内存读取的数据）

2. `add.w`在ID阶段时（阻塞解除后）：
   - `id_raddr1 = $r1`
   - `rj_value`应该等于`mem_forward_data`（不是`rf_rdata1`）
   - 说明MEM前递生效

### 5.3 前递优先级验证

**场景**：同时存在EXE和MEM前递
```assembly
add.w $r1, $r2, $r3    # 指令1：EXE阶段
ld.w  $r1, $r4, 0      # 指令2：MEM阶段（覆盖$r1）
add.w $r5, $r1, $r6    # 指令3：ID阶段（使用$r1）
```

**验证**：
- 指令3应该使用MEM前递的数据（`mem_forward_data`），而不是EXE前递的数据
- 因为MEM前递优先级更高（数据更新）

## 6. 分析技巧和注意事项

### 6.1 时间对齐技巧

1. **使用标记（Marker）**
   - 在关键时间点添加标记（M键）
   - 方便在不同信号间对齐时间

2. **缩放和导航**
   - 使用鼠标滚轮缩放波形
   - 使用方向键左右移动
   - 使用"Zoom to Fit"查看完整波形

3. **信号分组**
   - 将相关信号分组显示
   - 使用"Insert Blank"插入分隔线

### 6.2 常见问题排查

**问题1：看不到阻塞信号变化**
- 检查时间范围是否足够
- 确认信号已正确添加到波形窗口
- 检查信号名称是否正确（注意大小写）

**问题2：前递数据不正确**
- 检查`mem_forward_valid`是否为1
- 检查`mem_forward_addr`是否匹配
- 检查`data_sram_rdata`是否正确

**问题3：阻塞周期数不对**
- Load-Use冲突应该阻塞1个周期
- 如果阻塞超过1个周期，检查hazard模块逻辑

### 6.3 关键信号组合检查清单

分析LD.W指令时，按以下清单检查：

- [ ] `es_to_ds_load_op`在EXE阶段是否为1
- [ ] `es_to_ds_dest`是否正确（要写的寄存器）
- [ ] `data_sram_en`和`data_sram_addr`是否正确
- [ ] `load_use_hazard`是否在正确的时间变为1
- [ ] `block_id`和`block_if`是否同步变化
- [ ] `mem_forward_valid`在MEM阶段是否为1
- [ ] `mem_forward_data`是否等于`data_sram_rdata`
- [ ] ID阶段的`rj_value`或`rkd_value`是否使用了前递数据
- [ ] 阻塞是否在1个周期后解除

## 7. 实际案例分析

### 7.1 案例1：基本Load-Use冲突

**指令序列**：
```assembly
0x100: addi.w $r12, $r0, 0x100
0x104: ld.w   $r16, $r12, 0
0x108: add.w  $r17, $r16, $r1
```

**波形分析要点**：

1. **0x104指令（ld.w）执行**：
   - EXE阶段：`es_to_ds_dest = 16`（$r16）
   - `es_alu_result = 0x100`（$r12 + 0）

2. **0x108指令（add.w）在ID阶段**：
   - `id_raddr1 = 16`（需要读$r16）
   - 检测到冲突：`load_use_hazard = 1`
   - 触发阻塞：`block_id = 1`

3. **阻塞周期**：
   - ID阶段保持`add.w`指令
   - IF阶段插入气泡
   - `ds_valid`不更新

4. **前递生效**：
   - `ld.w`进入MEM阶段
   - `mem_forward_valid = 1`
   - `mem_forward_data = data_sram_rdata`
   - `load_use_hazard = 0`（冲突解决）
   - `block_id = 0`（解除阻塞）

5. **正常执行**：
   - `add.w`使用前递的$r16值
   - 流水线恢复正常

### 7.2 案例2：无冲突场景（前递解决）

**指令序列**：
```assembly
0x100: add.w  $r1, $r2, $r3
0x104: add.w  $r4, $r1, $r5
```

**波形分析要点**：

1. **0x100指令（add.w）在EXE阶段**：
   - `exe_forward_valid = 1`
   - `exe_forward_addr = 1`（$r1）
   - `exe_forward_data = $r2 + $r3`

2. **0x104指令（add.w）在ID阶段**：
   - `id_raddr1 = 1`（需要读$r1）
   - `rj_value = exe_forward_data`（使用EXE前递）
   - **无需阻塞**：`load_use_hazard = 0`
   - `block_id = 0`

3. **结论**：
   - EXE前递成功解决了数据冲突
   - 流水线无停顿，性能最优

## 8. 保存和导出分析结果

### 8.1 保存GTKWave配置

1. **保存信号列表**：
   - File → Write Save File
   - 保存为`.gtkw`文件
   - 下次可以直接加载：`gtkwave dump.fst dump.gtkw`

2. **保存截图**：
   - File → Write Postscript File（保存为PS格式）
   - 或使用截图工具

### 8.2 创建分析报告

建议记录以下信息：
- LD.W指令的PC地址
- 执行周期（时间戳）
- 阻塞周期数
- 前递数据值
- 关键信号的变化时间点

## 9. 高级分析技巧

### 9.1 使用脚本自动化分析

可以编写TCL脚本自动添加信号：
```tcl
# 在GTKWave中执行
add_wave -recursive TOP.soc_lite_top.cpu.exe_stage.es_to_ds_load_op
add_wave -recursive TOP.soc_lite_top.cpu.hazard_u.load_use_hazard
add_wave -recursive TOP.soc_lite_top.cpu.hazard_u.block_id
# ... 更多信号
```

### 9.2 使用过滤器

在SST窗口中使用过滤器快速找到信号：
- 在搜索框输入信号名称的一部分
- GTKWave会自动过滤显示匹配的信号

### 9.3 比较不同周期的波形

- 使用多个标记（Marker）标记不同时间点
- 比较相同信号在不同周期的值
- 验证流水线的正确性

---

## 总结

通过以上步骤，您可以：
1. ✅ 准确定位LD.W指令的执行周期
2. ✅ 观察Load-Use冲突的检测和阻塞机制
3. ✅ 验证前递机制的正确性
4. ✅ 分析流水线的性能影响
5. ✅ 排查潜在的设计问题

记住：**关键是要理解信号之间的时序关系，特别是流水线各阶段之间的数据流动**。

