`include "mycpu.h"

module if_stage(
    input  logic                         clk            ,
    input  logic                         reset          ,
    //allwoin
    input  logic                         ds_allowin     ,
    //brbus
    input  logic [`BR_BUS_WD       -1:0] br_bus         ,
    //to ds
    output logic                         fs_to_ds_valid ,
    output logic [`FS_TO_DS_BUS_WD -1:0] fs_to_ds_bus   ,
    // inst sram interface
    output logic        inst_sram_en   ,
    output logic [ 3:0] inst_sram_wen  ,
    output logic [31:0] inst_sram_addr ,
    output logic [31:0] inst_sram_wdata,
    input  logic [31:0] inst_sram_rdata
);

logic         fs_valid;
logic        fs_ready_go;
logic        fs_allowin;
logic        to_fs_valid;
logic         br_stall;
logic         pre_if_ready_go;

logic         br_taken;
logic [ 31:0] br_target;
assign {br_stall, br_taken, br_target} = br_bus;



logic [31:0] fs_inst;
logic  [31:0] fs_pc;
assign fs_to_ds_bus = {fs_inst ,
                       fs_pc   };

// pre-IF stage
logic [31:0] seq_pc;
logic [31:0] nextpc;
assign to_fs_valid  = ~reset && pre_if_ready_go;
assign pre_if_ready_go = ~br_stall;
assign seq_pc       = fs_pc + 32'h4;
assign nextpc       = br_taken ? br_target : seq_pc; 

// IF stage
assign fs_ready_go    = ~br_taken;
assign fs_allowin     = !fs_valid || fs_ready_go && ds_allowin;
assign fs_to_ds_valid =  fs_valid && fs_ready_go;
always @(posedge clk) begin
    if (reset) begin
        fs_valid <= 1'b0;
    end
    else if (fs_allowin) begin
        fs_valid <= to_fs_valid;
    end

   if (reset) begin
        fs_pc <= 32'h1bfffffc;    
    end
    else if (to_fs_valid && (fs_allowin || br_taken)) begin
        fs_pc <= nextpc;
    end
end

assign inst_sram_en    = to_fs_valid && (fs_allowin || br_taken) && pre_if_ready_go;
assign inst_sram_wen   = 4'h0;
assign inst_sram_addr  = nextpc;
assign inst_sram_wdata = 32'b0;

assign fs_inst         = inst_sram_rdata;

endmodule
