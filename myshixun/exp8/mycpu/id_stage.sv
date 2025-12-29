`include "mycpu.h"
`include "tools.v"

module id_stage(
    input  logic                         clk           ,
    input  logic                         reset         ,
    input  logic                         es_to_ds_load_op,//
    //allowin 
    input  logic                         es_allowin    ,
    output logic                         ds_allowin    ,
    input  logic [4:0]                   es_to_ds_dest,//
    input  logic [4:0]                   ms_to_ds_dest,
    input  logic [4:0]                   ws_to_ds_dest,
    //from fs 
    input  logic                         fs_to_ds_valid,
    input  logic [`FS_TO_DS_BUS_WD -1:0] fs_to_ds_bus  ,
    //to es
    output logic                         ds_to_es_valid,
    output logic [`DS_TO_ES_BUS_WD -1:0] ds_to_es_bus  ,
    //to fs
    output logic [`BR_BUS_WD       -1:0] br_bus        ,
    //to rf: for write back
    input  logic [`WS_TO_RF_BUS_WD -1:0] ws_to_rf_bus
);

logic         ds_valid   ;
logic         ds_ready_go;
logic         br_stall;
logic         load_stall;

logic  [`FS_TO_DS_BUS_WD -1:0] fs_to_ds_bus_r;

logic [31:0] ds_inst;
logic [31:0] ds_pc  ;
assign {ds_inst,
        ds_pc  } = fs_to_ds_bus_r;

logic        rf_we   ;
logic [ 4:0] rf_waddr;
logic [31:0] rf_wdata;
assign {rf_we   ,  //37:37
        rf_waddr,  //36:32
        rf_wdata   //31:0
       } = ws_to_rf_bus;

// control signals
logic [11:0] alu_op;
logic        src1_is_pc;
logic        src2_is_imm;
logic        res_from_mem;
logic        dst_is_r1;
logic        gr_we;
logic        mem_we;
logic        src_reg_is_rd;
logic [4: 0] dest;
logic        need_ui5;
logic        need_si12;
logic        need_si16;
logic        need_si20;
logic        need_si26;  
logic        src2_is_4;

// inst splits
logic [ 5:0] op_31_26;
logic [ 3:0] op_25_22;
logic [ 1:0] op_21_20;
logic [ 4:0] op_19_15;
logic [ 4:0] rd;
logic [ 4:0] rj;
logic [ 4:0] rk;
logic [11:0] i12;
logic [19:0] i20;
logic [15:0] i16;
logic [25:0] i26;

logic [63:0] op_31_26_d;
logic [15:0] op_25_22_d;
logic [ 3:0] op_21_20_d;
logic [31:0] op_19_15_d;

// inst def
logic        inst_add_w; 
logic        inst_sub_w;  
logic        inst_slt;    
logic        inst_sltu;  
logic        inst_nor;    
logic        inst_and;    
logic        inst_or;     
logic        inst_xor;

logic        inst_addi_w; 
logic        inst_slli_w;  
logic        inst_srli_w;  
logic        inst_srai_w;  
logic        inst_lu12i_w;

logic        inst_jirl;   
logic        inst_b;      
logic        inst_bl;     
logic        inst_beq;    
logic        inst_bne;

logic        inst_ld_w;  
logic        inst_st_w; 

// reg & imm value
logic [ 4:0] rf_raddr1;
logic [31:0] rf_rdata1;
logic [ 4:0] rf_raddr2;
logic [31:0] rf_rdata2;
logic [31:0] rj_value;
logic [31:0] rkd_value;
logic [31:0] ds_imm;

// branch
logic        rj_eq_rd;
logic        br_taken;

logic [31:0] br_offs;
logic [31:0] jirl_offs;
logic [31:0] br_target;


logic inst_no_dest;
logic src_no_rj;
logic src_no_rk;
logic src_no_rd;
logic rj_wait;
logic rk_wait;
logic rd_wait;
logic no_wait;

assign ds_to_es_bus = {alu_op      ,  //149:138
                       res_from_mem,  //137:137
                       src1_is_pc  ,  //136:136
                       src2_is_imm ,  //135:135
                       gr_we       ,  //134:134
                       mem_we      ,  //133:133
                       dest        ,  //132:128
                       ds_imm      ,  //127:96
                       rj_value    ,  //95 :64
                       rkd_value   ,  //63 :32
                       ds_pc          //31 :0
                      };

assign ds_ready_go    = no_wait;
assign ds_allowin     = !ds_valid || ds_ready_go && es_allowin;
assign ds_to_es_valid = ds_valid && ds_ready_go;
always_ff @(posedge clk) begin 
    if (reset) begin     
        ds_valid <= 1'b0;
    end
    else if (ds_allowin) begin 
        ds_valid <= fs_to_ds_valid;
    end

    if (fs_to_ds_valid && ds_allowin) begin
        fs_to_ds_bus_r <= fs_to_ds_bus;
    end
end

// inst split
assign op_31_26  = ds_inst[31:26];
assign op_25_22  = ds_inst[25:22];
assign op_21_20  = ds_inst[21:20];
assign op_19_15  = ds_inst[19:15];

assign rd   = ds_inst[ 4: 0];
assign rj   = ds_inst[ 9: 5];
assign rk   = ds_inst[14:10];

assign i12  = ds_inst[21:10];
assign i20  = ds_inst[24: 5];
assign i16  = ds_inst[25:10];
assign i26  = {ds_inst[ 9: 0], ds_inst[25:10]};

decoder_6_64 u_dec0(.in(op_31_26 ), .out(op_31_26_d ));
decoder_4_16 u_dec1(.in(op_25_22 ), .out(op_25_22_d ));
decoder_2_4  u_dec2(.in(op_21_20 ), .out(op_21_20_d ));
decoder_5_32 u_dec3(.in(op_19_15 ), .out(op_19_15_d ));

// inst def
assign inst_add_w      = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h00];
assign inst_sub_w      = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h02];
assign inst_slt        = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h04];
assign inst_sltu       = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h05];
assign inst_nor        = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h08];
assign inst_and        = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h09];
assign inst_or         = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0a];
assign inst_xor        = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0b];

assign inst_addi_w     = op_31_26_d[6'h00] & op_25_22_d[4'ha];
assign inst_slli_w     = op_31_26_d[6'h00] & op_25_22_d[4'h1] & op_21_20_d[2'h0] & op_19_15_d[5'h01];
assign inst_srli_w     = op_31_26_d[6'h00] & op_25_22_d[4'h1] & op_21_20_d[2'h0] & op_19_15_d[5'h09];
assign inst_srai_w     = op_31_26_d[6'h00] & op_25_22_d[4'h1] & op_21_20_d[2'h0] & op_19_15_d[5'h11];
assign inst_lu12i_w    = op_31_26_d[6'h05] & ~ds_inst[25];

assign inst_jirl       = op_31_26_d[6'h13];
assign inst_b          = op_31_26_d[6'h14];
assign inst_bl         = op_31_26_d[6'h15];
assign inst_beq        = op_31_26_d[6'h16];
assign inst_bne        = op_31_26_d[6'h17];

assign inst_ld_w       = op_31_26_d[6'h0a] & op_25_22_d[4'h2];
assign inst_st_w       = op_31_26_d[6'h0a] & op_25_22_d[4'h6];

// control signals
assign alu_op[ 0] = inst_add_w    |
                    inst_addi_w   |
                    inst_jirl     | 
                    inst_bl       |                    
                    inst_ld_w     |
                    inst_st_w     ;
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

assign src1_is_pc    = inst_jirl   | 
                       inst_bl     ;
assign src2_is_imm   = inst_addi_w    |
                       inst_slli_w    | 
                       inst_srli_w    |
                       inst_srai_w    |
                       inst_lu12i_w   |
                       inst_jirl      |
                       inst_bl        |
                       inst_ld_w      |
                       inst_st_w      ;
assign res_from_mem  = inst_ld_w;
assign dst_is_r1     = inst_bl;
assign gr_we         = ~inst_b    & 
                       ~inst_beq  & 
                       ~inst_bne  & 
                       ~inst_st_w ;
assign mem_we        = inst_st_w;
assign src_reg_is_rd = inst_beq  | 
                       inst_bne  |
                       inst_st_w ;
assign dest       = dst_is_r1 ? 5'd1 : rd;
assign need_ui5   = inst_slli_w |
                    inst_srli_w | 
                    inst_srai_w ;
assign need_si12  = inst_addi_w |     
                    inst_ld_w   |
                    inst_st_w   ;
assign need_si16  = inst_jirl |
                    inst_beq  | 
                    inst_bne  ;
assign need_si20  = inst_lu12i_w;
assign need_si26  = inst_b |
                    inst_bl;
assign src2_is_4  = inst_jirl | 
                    inst_bl   ;

// reg & imm value
assign ds_imm = src2_is_4 ? 32'h4                      :
		        need_si20 ? {i20[19:0], 12'b0}         :
  /*need_ui5 || need_si12*/ {{20{i12[11]}}, i12[11:0]} ;

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

// branch
assign rj_eq_rd        = (rj_value == rkd_value);

assign br_taken = (   inst_beq  &&  rj_eq_rd
                   || inst_bne  && !rj_eq_rd
                   || inst_jirl
                   || inst_bl
                   || inst_b
                )  && ds_valid & no_wait;

assign br_stall   = load_stall & br_taken & ds_valid;
assign load_stall = es_to_ds_load_op & (((rj == es_to_ds_dest) & rj_wait) |
	                                        ((rk == es_to_ds_dest) & rk_wait) |
	                                        ((rd == es_to_ds_dest) & rd_wait)); 
assign br_bus       = {br_stall,br_taken,br_target};

assign br_offs = need_si26 ? {{ 4{i26[25]}}, i26[25:0], 2'b0} : 
                             {{14{i16[15]}}, i16[15:0], 2'b0} ;

assign jirl_offs = {{14{i16[15]}}, i16[15:0], 2'b0};
assign br_target = (inst_bl || inst_b || inst_beq || inst_bne) ? 
                                                                 (ds_pc + br_offs) :
                                                   /*inst_jirl*/ (rj_value + jirl_offs);
assign inst_no_dest = inst_st_w | inst_b | inst_beq | inst_bne;

assign src_no_rj    = inst_b | inst_bl | inst_lu12i_w;
assign src_no_rk    = inst_slli_w | inst_srli_w | inst_srai_w | inst_addi_w | inst_ld_w | inst_st_w | inst_jirl | 
                      inst_b | inst_bl | inst_beq | inst_bne | inst_lu12i_w;
assign src_no_rd    = ~inst_st_w & ~inst_beq & ~inst_bne;

assign rj_wait = ~src_no_rj && (rj != 5'b00000) && ((rj == es_to_ds_dest) || (rj == ms_to_ds_dest) || (rj == ws_to_ds_dest));
assign rk_wait = ~src_no_rk && (rk != 5'b00000) && ((rk == es_to_ds_dest) || (rk == ms_to_ds_dest) || (rk == ws_to_ds_dest));
assign rd_wait = ~src_no_rd && (rd != 5'b00000) && ((rd == es_to_ds_dest) || (rd == ms_to_ds_dest) || (rd == ws_to_ds_dest));

assign no_wait = ~rj_wait & ~rk_wait & ~rd_wait;
                                                

endmodule
