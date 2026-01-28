#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vrv64g_l1_banked_arrays_tb.h"

int main(int argc, char** argv) {
    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
    contextp->commandArgs(argc, argv);
    contextp->traceEverOn(true);

    const std::unique_ptr<Vrv64g_l1_banked_arrays_tb> top{new Vrv64g_l1_banked_arrays_tb{contextp.get()}};

    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("obj_dir/banked_arrays_wave.vcd");

    // Run until $finish or timeout
    while (!contextp->gotFinish() && contextp->time() < 200000) {
        top->eval();
        tfp->dump(contextp->time());
        contextp->timeInc(1);
    }

    tfp->close();
    return 0;
}
