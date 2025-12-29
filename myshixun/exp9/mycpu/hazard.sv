`include "mycpu.h"
module hazard(
    input  logic         clk           ,
    input  logic         reset         ,
    // 来自ID阶段：读寄存器信息
    input  logic [4:0]   id_raddr1     ,  // ID读寄存器1地址
    input  logic [4:0]   id_raddr2     ,  // ID读寄存器2地址
    input  logic         id_valid      ,  // ID阶段有效标志
    // 来自EXE阶段：写寄存器信息
    input  logic [4:0]   es_to_ds_dest ,  // EXE要写的寄存器
    input  logic         es_to_ds_load_op, // EXE是否为ld_w指令
    input  logic         es_valid      ,  // EXE阶段有效标志
    // 来自MEM阶段：写寄存器信息
    input  logic [4:0]   ms_to_ds_dest ,  // MEM要写的寄存器
    input  logic         ms_valid      ,  // MEM阶段有效标志
    // 来自WB阶段：写寄存器信息
    input  logic [4:0]   ws_to_ds_dest ,  // WB要写的寄存器
    input  logic         ws_valid      ,  // WB阶段有效标志
    // 前递有效信号（判断是否可通过前递解决冲突）
    input  logic         exe_forward_valid,
    input  logic         mem_forward_valid,
    // 输出：阻塞信号
    output logic         block_id      ,  // 阻塞ID阶段
    output logic         block_if      ,  // 阻塞IF阶段
    output logic         br_stall        // 分支阻塞（传递到IF阶段）
);

// -------------------------- 新增：显式声明所有冲突检测信号 --------------------------
logic exe_conflict_r1;   // EXE阶段对r1的冲突（前递无法解决）
logic exe_conflict_r2;   // EXE阶段对r2的冲突（前递无法解决）
logic mem_conflict_r1;   // MEM阶段对r1的冲突（前递无法解决）
logic mem_conflict_r2;   // MEM阶段对r2的冲突（前递无法解决）
logic wb_conflict_r1;    // WB阶段对r1的冲突
logic wb_conflict_r2;    // WB阶段对r2的冲突
logic load_use_hazard;   // Load-use冲突（前递无法解决）

// 冲突检测逻辑：排除可通过前递解决的冲突
assign exe_conflict_r1 = es_valid && (es_to_ds_dest != 5'd0) && (es_to_ds_dest == id_raddr1) && !exe_forward_valid;
assign exe_conflict_r2 = es_valid && (es_to_ds_dest != 5'd0) && (es_to_ds_dest == id_raddr2) && !exe_forward_valid;
assign mem_conflict_r1 = ms_valid && (ms_to_ds_dest != 5'd0) && (ms_to_ds_dest == id_raddr1) && !mem_forward_valid;
assign mem_conflict_r2 = ms_valid && (ms_to_ds_dest != 5'd0) && (ms_to_ds_dest == id_raddr2) && !mem_forward_valid;
assign wb_conflict_r1 = ws_valid && (ws_to_ds_dest != 5'd0) && (ws_to_ds_dest == id_raddr1);
assign wb_conflict_r2 = ws_valid && (ws_to_ds_dest != 5'd0) && (ws_to_ds_dest == id_raddr2);

// Load-use冲突：仅当MEM前递无效时才阻塞（Load进入MEM后可前递）
assign load_use_hazard = es_valid && es_to_ds_load_op && (es_to_ds_dest != 5'd0) && 
                        (es_to_ds_dest == id_raddr1 || es_to_ds_dest == id_raddr2) && !mem_forward_valid;

// 阻塞信号生成（组合逻辑）
assign block_id = reset ? 1'b0 : (id_valid && (load_use_hazard || exe_conflict_r1 || exe_conflict_r2 || 
                             mem_conflict_r1 || mem_conflict_r2 || wb_conflict_r1 || wb_conflict_r2));
assign block_if = reset ? 1'b0 : block_id;
assign br_stall = reset ? 1'b0 : block_if;

endmodule