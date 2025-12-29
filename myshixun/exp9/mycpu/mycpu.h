`timescale 1ns / 1ps
`ifndef MYCPU_H
    `define MYCPU_H
    // 核心修复：BR_BUS_WD改为34位（1(br_stall)+1(br_taken)+32(br_target)=34位）
    `define BR_BUS_WD       34      
    `define FS_TO_DS_BUS_WD 64      // 32位inst + 32位pc
    `define DS_TO_ES_BUS_WD 150     // 12位alu_op + 1位res_from_mem + 1位src1_is_pc + 1位src2_is_imm + 1位gr_we + 1位mem_we + 5位dest + 32位imm + 32位rj_value + 32位rkd_value + 32位pc
    `define ES_TO_MS_BUS_WD 71      // 1位res_from_mem + 1位gr_we + 5位dest + 32位alu_result + 32位pc
    `define MS_TO_WS_BUS_WD 70      // 1位gr_we + 5位dest + 32位final_result + 32位pc
    `define WS_TO_RF_BUS_WD 38      // 1位we + 5位waddr + 32位wdata
`endif