#include <verilated.h>
#include "Vrv64g_l1_vlsu_hit_tb.h"
#include <iostream>

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    
    Vrv64g_l1_vlsu_hit_tb* top = new Vrv64g_l1_vlsu_hit_tb{contextp};

    while (!contextp->gotFinish()) {
        top->eval();
        
        // Advance time
        if (top->eventsPending()) {
            contextp->time(top->nextTimeSlot());
        } else {
            // No events, advance by 1 time unit to keep things moving
            contextp->timeInc(1);
        }
        
        if (contextp->time() > 500000) {
            std::cerr << "Timeout at time " << contextp->time() << "\n";
            break;
        }
    }

    top->final();
    delete top;
    delete contextp;
    return 0;
}
