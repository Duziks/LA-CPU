`include "mycpu.h"
module mycpu_top(
    input  logic        clk,
    input  logic        resetn,
    // inst sram interface
    output logic        inst_sram_en,
    output logic [ 3:0] inst_sram_wen,
    output logic [31:0] inst_sram_addr,
    output logic [31:0] inst_sram_wdata,
    input  logic [31:0] inst_sram_rdata,
    // data sram interface
    output logic        data_sram_en,
    output logic [ 3:0] data_sram_wen,
    output logic [31:0] data_sram_addr,
    output logic [31:0] data_sram_wdata,
    input  logic [31:0] data_sram_rdata,
    // trace debug interface
    output logic [31:0] debug_wb_pc,    
    output logic [ 3:0] debug_wb_rf_we,
    output logic [ 4:0] debug_wb_rf_wnum,
    output logic [31:0] debug_wb_rf_wdata
);
// 复位控制
logic reset;
always_ff @(posedge clk) reset <= ~resetn;
// 流水线阶段间信号
logic         ds_allowin;
logic         es_allowin;
logic         ms_allowin;
logic         ws_allowin;
logic         fs_to_ds_valid;
logic         ds_to_es_valid;
logic         es_to_ms_valid;
logic         ms_to_ws_valid;
logic [`FS_TO_DS_BUS_WD -1:0] fs_to_ds_bus;
logic [`DS_TO_ES_BUS_WD -1:0] ds_to_es_bus;
logic [`ES_TO_MS_BUS_WD -1:0] es_to_ms_bus;
logic [`MS_TO_WS_BUS_WD -1:0] ms_to_ws_bus;
logic [`WS_TO_RF_BUS_WD -1:0] ws_to_rf_bus;
logic [`BR_BUS_WD       -1:0] br_bus;
// hazard模块所需信号
logic [4:0]   id_raddr1;     // ID读寄存器1地址
logic [4:0]   id_raddr2;     // ID读寄存器2地址
logic         id_valid;      // ID阶段有效标志
logic [4:0]   es_to_ds_dest; // EXE写寄存器地址
logic [4:0]   ms_to_ds_dest; // MEM写寄存器地址
logic [4:0]   ws_to_ds_dest; // WB写寄存器地址
logic         es_to_ds_load_op; // EXE是否为ld_w指令
logic         block_id;      // hazard输出：阻塞ID阶段
logic         block_if;      // hazard输出：阻塞IF阶段
logic         br_stall;      // hazard输出：分支阻塞
// -------------------------- 新增前递相关信号 --------------------------
logic        exe_forward_valid;
logic [4:0]  exe_forward_addr;
logic [31:0] exe_forward_data;
logic        mem_forward_valid;
logic [4:0]  mem_forward_addr;
logic [31:0] mem_forward_data;
// -------------------------- 实例化各模块 --------------------------
// IF阶段
if_stage if_stage(
    .clk            (clk            ),
    .reset          (reset          ),
    .ds_allowin     (ds_allowin     ),
    .block_if       (block_if       ),
    .br_stall       (br_stall       ),
    .br_bus         (br_bus         ),
    .fs_to_ds_valid (fs_to_ds_valid ),
    .fs_to_ds_bus   (fs_to_ds_bus   ),
    .inst_sram_en   (inst_sram_en   ),
    .inst_sram_wen  (inst_sram_wen  ),
    .inst_sram_addr (inst_sram_addr ),
    .inst_sram_wdata(inst_sram_wdata),
    .inst_sram_rdata(inst_sram_rdata)
);
// ID阶段（添加前递输入信号）
id_stage id_stage(
    .clk            (clk            ),
    .reset          (reset          ),
    .exe_forward_valid (exe_forward_valid ),
    .exe_forward_addr  (exe_forward_addr  ),
    .exe_forward_data  (exe_forward_data  ),
    .mem_forward_valid (mem_forward_valid ),
    .mem_forward_addr  (mem_forward_addr  ),
    .mem_forward_data  (mem_forward_data  ),
    .es_to_ds_load_op  (es_to_ds_load_op  ),
    .es_allowin     (es_allowin     ),
    .block_id       (block_id       ),
    .es_to_ds_dest  (es_to_ds_dest  ),
    .ms_to_ds_dest  (ms_to_ds_dest  ),
    .ws_to_ds_dest  (ws_to_ds_dest  ),
    .id_raddr1      (id_raddr1      ),
    .id_raddr2      (id_raddr2      ),
    .id_valid       (id_valid       ),
    .fs_to_ds_valid (fs_to_ds_valid ),
    .fs_to_ds_bus   (fs_to_ds_bus   ),
    .ds_to_es_valid (ds_to_es_valid ),
    .ds_to_es_bus   (ds_to_es_bus   ),
    .br_bus         (br_bus         ),
    .ws_to_rf_bus   (ws_to_rf_bus   )
);
// EXE阶段（添加前递输出信号）
exe_stage exe_stage(
    .clk            (clk            ),
    .reset          (reset          ),
    .es_to_ds_load_op(es_to_ds_load_op),
    .ms_allowin     (ms_allowin     ),
    .es_allowin     (es_allowin     ),
    .ds_to_es_valid (ds_to_es_valid ),
    .ds_to_es_bus   (ds_to_es_bus   ),
    .es_to_ds_dest  (es_to_ds_dest  ),
    .es_to_ms_valid (es_to_ms_valid ),
    .es_to_ms_bus   (es_to_ms_bus   ),
    .exe_forward_valid (exe_forward_valid ),
    .exe_forward_addr  (exe_forward_addr  ),
    .exe_forward_data  (exe_forward_data  ),
    .data_sram_en   (data_sram_en   ),  // 直接输出到顶层端口
    .data_sram_wen   (data_sram_wen   ),// 直接输出到顶层端口
    .data_sram_addr (data_sram_addr ),// 直接输出到顶层端口
    .data_sram_wdata(data_sram_wdata)// 直接输出到顶层端口
);
// MEM阶段（添加前递输出信号）
mem_stage mem_stage(
    .clk            (clk            ),
    .reset          (reset          ),
    .ws_allowin     (ws_allowin     ),
    .ms_allowin     (ms_allowin     ),
    .es_to_ms_valid (es_to_ms_valid ),
    .es_to_ms_bus   (es_to_ms_bus   ),
    .ms_to_ds_dest  (ms_to_ds_dest  ),
    .ms_to_ws_valid (ms_to_ws_valid ),
    .ms_to_ws_bus   (ms_to_ws_bus   ),
    .mem_forward_valid (mem_forward_valid ),
    .mem_forward_addr  (mem_forward_addr  ),
    .mem_forward_data  (mem_forward_data  ),
    .data_sram_rdata(data_sram_rdata)
);
// WB阶段
wb_stage wb_stage(
    .clk            (clk            ),
    .reset          (reset          ),
    .ws_allowin     (ws_allowin     ),
    .ms_to_ws_valid (ms_to_ws_valid ),
    .ms_to_ws_bus   (ms_to_ws_bus   ),
    .ws_to_ds_dest  (ws_to_ds_dest  ),
    .ws_to_rf_bus   (ws_to_rf_bus   ),
    .debug_wb_pc     (debug_wb_pc     ),
    .debug_wb_rf_we  (debug_wb_rf_we  ),
    .debug_wb_rf_wnum(debug_wb_rf_wnum ),
    .debug_wb_rf_wdata(debug_wb_rf_wdata)
);
// hazard模块（添加前递有效信号输入）
hazard hazard_u(
    .clk            (clk            ),
    .reset          (reset          ),
    .id_raddr1      (id_raddr1      ),
    .id_raddr2      (id_raddr2      ),
    .id_valid       (id_valid       ),
    .es_to_ds_dest  (es_to_ds_dest  ),
    .es_to_ds_load_op(es_to_ds_load_op),
    .es_valid       (exe_stage.es_valid),
    .ms_to_ds_dest  (ms_to_ds_dest  ),
    .ms_valid       (mem_stage.ms_valid),
    .ws_to_ds_dest  (ws_to_ds_dest  ),
    .ws_valid       (wb_stage.ws_valid),
    .exe_forward_valid (exe_forward_valid ),
    .mem_forward_valid (mem_forward_valid ),
    .block_id       (block_id       ),
    .block_if       (block_if       ),
    .br_stall       (br_stall       )
);
// -------------------------- 阶段间allowin连接 --------------------------
assign ds_allowin = id_stage.ds_allowin;
assign es_allowin = exe_stage.es_allowin;
assign ms_allowin = mem_stage.ms_allowin;
assign ws_allowin = wb_stage.ws_allowin;
// 核心修复：删除以下循环赋值代码（exe_stage已直接连接到顶层输出）
// 原错误代码：
// assign data_sram_en = exe_stage.data_sram_en;
// assign data_sram_wen = exe_stage.data_sram_wen;
// assign data_sram_addr = exe_stage.data_sram_addr;
// assign data_sram_wdata = exe_stage.data_sram_wdata;
endmodule