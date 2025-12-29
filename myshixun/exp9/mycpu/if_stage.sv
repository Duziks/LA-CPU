`include "mycpu.h"
module if_stage(
    input  logic                         clk            ,
    input  logic                         reset          ,
    // allowin
    input  logic                         ds_allowin     ,
    // 来自hazard的阻塞信号（INPUT，仅读取，不赋值）
    input  logic                         block_if       ,
    input  logic                         br_stall       ,
    // brbus：分支信号（INPUT，拆分到内部变量）
    input  logic [`BR_BUS_WD       -1:0] br_bus         ,
    // to ds
    output logic                         fs_to_ds_valid ,
    output logic [`FS_TO_DS_BUS_WD -1:0] fs_to_ds_bus   ,
    // inst sram interface
    output logic        inst_sram_en   ,
    output logic [ 3:0] inst_sram_wen  ,
    output logic [31:0] inst_sram_addr ,
    output logic [31:0] inst_sram_wdata,
    input  logic [31:0] inst_sram_rdata
);
// 明确定义所有信号
logic         fs_valid;
logic         fs_ready_go;
logic         fs_allowin;
logic         to_fs_valid;
// 核心修复：按34位拆分（1+1+32）
logic         br_bus_stall;   // 1位（br_bus[33]）
logic         br_bus_taken;   // 1位（br_bus[32]）
logic [31:0]  br_bus_target;  // 32位（br_bus[31:0]）
logic [31:0]  fs_inst;
logic [31:0]  fs_pc;
logic [31:0]  seq_pc;
logic [31:0]  nextpc;
logic         pre_if_ready_go;

// 核心修复：正确拆分34位br_bus（无位宽缺失）
assign br_bus_stall = br_bus[33];  // 第34位（stall）
assign br_bus_taken = br_bus[32];  // 第33位（taken）
assign br_bus_target = br_bus[31:0];// 低32位（target）

// 信号赋值（使用内部变量，而非INPUT的br_stall）
assign fs_to_ds_bus = {fs_inst, fs_pc};
assign pre_if_ready_go = ~br_bus_stall;
assign to_fs_valid = ~reset && pre_if_ready_go;
assign seq_pc = fs_pc + 32'h4;
assign nextpc = br_bus_taken ? br_bus_target : seq_pc;

// IF阶段就绪与允许进入
assign fs_ready_go = ~br_bus_taken;
assign fs_allowin = !fs_valid || fs_ready_go && ds_allowin;
// IF→ID有效：加入block_if阻塞控制
assign fs_to_ds_valid = fs_valid && fs_ready_go && ~block_if;

// 时序逻辑
always @(posedge clk) begin
    if (reset) begin
        fs_valid <= 1'b0;
        fs_pc <= 32'h1bfffffc;
    end else begin
        if (fs_allowin) begin
            fs_valid <= to_fs_valid;
        end
        if (to_fs_valid && (fs_allowin || br_bus_taken)) begin
            fs_pc <= nextpc;
        end
    end
end

// 指令SRAM控制
assign inst_sram_en = to_fs_valid && (fs_allowin || br_bus_taken) && pre_if_ready_go;
assign inst_sram_wen = 4'h0;
assign inst_sram_addr = nextpc;
assign inst_sram_wdata = 32'b0;
assign fs_inst = inst_sram_rdata;
endmodule