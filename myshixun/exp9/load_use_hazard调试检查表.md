# load_use_hazard调试检查表

## 快速诊断

请按以下步骤在GTKWave中检查：

### 步骤1：找到Load指令执行的时间点

1. 搜索`es_to_ds_load_op = 1`的所有周期
2. 记录每个周期的时间点（比如：T1, T2, T3...）

### 步骤2：对每个Load指令，检查以下信号

假设Load指令在**T周期**进入EXE阶段（`es_to_ds_load_op = 1`）：

#### T周期（Load在EXE阶段）

| 信号 | 预期值 | 实际值 | 说明 |
|------|--------|--------|------|
| `es_valid` | 1 | ? | EXE阶段有效 |
| `es_to_ds_load_op` | 1 | ? | 是Load指令 |
| `es_to_ds_dest` | 非0 | ? | 要写的寄存器（比如16表示$r16） |
| `id_valid` | 1或0 | ? | ID阶段是否有效 |
| `id_raddr1` | ? | ? | ID阶段读寄存器1 |
| `id_raddr2` | ? | ? | ID阶段读寄存器2 |
| `mem_forward_valid` | 0或1 | ? | MEM前递有效（关键！） |
| `ms_valid` | 0或1 | ? | MEM阶段是否有效 |
| `ms_res_from_mem` | 0或1 | ? | MEM阶段是否是Load |

**关键检查**：
- `es_to_ds_dest`是否等于`id_raddr1`或`id_raddr2`？
  - 如果**等于**：说明下一条指令需要读Load要写的寄存器
  - 如果**不等于**：说明下一条指令不使用Load的结果，无冲突（正常）

#### T+1周期（Load进入MEM阶段，下一条指令在ID阶段）

| 信号 | 预期值 | 实际值 | 说明 |
|------|--------|--------|------|
| `es_to_ds_load_op` | 0 | ? | Load已进入MEM阶段 |
| `ms_valid` | 1 | ? | Load在MEM阶段 |
| `ms_res_from_mem` | 1 | ? | MEM阶段是Load |
| `mem_forward_valid` | 1 | ? | MEM前递有效（数据已就绪） |
| `mem_forward_addr` | =es_to_ds_dest | ? | 前递地址 |
| `id_raddr1`或`id_raddr2` | =es_to_ds_dest | ? | ID阶段要读的寄存器 |
| `load_use_hazard` | 0 | ? | 冲突应已解决 |
| `block_id` | 0 | ? | 应解除阻塞 |

### 步骤3：手动计算load_use_hazard

在T周期，根据以下公式手动计算：

```
条件1: es_valid = ?
条件2: es_to_ds_load_op = ?
条件3: es_to_ds_dest != 0 ? (es_to_ds_dest = ?)
条件4: (es_to_ds_dest == id_raddr1) || (es_to_ds_dest == id_raddr2) ?
        (id_raddr1 = ?, id_raddr2 = ?)
条件5: !mem_forward_valid ? (mem_forward_valid = ?)

load_use_hazard = 条件1 && 条件2 && 条件3 && 条件4 && 条件5
```

## 常见问题

### 问题1：mem_forward_valid在T周期就是1

**可能原因**：
- MEM阶段有前一条指令（可能是ALU指令）要写寄存器
- 这是正常的，不影响当前Load的冲突检测

**解决方法**：
- 检查`ms_res_from_mem`：如果`ms_res_from_mem = 0`，说明MEM阶段不是Load，`mem_forward_valid = 1`是正常的
- 关键是要检查：**当前Load指令的数据是否可以从MEM阶段前递**
- 当Load在EXE阶段时，它的数据还不能前递，所以`mem_forward_valid`应该检查的是**当前MEM阶段的Load指令**，而不是**当前EXE阶段的Load指令**

**实际上，逻辑可能是正确的**：`mem_forward_valid`检查的是当前MEM阶段的前递有效。如果MEM阶段有Load指令可以前递，说明数据已经就绪，不需要阻塞。

### 问题2：id_raddr1/id_raddr2不等于es_to_ds_dest

**可能原因**：
- 下一条指令不使用Load的结果
- 这是正常的，无冲突

**解决方法**：
- 查看`ds_inst`信号，确认下一条指令是什么
- 如果下一条指令确实不使用Load的结果，`load_use_hazard = 0`是正确的

### 问题3：时序问题

**可能原因**：
- 当Load在EXE阶段时，下一条指令还没进入ID阶段
- 或者下一条指令已经进入EXE阶段

**解决方法**：
- 检查`id_valid`：如果`id_valid = 0`，说明ID阶段无效，无法检测冲突
- 检查指令序列：确认下一条指令是否真的需要使用Load的结果

## 实际案例分析

### 案例1：真正的Load-Use冲突

```assembly
ld.w  $r16, $r12, 0
add.w $r17, $r16, $r1
```

**在波形中应该看到**：

**T周期（ld.w在EXE阶段）**：
- `es_to_ds_load_op = 1`
- `es_to_ds_dest = 16`（$r16）
- `id_raddr1 = 16`（add.w需要读$r16）
- `mem_forward_valid = 0`（ld.w还在EXE阶段，数据未就绪）
- **`load_use_hazard = 1`** ← 应该为1
- `block_id = 1`

**T+1周期（ld.w进入MEM阶段）**：
- `ms_valid = 1`
- `ms_res_from_mem = 1`
- `mem_forward_valid = 1`（数据已就绪）
- `load_use_hazard = 0`（冲突解决）
- `block_id = 0`（解除阻塞）

### 案例2：无冲突（下一条指令不使用Load结果）

```assembly
ld.w  $r16, $r12, 0
add.w $r17, $r1, $r2    # 不使用$r16
```

**在波形中应该看到**：

**T周期（ld.w在EXE阶段）**：
- `es_to_ds_load_op = 1`
- `es_to_ds_dest = 16`（$r16）
- `id_raddr1 = 1`（add.w读$r1，不是$r16）
- `id_raddr2 = 2`（add.w读$r2，不是$r16）
- **`load_use_hazard = 0`** ← 应该为0（无冲突）
- `block_id = 0`

## 调试输出建议

如果可能，在代码中添加调试输出：

```systemverilog
always_comb begin
    if (es_valid && es_to_ds_load_op) begin
        $display("Load指令: es_to_ds_dest=%d, id_raddr1=%d, id_raddr2=%d, mem_forward_valid=%d",
                 es_to_ds_dest, id_raddr1, id_raddr2, mem_forward_valid);
        $display("load_use_hazard=%d", load_use_hazard);
    end
end
```

## 总结

`load_use_hazard`一直为0的可能原因：

1. ✅ **正常情况**：测试程序中确实没有Load-Use冲突
2. ⚠️ **时序问题**：当Load在EXE阶段时，下一条指令还没进入ID阶段
3. ⚠️ **逻辑问题**：`mem_forward_valid`的判断可能有问题（但代码看起来是正确的）

**建议**：
1. 先检查`block_id`是否有变化
2. 检查测试程序中是否存在Load-Use冲突的场景
3. 在波形中手动验证每个条件是否满足

---

**请提供以下信息以便进一步诊断**：
1. `block_id`是否有变化？
2. 测试程序中是否存在`ld.w`后立即使用其结果的指令？
3. 在`es_to_ds_load_op = 1`的周期，`id_raddr1`和`id_raddr2`的值是什么？

