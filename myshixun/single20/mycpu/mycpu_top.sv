`timescale 1ns / 1ps
`include "tools.v"
module mycpu_top(
    input          clk,
    input          resetn,
    // inst sram interface
    output         inst_sram_we,
    output  [31:0] inst_sram_addr,
    output  [31:0] inst_sram_wdata,
    input   [31:0] inst_sram_rdata,
    // data sram interface
    output         data_sram_we,
    output  [31:0] data_sram_addr,
    output  [31:0] data_sram_wdata,
    input   [31:0] data_sram_rdata,
    // trace debug interface
    output  [31:0] debug_wb_pc,
    output  [ 3:0] debug_wb_rf_we,
    output  [ 4:0] debug_wb_rf_wnum,
    output  [31:0] debug_wb_rf_wdata
);
logic         reset;
always_ff @(posedge clk) reset <= ~resetn;

// 复位后valid有效，CPU开始工作

logic         valid;
always_ff @(posedge clk) begin
    if (reset) begin
        valid <= 1'b0;
    end
    else begin
        valid <= 1'b1;
    end
end

logic [31:0] seq_pc;  //顺序PC  PC+4
logic [31:0] nextpc;  
logic        br_taken; //发生跳转
logic [31:0] br_target; //跳转地址
logic [31:0] inst;  //指令
logic  [31:0] pc;    

logic [11:0] alu_op; //运算器控制信号
logic        load_op;    
logic        src1_is_pc;  //alu src1选择
logic        src2_is_imm; //alu src2选择
logic        res_from_mem; //结果来自mem
logic        dst_is_r1;  //目的寄存器是否为r1
logic        gr_we;      // 寄存器写操作
logic        mem_we;     //存储器写操作
logic        src_reg_is_rd; //rd是否为源操作数
logic [4: 0] dest;  //目的寄存器
logic [31:0] rj_value; //寄存器Rj的值
logic [31:0] rkd_value; //寄存器 Rk或Rd的值
logic [31:0] imm;  //立即数
logic [31:0] br_offs;  //br跳转的偏移量
logic [31:0] jirl_offs; //jirl跳转的偏移量

logic [ 5:0] op_31_26; //分段译码 
logic [ 3:0] op_25_22; //分段译码
logic [ 1:0] op_21_20; //分段译码
logic [ 4:0] op_19_15; //分段译码
logic [ 4:0] rd; 
logic [ 4:0] rj;
logic [ 4:0] rk;
logic [11:0] i12;
logic [19:0] i20;
logic [15:0] i16;
logic [25:0] i26;

logic [63:0] op_31_26_d; //分段译码输出 onehot
logic [15:0] op_25_22_d; //分段译码输出 onehot
logic [ 3:0] op_21_20_d; //分段译码输出 onehot
logic [31:0] op_19_15_d; //分段译码输出 onehot

logic        inst_add_w; 
logic        inst_sub_w;
logic        inst_slt;
logic        inst_sltu;
logic        inst_nor;
logic        inst_and;
logic        inst_or;
logic        inst_xor;
logic        inst_slli_w;
logic        inst_srli_w;
logic        inst_srai_w;
logic        inst_addi_w;
logic        inst_ld_w;
logic        inst_st_w;
logic        inst_jirl;
logic        inst_b;
logic        inst_bl;
logic        inst_beq;
logic        inst_bne;
logic        inst_lu12i_w;

logic        need_ui5;  
logic        need_si12;
logic        need_si16;
logic        need_si20;
logic        need_si26;
logic        src2_is_4;

//寄存器文件接口
logic [ 4:0] rf_raddr1; 
logic [31:0] rf_rdata1;
logic [ 4:0] rf_raddr2;
logic [31:0] rf_rdata2;
logic        rf_we   ;
logic [ 4:0] rf_waddr;
logic [31:0] rf_wdata;

//运算器接口
logic [31:0] alu_src1   ;
logic [31:0] alu_src2   ;
logic [31:0] alu_result ;

//数据存储器输出
logic [31:0] mem_result;
logic [31:0] final_result;

////////////////////////////取指//////////////////////////////////////////
assign seq_pc       = pc + 32'h4;
assign nextpc       = br_taken ? br_target : seq_pc;

always_ff @(posedge clk or posedge reset) begin
    if (reset) begin
        pc <= 32'h1bfffffc;     //trick: to make nextpc be 0x1c000000 during reset 
    end
    else begin
        pc <= nextpc;
    end
end

assign inst_sram_we    = 1'b0;   //当前实验不需要写指令存储器，写信号无效
assign inst_sram_addr  = pc;     
assign inst_sram_wdata = 32'b0;  
assign inst            = inst_sram_rdata;   

////////////////////////////指令译码//////////////////////////////////////////

assign op_31_26  = inst[31:26];
assign op_25_22  = inst[25:22];
assign op_21_20  = inst[21:20];
assign op_19_15  = inst[19:15];

assign rd   = inst[ 4: 0];
assign rj   = inst[ 9: 5];
assign rk   = inst[14:10];

assign i12  = inst[21:10];
assign i20  = inst[24: 5];
assign i16  = inst[25:10];
assign i26  = {inst[ 9: 0], inst[25:10]};

decoder_6_64 u_dec0(.in(op_31_26 ), .out(op_31_26_d ));
decoder_4_16 u_dec1(.in(op_25_22 ), .out(op_25_22_d ));
decoder_2_4  u_dec2(.in(op_21_20 ), .out(op_21_20_d ));
decoder_5_32 u_dec3(.in(op_19_15 ), .out(op_19_15_d ));

assign inst_add_w  = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h00];
assign inst_sub_w  = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h02];
assign inst_slt    = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h04];
assign inst_sltu   = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h05];
assign inst_nor    = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h08];
assign inst_and    = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h09];
assign inst_or     = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0a];
assign inst_xor    = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0b];
assign inst_slli_w = op_31_26_d[6'h00] & op_25_22_d[4'h1] & op_21_20_d[2'h0] & op_19_15_d[5'h01];
assign inst_srli_w = op_31_26_d[6'h00] & op_25_22_d[4'h1] & op_21_20_d[2'h0] & op_19_15_d[5'h09];
assign inst_srai_w = op_31_26_d[6'h00] & op_25_22_d[4'h1] & op_21_20_d[2'h0] & op_19_15_d[5'h11];
assign inst_addi_w = op_31_26_d[6'h00] & op_25_22_d[4'ha];
assign inst_ld_w   = op_31_26_d[6'h0a] & op_25_22_d[4'h2];
assign inst_st_w   = op_31_26_d[6'h0a] & op_25_22_d[4'h6];
assign inst_jirl   = op_31_26_d[6'h13];
assign inst_b      = op_31_26_d[6'h14];
assign inst_bl     = op_31_26_d[6'h15];
assign inst_beq    = op_31_26_d[6'h16];
assign inst_bne    = op_31_26_d[6'h17];
assign inst_lu12i_w= op_31_26_d[6'h05] & ~inst[25];

assign alu_op[ 0] = inst_add_w | inst_addi_w | inst_ld_w | inst_st_w
                    | inst_jirl | inst_bl;
assign alu_op[ 1] = inst_sub_w;
assign alu_op[ 2] = inst_slt;
assign alu_op[ 3] = inst_sltu;
assign alu_op[ 4] = inst_and;
assign alu_op[ 5] = inst_nor;
assign alu_op[ 6] = inst_or;
assign alu_op[ 7] = inst_xor;
assign alu_op[ 8] = inst_slli_w;
assign alu_op[ 9] = inst_srli_w;
assign alu_op[10] = inst_srai_w;
assign alu_op[11] = inst_lu12i_w;

assign need_ui5   =  inst_slli_w | inst_srli_w | inst_srai_w;
assign need_si12  =  inst_addi_w | inst_ld_w | inst_st_w;
assign need_si16  =  inst_jirl | inst_beq | inst_bne;
assign need_si20  =  inst_lu12i_w;
assign need_si26  =  inst_b | inst_bl;
assign src2_is_4  =  inst_jirl | inst_bl;

//立即数计算
assign imm = src2_is_4 ? 32'h4                      :
             need_si20 ? {i20[19:0], 12'b0}         :
/*need_ui5 || need_si12*/{{20{i12[11]}}, i12[11:0]} ;

//br指令偏移地址计算
assign br_offs = need_si26 ? {{ 4{i26[25]}}, i26[25:0], 2'b0} :
                             {{14{i16[15]}}, i16[15:0], 2'b0} ;
//jirl指令偏移地址计算
assign jirl_offs = {{14{i16[15]}}, i16[15:0], 2'b0};
//beq、bne、st.w指令 rd为源操作数
assign src_reg_is_rd = inst_beq | inst_bne | inst_st_w;

assign src1_is_pc    = inst_jirl | inst_bl;

assign src2_is_imm   = inst_slli_w |
                       inst_srli_w |
                       inst_srai_w |
                       inst_addi_w |
                       inst_ld_w   |
                       inst_st_w   |
                       inst_lu12i_w|
                       inst_jirl   |
                       inst_bl     ;

assign res_from_mem  = inst_ld_w;
//bl指令的目的寄存器为r1
assign dst_is_r1     = inst_bl;
assign gr_we         = ~inst_st_w & ~inst_beq & ~inst_bne & ~inst_b;
assign mem_we        = inst_st_w;
assign dest          = dst_is_r1 ? 5'd1 : rd;

assign rf_raddr1 = rj;
assign rf_raddr2 = src_reg_is_rd ? rd :rk;
regfile u_regfile(
    .clk    (clk      ),
    .raddr1 (rf_raddr1),
    .rdata1 (rf_rdata1),
    .raddr2 (rf_raddr2),
    .rdata2 (rf_rdata2),
    .we     (rf_we    ),
    .waddr  (rf_waddr ),
    .wdata  (rf_wdata )
    );

assign rj_value  = rf_rdata1;
assign rkd_value = rf_rdata2;

////////////////////////////指令执行//////////////////////////////////////////
//跳转指令处理
logic rj_eq_rd;
assign rj_eq_rd = (rj_value == rkd_value);
assign br_taken = (   inst_beq  &&  rj_eq_rd
                   || inst_bne  && !rj_eq_rd
                   || inst_jirl
                   || inst_bl
                   || inst_b
                  ) && valid;
assign br_target = (inst_beq || inst_bne || inst_bl || inst_b) ? (pc + br_offs) :
                                                   /*inst_jirl*/ (rj_value + jirl_offs);

//运算器
assign alu_src1 = src1_is_pc  ? pc[31:0] : rj_value;
assign alu_src2 = src2_is_imm ? imm : rkd_value;

alu u_alu(
    .alu_op     (alu_op    ),
    .alu_src1   (alu_src1  ),
    .alu_src2   (alu_src2  ),
    .alu_result (alu_result)
    );

////////////////////////////访存//////////////////////////////////////////
assign data_sram_we    = mem_we && valid;
assign data_sram_addr  = alu_result;
assign data_sram_wdata = rkd_value;

assign mem_result   = data_sram_rdata;
assign final_result = res_from_mem ? mem_result : alu_result;

//////////////////////////数据写回////////////////////////////////////////
assign rf_we    = gr_we && valid;
assign rf_waddr = dest;
assign rf_wdata = final_result;

// debug info generate
assign debug_wb_pc       = pc;
assign debug_wb_rf_we   = {4{rf_we}};
assign debug_wb_rf_wnum  = dest;
assign debug_wb_rf_wdata = final_result;

endmodule