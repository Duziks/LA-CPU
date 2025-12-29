`include "mycpu.h"

module mem_stage(
    input  logic                         clk           ,
    input  logic                         reset         ,
    //allowin
    input  logic                         ws_allowin    ,
    output logic                         ms_allowin    ,
    //from es
    input  logic                         es_to_ms_valid,
    input  logic [`ES_TO_MS_BUS_WD -1:0] es_to_ms_bus  ,
    //to ws
    output logic                         ms_to_ws_valid,
    output logic [`MS_TO_WS_BUS_WD -1:0] ms_to_ws_bus  ,
    //from data sram
    input  logic [31:0] data_sram_rdata
);

logic         ms_valid;
logic        ms_ready_go;

logic [`ES_TO_MS_BUS_WD -1:0] es_to_ms_bus_r;
logic        ms_res_from_mem;
logic        ms_gr_we;
logic [ 4:0] ms_dest;
logic [31:0] ms_alu_result;
logic [31:0] ms_pc;
assign {ms_res_from_mem,  //70:70
        ms_gr_we       ,  //69:69
        ms_dest        ,  //68:64
        ms_alu_result  ,  //63:32
        ms_pc             //31:0
       } = es_to_ms_bus_r;

logic [31:0] mem_result;
logic [31:0] ms_final_result;

assign ms_to_ws_bus = {ms_gr_we       ,  //69:69
                       ms_dest        ,  //68:64
                       ms_final_result,  //63:32
                       ms_pc             //31:0
                      };

assign ms_ready_go    = 1'b1;
assign ms_allowin     = !ms_valid || ms_ready_go && ws_allowin;
assign ms_to_ws_valid = ms_valid && ms_ready_go;
always_ff @(posedge clk) begin
    if (reset) begin
        ms_valid <= 1'b0;
    end
    else if (ms_allowin) begin
        ms_valid <= es_to_ms_valid;
    end

    if (es_to_ms_valid && ms_allowin) begin
        es_to_ms_bus_r  <= es_to_ms_bus;
    end
end

assign mem_result = data_sram_rdata;

assign ms_final_result = ms_res_from_mem ? mem_result : ms_alu_result;

endmodule
