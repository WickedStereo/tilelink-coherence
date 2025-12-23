#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtl_demux_tb.h"

static vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtl_demux_tb* top = new Vtl_demux_tb;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("obj_dir/wave_demux.vcd");

    while (!Verilated::gotFinish() && sim_time < 2000) {
        top->clk = (sim_time & 1) ? 1 : 0;
        top->rst_n = (sim_time >= 10) ? 1 : 0;
        
        top->eval();
        tfp->dump(sim_time);
        sim_time += 1;
    }

    tfp->close();
    delete top;
    return 0;
}
