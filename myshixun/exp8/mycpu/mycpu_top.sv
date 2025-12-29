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
logic [ 4:0]                  es_to_ds_dest;  //目的操作数寄存器号
logic [ 4:0]                  ms_to_ds_dest;
logic [ 4:0]                   ws_to_ds_dest;
logic                          es_to_ds_load_op;

logic         reset;
always_ff @(posedge clk) reset <= ~resetn;

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

// IF stage
if_stage if_stage(
    .clk            (clk            ),
    .reset          (reset          ),
    //allowin
    .ds_allowin     (ds_allowin     ),
    //brbus
    .br_bus         (br_bus         ),
    //outputs
    .fs_to_ds_valid (fs_to_ds_valid ),
    .fs_to_ds_bus   (fs_to_ds_bus   ),
    //inst sram interface
    .inst_sram_en   (inst_sram_en   ),
    .inst_sram_wen  (inst_sram_wen  ),
    .inst_sram_addr (inst_sram_addr ),
    .inst_sram_wdata(inst_sram_wdata),
    .inst_sram_rdata(inst_sram_rdata)
);
// ID stage
id_stage id_stage(
    .clk            (clk            ),
    .reset          (reset          ),
    //allowin
    .es_allowin     (es_allowin     ),
    .ds_allowin     (ds_allowin     ),
    //from fs
    .fs_to_ds_valid (fs_to_ds_valid ),
    .fs_to_ds_bus   (fs_to_ds_bus   ),
    //to es
    .ds_to_es_valid (ds_to_es_valid ),
    .ds_to_es_bus   (ds_to_es_bus   ),
    .es_to_ds_load_op ( es_to_ds_load_op),//
    .es_to_ds_dest (es_to_ds_dest),
    .ms_to_ds_dest (ms_to_ds_dest),
    .ws_to_ds_dest (ws_to_ds_dest),
    //to fs
    .br_bus         (br_bus         ),
    //to rf: for write back
    .ws_to_rf_bus   (ws_to_rf_bus   )
);
// EXE stage
exe_stage exe_stage(
    .clk            (clk            ),
    .reset          (reset          ),
    //allowin
    .ms_allowin     (ms_allowin     ),
    .es_allowin     (es_allowin     ),
    //from ds
    .ds_to_es_valid (ds_to_es_valid ),
    .ds_to_es_bus   (ds_to_es_bus   ),
    .es_to_ds_dest  (es_to_ds_dest),//
    .es_to_ds_load_op (es_to_ds_load_op),
    //to ms
    .es_to_ms_valid (es_to_ms_valid ),
    .es_to_ms_bus   (es_to_ms_bus   ),
    //data sram interface
    .data_sram_en   (data_sram_en   ),
    .data_sram_wen   (data_sram_wen   ),
    .data_sram_addr (data_sram_addr ),
    .data_sram_wdata(data_sram_wdata)
);
// MEM stage
mem_stage mem_stage(
    .clk            (clk            ),
    .reset          (reset          ),
    //allowin
    .ws_allowin     (ws_allowin     ),
    .ms_allowin     (ms_allowin     ),
    //from es
    .es_to_ms_valid (es_to_ms_valid ),
    .es_to_ms_bus   (es_to_ms_bus   ),
    .ms_to_ds_dest  (ms_to_ds_dest),//
    //to ws
    .ms_to_ws_valid (ms_to_ws_valid ),
    .ms_to_ws_bus   (ms_to_ws_bus   ),
    //from data sram
    .data_sram_rdata(data_sram_rdata)
);
// WB stage
wb_stage wb_stage(
    .clk            (clk            ),
    .reset          (reset          ),
    //allowin
    .ws_allowin     (ws_allowin     ),
    //from ms
    .ms_to_ws_valid (ms_to_ws_valid ),
    .ms_to_ws_bus   (ms_to_ws_bus   ),
    .ws_to_ds_dest (ws_to_ds_dest),//
    //to rf: for write back
    .ws_to_rf_bus   (ws_to_rf_bus   ),
    //trace debug interface
    .debug_wb_pc      (debug_wb_pc      ),
    .debug_wb_rf_we   (debug_wb_rf_we   ),
    .debug_wb_rf_wnum (debug_wb_rf_wnum ),
    .debug_wb_rf_wdata(debug_wb_rf_wdata)
);

endmodule
