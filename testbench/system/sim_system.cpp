#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vrv64g_cache_system_tb.h"
#include <iostream>
#include <iomanip>

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    contextp->traceEverOn(true);
    
    std::cout << "========================================\n";
    std::cout << "TileLink Cache System Test\n";
    std::cout << "========================================\n";
    std::cout << "Starting simulation...\n";
    std::cout << "Timeout: 2000000 cycles\n";
    std::cout << "========================================\n\n";
    
    Vrv64g_cache_system_tb* top = new Vrv64g_cache_system_tb{contextp};
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("obj_dir/wave_system.vcd");

    while (!contextp->gotFinish()) {
        top->eval();
        tfp->dump(contextp->time());
        
        if (!top->eventsPending()) break;
        
        // Advance time to next event
        contextp->time(top->nextTimeSlot());
        
        // Timeout check (2000000 cycles * 10ns/cycle = 20000000 ns)
        if (contextp->time() > 20000000) {
            // Note: We can't easily get Verilog $time here, so we'll let Verilog handle the timeout message
            break;
        }
    }

    // Final summary - let Verilog handle the detailed timing messages
    // We just print a simple completion message
    if (contextp->gotFinish()) {
        std::cout << "\nSimulation finished by $finish\n";
    } else {
        std::cout << "\nSimulation ended (no more events)\n";
    }

    top->final();
    tfp->close();
    delete top;
    delete contextp;
    return 0;
}
