#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtl_arbiter_tb.h"

static vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtl_arbiter_tb* top = new Vtl_arbiter_tb;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("obj_dir/wave_arbiter.vcd");

    // Run for 1000 cycles
    while (!Verilated::gotFinish() && sim_time < 2000) {
        // 10ns period: toggle every 5ns
        top->clk = (sim_time & 1) ? 1 : 0;
        // Hold reset low for first 10 ticks (5 cycles), then release
        top->rst_n = (sim_time >= 10) ? 1 : 0;
        
        top->eval();
        tfp->dump(sim_time);
        sim_time += 1;
    }

    tfp->close();
    delete top;
    return 0;
}
