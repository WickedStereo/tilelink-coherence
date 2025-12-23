#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcpu64_system_stress_tb.h"

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    contextp->traceEverOn(true);
    
    Vcpu64_system_stress_tb* top = new Vcpu64_system_stress_tb{contextp};
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("wave_stress.vcd");

    while (!contextp->gotFinish()) {
        top->eval();
        tfp->dump(contextp->time());
        
        if (!top->eventsPending()) break;
        
        // Advance time to next event
        contextp->time(top->nextTimeSlot());
        
        if (contextp->time() > 10000000) { // Timeout
            printf("Simulation timed out at %ld\n", contextp->time());
            break;
        }
    }

    if (contextp->gotFinish()) {
        printf("Simulation finished by $finish\n");
    }

    top->final();
    tfp->close();
    delete top;
    delete contextp;
    return 0;
}
