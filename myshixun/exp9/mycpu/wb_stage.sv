`include "mycpu.h"

module wb_stage(
    input  logic                          clk           ,
    input  logic                          reset         ,
    //allowin
    output logic                          ws_allowin    ,
    //from ms
    input  logic                          ms_to_ws_valid,
    input  logic [`MS_TO_WS_BUS_WD -1:0]  ms_to_ws_bus  ,
    output logic [ 4:0]                   ws_to_ds_dest,//写回级目的操作数寄存器号
    //to rf: for write back
    output logic [`WS_TO_RF_BUS_WD -1:0]  ws_to_rf_bus  ,
    //trace debug interface
    output logic [31:0] debug_wb_pc     ,
    output logic [ 3:0] debug_wb_rf_we  ,
    output logic [ 4:0] debug_wb_rf_wnum,
    output logic [31:0] debug_wb_rf_wdata
);

logic         ws_valid;
logic        ws_ready_go;

logic [`MS_TO_WS_BUS_WD -1:0] ms_to_ws_bus_r;
logic        ws_gr_we;
logic [ 4:0] ws_dest;
logic [31:0] ws_final_result;
logic [31:0] ws_pc;
assign {ws_gr_we       ,  //69:69
        ws_dest        ,  //68:64
        ws_final_result,  //63:32
        ws_pc             //31:0
       } = ms_to_ws_bus_r;

logic        rf_we;
logic [4 :0] rf_waddr;
logic [31:0] rf_wdata;
assign ws_to_rf_bus = {rf_we   ,  //37:37
                       rf_waddr,  //36:32
                       rf_wdata   //31:0
                      };

assign ws_to_ds_dest = ws_dest & {5{ws_valid}};
assign ws_ready_go = 1'b1;
assign ws_allowin  = !ws_valid || ws_ready_go;
always_ff @(posedge clk) begin
    if (reset) begin
        ws_valid <= 1'b0;
    end
    else if (ws_allowin) begin
        ws_valid <= ms_to_ws_valid;
    end

    if (ms_to_ws_valid && ws_allowin) begin
        ms_to_ws_bus_r <= ms_to_ws_bus;
    end
end

assign rf_we    = ws_gr_we && ws_valid;
assign rf_waddr = ws_dest;
assign rf_wdata = ws_final_result;

// debug info generate
assign debug_wb_pc       = ws_pc;
assign debug_wb_rf_we    = {4{rf_we}};
assign debug_wb_rf_wnum  = ws_dest;
assign debug_wb_rf_wdata = ws_final_result;

endmodule
