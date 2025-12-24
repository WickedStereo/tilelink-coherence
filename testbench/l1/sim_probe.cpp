#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vrv64g_l1_probe_tb.h"

static vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vrv64g_l1_probe_tb* top = new Vrv64g_l1_probe_tb;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("obj_dir/wave_probe.vcd");

    // Run until $finish
    while (!Verilated::gotFinish()) {
        // 10ns period: toggle every 5ns
        top->clk = (sim_time & 1) ? 1 : 0;
        // Hold reset low for first 50ns, then release
        top->rst_n = (sim_time >= 50) ? 1 : 0;
        top->eval();
        tfp->dump(sim_time);
        sim_time += 5;
        if (sim_time > 200000) break;
    }

    tfp->close();
    delete top;
    return 0;
}
