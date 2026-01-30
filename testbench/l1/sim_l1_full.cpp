// sim_l1_full.cpp - Verilator harness for L1 full/integration testbench
// Works with rv64g_l1_dcache_full_tb which needs external clock/reset

#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vrv64g_l1_dcache_full_tb.h"
#include <memory>

int main(int argc, char** argv) {
    auto contextp = std::make_unique<VerilatedContext>();
    contextp->commandArgs(argc, argv);
    contextp->traceEverOn(true);

    auto top = std::make_unique<Vrv64g_l1_dcache_full_tb>(contextp.get());
    auto tfp = std::make_unique<VerilatedVcdC>();

    top->trace(tfp.get(), 99);
    tfp->open("l1_dcache_test.vcd");

    // Full dcache testbench needs external clock/reset
    vluint64_t sim_time = 0;
    
    // Hold reset for initial cycles
    top->rst_n = 0;
    for (int i = 0; i < 20; i++) {
        top->clk = 0;
        top->eval();
        tfp->dump(sim_time++);
        top->clk = 1;
        top->eval();
        tfp->dump(sim_time++);
    }
    
    // Release reset
    top->rst_n = 1;
    
    while (!contextp->gotFinish() && sim_time < 500000) {
        top->clk = 0;
        top->eval();
        tfp->dump(sim_time++);
        
        top->clk = 1;
        top->eval();
        tfp->dump(sim_time++);
    }

    top->final();
    tfp->close();
    return 0;
}
