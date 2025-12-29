# load_use_hazard信号已添加到波形

## ✅ 修改完成

我已经将`load_use_hazard`信号添加为hazard模块的输出端口，现在可以在波形中直接看到了！

## 🔧 修改内容

1. **hazard.sv**：将`load_use_hazard`从内部信号改为输出端口
2. **mycpu_top.sv**：添加了`load_use_hazard`信号的连接

## 📝 重新编译步骤

```bash
# 进入exp9目录
cd myshixun/exp9

# 清理旧文件
make clean

# 重新编译
make
```

编译完成后，会生成新的`dump.fst`波形文件。

## 🔍 在GTKWave中查看

重新编译并运行后，在GTKWave中可以找到以下信号：

```
TOP.soc_lite_top.cpu.load_use_hazard
```

**完整路径**：
- 在SST窗口中展开：`TOP` → `soc_lite_top` → `cpu`
- 找到`load_use_hazard`信号
- 双击添加到波形窗口

## 📊 信号说明

`load_use_hazard`信号的含义：

- **= 1**：检测到Load-Use冲突
  - Load指令在EXE阶段
  - 下一条指令在ID阶段需要读同一寄存器
  - MEM前递无效（数据未就绪）
  - 需要阻塞流水线

- **= 0**：无Load-Use冲突或冲突已解决
  - 无Load指令
  - 或Load指令数据已就绪（可通过MEM前递）
  - 或下一条指令不需要读该寄存器

## 🎯 典型波形观察

```
周期:    T1      T2      T3      T4
---------------------------------------
load_use_hazard: 0      1       0       0
block_id:        0      1       0       0
es_to_ds_load_op: 1     0       0       0
mem_forward_valid: 0    1       1       0
```

**解释**：
- T1：Load指令在EXE阶段，但数据未就绪
- T2：检测到Load-Use冲突，触发阻塞
- T3：Load进入MEM阶段，数据可前递，冲突解决
- T4：流水线恢复正常

## ⚠️ 注意事项

1. **必须重新编译**：修改代码后必须运行`make clean && make`才能看到新信号
2. **旧波形文件无效**：旧的`dump.fst`文件不包含这个信号，需要重新生成
3. **信号位置**：信号在`cpu`模块下，不在`hazard_u`子模块下（因为它是顶层连接）

## 🔄 如果不想修改代码

如果您不想修改代码，也可以通过观察以下信号组合来推断`load_use_hazard`的状态：

```
load_use_hazard = 1 当且仅当：
- es_to_ds_load_op = 1
- es_to_ds_dest = id_raddr1 或 id_raddr2
- mem_forward_valid = 0
- block_id = 1
```

详细说明请参考：`如何观察load_use_hazard.md`

---

**现在您可以重新编译并查看波形了！** 🎉

