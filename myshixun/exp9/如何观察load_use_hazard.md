# 如何观察load_use_hazard信号

## 问题说明

`load_use_hazard`是hazard模块的**内部信号**（logic类型），不是输出端口，因此默认不会出现在波形文件中。

## 解决方案

### 方案1：通过其他信号间接观察（无需修改代码）✅ 推荐

虽然`load_use_hazard`不可见，但我们可以通过观察其他相关信号来推断它的状态。

#### 关键观察信号组合

**当发生Load-Use冲突时，以下信号组合会出现**：

```
1. es_to_ds_load_op = 1          ← EXE阶段是Load指令
2. es_to_ds_dest = $rX            ← Load要写的寄存器
3. id_raddr1 = $rX 或 id_raddr2 = $rX  ← ID阶段要读同一寄存器
4. mem_forward_valid = 0          ← MEM前递无效（数据未就绪）
5. block_id = 1                   ← ID阶段被阻塞
6. block_if = 1                   ← IF阶段被阻塞
```

**当冲突解决时**：

```
1. mem_forward_valid = 1          ← MEM前递有效（数据已就绪）
2. mem_forward_addr = $rX          ← 前递地址匹配
3. mem_forward_data = 内存数据     ← 前递数据可用
4. block_id = 0                   ← 解除阻塞
5. block_if = 0                   ← 解除阻塞
```

#### 分析步骤

1. **定位Load指令**：
   - 找到`es_to_ds_load_op = 1`的周期（设为T1）
   - 记录`es_to_ds_dest`的值（设为$rX）

2. **检查冲突条件**：
   - 在T1周期，查看ID阶段的`id_raddr1`和`id_raddr2`
   - 如果`id_raddr1 == $rX`或`id_raddr2 == $rX`，且`mem_forward_valid = 0`
   - **则推断：`load_use_hazard = 1`**

3. **验证阻塞**：
   - 如果`load_use_hazard = 1`（推断），则`block_id`应该=1
   - 如果`block_id = 1`，则`block_if`应该=1

4. **观察冲突解决**：
   - Load进入MEM阶段后，`mem_forward_valid`应该=1
   - 此时**推断：`load_use_hazard = 0`**
   - `block_id`和`block_if`应该=0

### 方案2：修改代码使信号可见（需要重新编译）

如果需要直接看到`load_use_hazard`信号，可以将其作为输出端口。

#### 修改步骤

**步骤1：修改hazard.sv，添加输出端口**

```systemverilog
module hazard(
    // ... 现有输入端口 ...
    // 输出：阻塞信号
    output logic         block_id      ,  // 阻塞ID阶段
    output logic         block_if      ,  // 阻塞IF阶段
    output logic         br_stall      ,  // 分支阻塞
    output logic         load_use_hazard  // 新增：Load-Use冲突标志（用于调试）
);
```

**步骤2：修改mycpu_top.sv，连接新端口**

```systemverilog
// hazard模块所需信号
logic         load_use_hazard;  // 新增：Load-Use冲突标志

// hazard模块实例化
hazard hazard_u(
    // ... 现有连接 ...
    .load_use_hazard  (load_use_hazard)  // 新增连接
);
```

**步骤3：重新编译和运行**

```bash
make clean
make
```

**步骤4：在GTKWave中查看**

```
TOP.soc_lite_top.cpu.load_use_hazard
```

## 当前可用的替代观察方法

### 方法1：观察block_id信号

`block_id`信号直接反映了是否需要阻塞，包括Load-Use冲突的情况：

```
block_id = 1  →  存在冲突（可能是Load-Use或其他冲突）
block_id = 0  →  无冲突，流水线正常流动
```

### 方法2：观察信号组合

通过以下信号组合可以准确判断Load-Use冲突：

**冲突发生时**：
```
es_to_ds_load_op = 1
es_to_ds_dest = id_raddr1 或 id_raddr2
mem_forward_valid = 0
block_id = 1
```

**冲突解决时**：
```
mem_forward_valid = 1
mem_forward_addr = es_to_ds_dest
block_id = 0
```

### 方法3：观察流水线气泡

当Load-Use冲突发生时：
- `ds_valid`保持不变（不更新）
- `fs_to_ds_valid`变为0（IF插入气泡）
- 这是阻塞的直接表现

## 实际分析示例

假设有以下指令序列：
```assembly
ld.w  $r16, $r12, 0
add.w $r17, $r16, $r1
```

**在波形中观察**：

```
T1周期（ld.w在EXE阶段）：
- es_to_ds_load_op = 1          ← Load指令
- es_to_ds_dest = 16            ← 要写$r16
- add.w在ID阶段
- id_raddr1 = 16                 ← 需要读$r16
- mem_forward_valid = 0          ← 数据未就绪
- block_id = 1                   ← 推断：load_use_hazard = 1

T2周期（ld.w进入MEM阶段）：
- ms_valid = 1                   ← ld.w在MEM阶段
- data_sram_rdata = 内存数据      ← 数据已读出
- mem_forward_valid = 1           ← MEM前递有效
- mem_forward_addr = 16           ← 前递地址匹配
- mem_forward_data = data_sram_rdata ← 前递数据
- block_id = 0                   ← 推断：load_use_hazard = 0（冲突解决）
```

## 总结

虽然`load_use_hazard`信号不可见，但通过观察：
1. ✅ `es_to_ds_load_op` - Load指令标志
2. ✅ `es_to_ds_dest` - 要写的寄存器
3. ✅ `id_raddr1`/`id_raddr2` - 要读的寄存器
4. ✅ `mem_forward_valid` - MEM前递有效
5. ✅ `block_id` - 阻塞信号

我们可以**完全准确地推断**Load-Use冲突的发生和解决过程。

**推荐**：使用方案1（间接观察），无需修改代码即可完成分析。

