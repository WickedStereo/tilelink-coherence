// sim_l1_unit.cpp - Verilator harness for L1 unit testbench
// Works with rv64g_l1_unit_tb which has internal clock generation

#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vrv64g_l1_unit_tb.h"
#include <memory>

int main(int argc, char** argv) {
    auto contextp = std::make_unique<VerilatedContext>();
    contextp->commandArgs(argc, argv);
    contextp->traceEverOn(true);

    auto top = std::make_unique<Vrv64g_l1_unit_tb>(contextp.get());
    auto tfp = std::make_unique<VerilatedVcdC>();

    top->trace(tfp.get(), 99);
    tfp->open("l1_unit_test.vcd");

    // Unit testbench has internal clock generation (event-driven)
    while (!contextp->gotFinish()) {
        top->eval();
        tfp->dump(contextp->time());

        if (top->eventsPending()) {
            contextp->time(top->nextTimeSlot());
        } else {
            contextp->timeInc(1);
        }

        if (contextp->time() > 500000) break;
    }

    top->final();
    tfp->close();
    return 0;
}
