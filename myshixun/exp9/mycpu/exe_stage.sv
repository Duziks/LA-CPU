`include "mycpu.h"
module exe_stage(
    input  logic                         clk           ,
    input  logic                         reset         ,
    output logic                         es_to_ds_load_op,
    //allowin
    input  logic                         ms_allowin    ,
    output logic                         es_allowin    ,
    //from ds
    input  logic                         ds_to_es_valid,
    input  logic [`DS_TO_ES_BUS_WD -1:0] ds_to_es_bus  ,
    output logic [ 4:0]                  es_to_ds_dest,  // 输出到hazard的写寄存器地址
    //to ms
    output logic                         es_to_ms_valid,
    output logic [`ES_TO_MS_BUS_WD -1:0] es_to_ms_bus  ,
    // 前递输出：EXE→ID
    output logic                         exe_forward_valid,
    output logic [4:0]                   exe_forward_addr,
    output logic [31:0]                  exe_forward_data,
    // data sram interface
    output logic        data_sram_en   ,
    output logic [ 3:0] data_sram_wen   ,
    output logic [31:0] data_sram_addr ,
    output logic [31:0] data_sram_wdata
);
logic        es_valid      ;
logic        es_ready_go   ;
logic  [`DS_TO_ES_BUS_WD -1:0] ds_to_es_bus_r;
logic [11:0] es_alu_op      ;
logic        es_res_from_mem;
logic        es_src1_is_pc  ;
logic        es_src2_is_imm ;
logic        es_gr_we       ;
logic        es_mem_we      ;
logic [ 4:0] es_dest        ;
logic [31:0] es_imm         ;
logic [31:0] es_rj_value    ;
logic [31:0] es_rkd_value   ;
logic [31:0] es_pc          ;
assign {es_alu_op      ,
        es_res_from_mem,
        es_src1_is_pc  ,
        es_src2_is_imm ,
        es_gr_we       ,
        es_mem_we      ,
        es_dest        ,
        es_imm         ,
        es_rj_value    ,
        es_rkd_value   ,
        es_pc          } = ds_to_es_bus_r;
logic [31:0] es_alu_src1   ;
logic [31:0] es_alu_src2   ;
logic [31:0] es_alu_result ;
assign es_to_ms_bus = {es_res_from_mem,
                       es_gr_we       ,
                       es_dest        ,
                       es_alu_result  ,
                       es_pc          };
// 输出到hazard：是否为ld_w指令
assign es_to_ds_load_op = es_res_from_mem && es_valid;
// 输出到hazard：要写的寄存器地址
assign es_to_ds_dest = es_dest & {5{es_valid}};
// -------------------------- 新增前递输出逻辑 --------------------------
// 非Load指令且EXE阶段有效、要写寄存器时，前递有效
assign exe_forward_valid = es_valid && es_gr_we && !es_res_from_mem;
assign exe_forward_addr = es_dest;       // 要写的寄存器地址
assign exe_forward_data = es_alu_result; // 要写的数据（ALU结果）
// -------------------------- 原有逻辑保持不变 --------------------------
assign es_ready_go    = 1'b1;
assign es_allowin     = !es_valid || es_ready_go && ms_allowin;
assign es_to_ms_valid = es_valid && es_ready_go;
always_ff @(posedge clk) begin
    if (reset) begin     
        es_valid <= 1'b0;
    end
    else if (es_allowin) begin 
        es_valid <= ds_to_es_valid;
    end
    if (ds_to_es_valid && es_allowin) begin
        ds_to_es_bus_r <= ds_to_es_bus;
    end
end
// ALU运算（原有逻辑不变）
assign es_alu_src1 = es_src1_is_pc ? es_pc[31:0] : es_rj_value;
assign es_alu_src2 = es_src2_is_imm ? es_imm : es_rkd_value;
alu u_alu(
    .alu_op     (es_alu_op    ),
    .alu_src1   (es_alu_src1  ),
    .alu_src2   (es_alu_src2  ),
    .alu_result (es_alu_result)
);
// 数据SRAM控制（原有逻辑不变）
assign data_sram_en    = (es_res_from_mem || es_mem_we) && es_valid;
assign data_sram_wen    = es_mem_we ? 4'hf : 4'h0;
assign data_sram_addr  = es_alu_result;
assign data_sram_wdata = es_rkd_value;
endmodule