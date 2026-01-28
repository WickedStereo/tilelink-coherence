#include "Vrv64g_l1_vlsu_integration_tb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <memory>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    auto top = std::make_unique<Vrv64g_l1_vlsu_integration_tb>();
    auto tfp = std::make_unique<VerilatedVcdC>();
    
    top->trace(tfp.get(), 99);
    tfp->open("vlsu_integration.vcd");
    
    vluint64_t sim_time = 0;
    while (!Verilated::gotFinish()) {
        top->eval();
        tfp->dump(sim_time);
        sim_time++;
        if (sim_time > 100000) break;
    }
    
    tfp->close();
    return 0;
}
