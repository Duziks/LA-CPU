`timescale 1ns / 1ps
`include "tools.v"
module minicpu_top(
    input          clk,
    input          resetn,

    output         inst_sram_we,
    output  [31:0] inst_sram_addr,
    output  [31:0] inst_sram_wdata,
    input   [31:0] inst_sram_rdata,

    output         data_sram_we,
    output  [31:0] data_sram_addr,
    output  [31:0] data_sram_wdata,
    input   [31:0] data_sram_rdata
);

logic         reset;
always @(posedge clk) reset <= ~resetn;

logic         valid;
always @(posedge clk) begin
    if (reset) begin
        valid <= 1'b0;
    end
    else begin
        valid <= 1'b1;
    end
end

logic  [31:0] pc;
logic [31:0] nextpc;
   
logic [31:0] inst;

logic [ 5:0] op_31_26;
logic [ 3:0] op_25_22;
logic [ 1:0] op_21_20;
logic [ 4:0] op_19_15;
logic [63:0] op_31_26_d;
logic [15:0] op_25_22_d;
logic [ 3:0] op_21_20_d;
logic [31:0] op_19_15_d;
logic [ 4:0] rd;
logic [ 4:0] rj;
logic [ 4:0] rk;
logic [11:0] i12;
logic [15:0] i16;

logic        inst_add_w;
logic        inst_addi_w;
logic        inst_ld_w;
logic        inst_st_w;
logic        inst_bne;

logic        src2_is_imm;
logic        res_from_mem;
logic        gr_we;
logic        mem_we;
logic        src_reg_is_rd;
logic [31:0] rj_value;
logic [31:0] rkd_value;

logic [ 4:0] rf_raddr1;
logic [ 4:0] rf_raddr2;
logic [31:0] rf_wdata;

logic        br_taken;
logic        rj_eq_rd;
logic [31:0] br_offs;
logic [31:0] br_target;

logic [31:0] imm;
logic [31:0] alu_src1;
logic [31:0] alu_src2;
logic [31:0] alu_result;


always_ff @(posedge clk) begin
    if (reset) begin
        pc <= 32'h1bfffffc;     //trick: to make nextpc be 0x1c000000 during reset 
    end
    else begin
        pc <= nextpc;
    end
end

assign inst_sram_we    = 1'b0;
assign inst_sram_addr  = pc;
assign inst_sram_wdata = 32'b0;
assign inst            = inst_sram_rdata;

assign op_31_26 = inst[31:26];
assign op_25_22 = inst[25:22];
assign op_21_20 = inst[21:20];
assign op_19_15 = inst[19:15];
assign rd       = inst[ 4: 0];
assign rj       = inst[ 9: 5];
assign rk       = inst[14:10];
assign i12      = inst[21:10];
assign i16      = inst[25:10];

decoder_6_64 u_dec0(.in(op_31_26 ), .co(op_31_26_d ));
decoder_4_16 u_dec1(.in(op_25_22 ), .co(op_25_22_d ));
decoder_2_4  u_dec2(.in(op_21_20 ), .co(op_21_20_d ));
decoder_5_32 u_dec3(.in(op_19_15 ), .co(op_19_15_d ));

assign inst_add_w  = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h00];
assign inst_addi_w = op_31_26_d[6'h00] & op_25_22_d[4'ha];
assign inst_ld_w   = op_31_26_d[6'h0a] & op_25_22_d[4'h2];
assign inst_st_w   = op_31_26_d[6'h0a] & op_25_22_d[4'h6]; //在这里实现inst_st_w指令的译码
assign inst_bne    = op_31_26_d[6'h17];

assign src2_is_imm   = inst_addi_w | inst_ld_w | inst_st_w; // 在这里实现立即数选择信号
assign res_from_mem  = inst_ld_w;
assign gr_we         = inst_add_w | inst_ld_w | inst_addi_w;
assign mem_we        = inst_st_w;
assign src_reg_is_rd = inst_bne | inst_st_w;

assign rf_raddr1 = rj;
assign rf_raddr2 = src_reg_is_rd ? rd :rk;
regfile u_regfile(
    .clk    (clk      ),
    .raddr1 (rf_raddr1),
    .rdata1 (rj_value ),
    .raddr2 (rf_raddr2),
    .rdata2 (rkd_value),
    .we     (gr_we    ),
    .waddr  (rd       ),
    .wdata  (rf_wdata )
    );//在空出的括号里完成引脚匹配

assign br_offs   = {{14{i16[15]}}, i16[15:0], 2'b00}; //在这里完成br_offs信号的生成
assign br_target = pc + br_offs;
assign rj_eq_rd  = (rj_value == rkd_value);
assign br_taken  = valid && inst_bne  && !rj_eq_rd;
assign nextpc    = br_taken ? br_target : pc + 4; //在这里实现nextpc信号的生成

assign imm      = {{20{i12[11]}},i12[11:0]};
assign alu_src1 = rj_value;
assign alu_src2 = src2_is_imm ? imm : rkd_value; //在这里实现alu_src2信号

assign alu_result = alu_src1+alu_src2;

assign data_sram_we    = mem_we;
assign data_sram_addr  = alu_result;
assign data_sram_wdata = rkd_value;

assign rf_wdata = res_from_mem ? data_sram_rdata : alu_result; //在这里完成写回寄存器值的选择

endmodule