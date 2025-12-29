#include "Vsoc_mini_top.h"  // Verilator生成的模型头文件
#include "verilated.h"
#include "verilated_vcd_c.h"  // 用于生成VCD波形文件
#include <iostream>
#include <fstream>
#include <sstream>  // 添加对 std::istringstream 的支持

#define TRACE_REF_FILE "./trace/golden_trace.txt"
#define END_PC 0x1c000100

vluint64_t main_time = 0;  // 当前仿真时间

double sc_time_stamp() {
    return main_time;  // 返回当前仿真时间
}

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vsoc_mini_top* top;  // 修改2

void step_and_dump_wave(){
  top->eval();
  tfp->dump(contextp->time());
  contextp->timeInc(1);
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vsoc_mini_top;    //修改3
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
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

        // 初始化信号
    top->resetn = 0;
    top->clk = 0;
    step_and_dump_wave();
    
    // 仿真循环
    while (!Verilated::gotFinish()) {
        // 时钟信号
        top->clk = !top->clk;
        // 复位信号
        if (contextp->time() >= 6) {
            top->resetn = 1;
        }

        top->switch_1 = 0x4;
        step_and_dump_wave();
               
        // 检查仿真结束条件
        if (contextp->time() > 10000) {
            std::cout << "==============================================================" << std::endl;
            std::cout << "result = ";
            std::cout << top->led << std::endl;;
            std::cout << "Test end!" << std::endl;
            break;
        }
    }

    // 关闭文件
    //trace_ref.close();
    sim_exit();
    return 0;
}