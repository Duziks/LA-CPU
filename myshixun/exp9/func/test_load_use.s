# 简单的Load-Use冲突测试程序
# 用于验证load_use_hazard信号是否正常工作

.text
.global _start
_start:
    # 初始化寄存器
    addi.w $r12, $r0, 0x100    # $r12 = 0x100 (内存地址)
    
    # 测试1：Load-Use冲突场景
    # ld.w加载数据到$r16，下一条指令立即使用$r16
    ld.w  $r16, $r12, 0        # Load: $r16 = mem[$r12+0]
    add.w $r17, $r16, $r1      # Use: $r17 = $r16 + $r1 (应该触发Load-Use冲突)
    
    # 测试2：Load后跟不使用其结果的指令（无冲突）
    ld.w  $r18, $r12, 4        # Load: $r18 = mem[$r12+4]
    add.w $r19, $r1, $r2      # 不使用$r18，无冲突
    
    # 测试3：Load后间隔一个周期使用（可通过前递解决）
    ld.w  $r20, $r12, 8        # Load: $r20 = mem[$r12+8]
    add.w $r21, $r20, $r1      # 使用$r20，但间隔足够，可通过MEM前递
    
    # 结束
    b 0x1c000100              # 跳转到结束地址

