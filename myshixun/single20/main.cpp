#include "Vsoc_lite_top.h"  // Verilator生成的模型头文件
#include "verilated.h"
#include "verilated_fst_c.h"  // 保持FST头文件不变
#include <iostream>
#include <fstream>
#include <sstream>

#define TRACE_REF_FILE "./trace/golden_trace.txt"
#define END_PC 0x1c000100

vluint64_t main_time = 0;

double sc_time_stamp() {
    return main_time;
}

VerilatedContext* contextp = NULL;
VerilatedFstC* tfp = NULL;  // 保持FST类不变
static Vsoc_lite_top* top;

void step_and_dump_wave(){
  top->eval();
  // 关键修改：将 write() 改回 dump()，适配5.043版本FST API
  tfp->dump(contextp->time());
  contextp->timeInc(1);
}

void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedFstC;  // 保持FST类初始化不变
  top = new Vsoc_lite_top;
  contextp->traceEverOn(true);
  // 可选：设置trace深度为3，减少深层内部信号（进一步减小FST体积）
  top->trace(tfp, 3);
  tfp->open("dump.fst");  // 保持FST文件输出不变
}

void sim_exit(){
  step_and_dump_wave();
  delete top;
  tfp->close();
  delete contextp;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    sim_init();

    // 打开参考文件（原逻辑不变）
    std::ifstream trace_ref(TRACE_REF_FILE);
    if (!trace_ref.is_open()) {
        std::cerr << "Failed to open trace reference file: " << TRACE_REF_FILE << std::endl;
        return -1;
    }

    // 初始化信号（原逻辑不变）
    top->resetn = 0;
    top->clk = 0;
    step_and_dump_wave();
    uint8_t trace_cmp_flag = 0;
    uint32_t ref_wb_pc = 0;
    uint8_t ref_wb_rf_wnum = 0;
    uint32_t ref_wb_rf_wdata = 0;
    int cycle_count = 0;

    // 仿真循环（原逻辑不变）
    while (!Verilated::gotFinish()) {
        top->clk = !top->clk;
        if (contextp->time() >= 6) {
            top->resetn = 1;
        }

        top->switch_1 = 0xff;
        top->btn_key_row = 0;
        top->btn_step    = 3;

        step_and_dump_wave();

        // 参考文件对比逻辑（原逻辑不变）
        if((top->debug_wb_rf_wen!=0)&&(top->debug_wb_rf_wnum !=0 ) && !trace_ref.eof() && top->open_trace){
          if (top->clk==1){
                cycle_count++;
                std::string line;
                if (std::getline(trace_ref, line)) {
                    std::istringstream iss(line);
                    std::string trace_cmp_flag_str, ref_wb_pc_str, ref_wb_rf_wnum_str, ref_wb_rf_wdata_str;
                    iss >> trace_cmp_flag_str >> ref_wb_pc_str >> ref_wb_rf_wnum_str >> ref_wb_rf_wdata_str;

                    trace_cmp_flag = static_cast<uint8_t>(std::stoul(trace_cmp_flag_str, nullptr, 16));
                    ref_wb_pc = std::stoul(ref_wb_pc_str, nullptr, 16);
                    ref_wb_rf_wnum = static_cast<uint8_t>(std::stoul(ref_wb_rf_wnum_str, nullptr, 16));
                    ref_wb_rf_wdata = std::stoul(ref_wb_rf_wdata_str, nullptr, 16);
                    iss.clear();

                    if (cycle_count % 500 == 0) {
                        std::cout << "    reference: PC = 0x" << std::hex << ref_wb_pc
                                  << ", wb_rf_wnum = 0x" << static_cast<int>(ref_wb_rf_wnum)
                                  << ", wb_rf_wdata = 0x" << ref_wb_rf_wdata << std::endl;
                         std::cout << "    debug     :PC = 0x" << std::hex << top->debug_wb_pc
                                  << ", wb_rf_wnum = 0x" << static_cast<int>(top->debug_wb_rf_wnum)
                                  << ", wb_rf_wdata = 0x" << top->debug_wb_rf_wdata << std::endl;
                    }
                }

                if (top->debug_wb_pc != ref_wb_pc || top->debug_wb_rf_wnum != ref_wb_rf_wnum ||
                    top->debug_wb_rf_wdata != ref_wb_rf_wdata) {
                    std::cerr << "Error: Simulation data does not match reference data!" << std::endl;
                    std::cout << "    debug     :PC = 0x" << std::hex << top->debug_wb_pc
                          << ", wb_rf_wnum = 0x" << static_cast<int>(top->debug_wb_rf_wnum)
                          << ", wb_rf_wdata = 0x" << top->debug_wb_rf_wdata << std::endl;
                    std::cout << "    reference: PC = 0x" << std::hex << ref_wb_pc
                              << ", wb_rf_wnum = 0x" << static_cast<int>(ref_wb_rf_wnum)
                              << ", wb_rf_wdata = 0x" << ref_wb_rf_wdata << std::endl;
                    break;
                }
            }
        }

        // 仿真结束条件（原逻辑不变）
        if (contextp->time() > 1000000) {
            std::cout << "==============================================================" << std::endl;
            std::cout << "time out" << std::endl;
            break;
        }

        if (top->debug_wb_pc == END_PC ) {
            std::cout << "==============================================================" << std::endl;
            std::cout << "Test PASS!!!" << std::endl;
            break;
        }
    }

    trace_ref.close();
    sim_exit();
    return 0;
}
