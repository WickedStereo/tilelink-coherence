#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vrv64g_l2_directory_tb.h"

static vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vrv64g_l2_directory_tb* top = new Vrv64g_l2_directory_tb;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("obj_dir/wave_l2_dir.vcd");

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
