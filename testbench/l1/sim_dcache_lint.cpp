#include "Vrv64g_l1_dcache_lint_tb.h"
#include "verilated.h"
#include <memory>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto top = std::make_unique<Vrv64g_l1_dcache_lint_tb>();
    
    // Drive from C++
    int cycles = 0;
    top->clk = 0;
    top->rst_n = 0;
    
    // Reset
    for (int i = 0; i < 20; i++) {
        top->clk = !top->clk;
        top->eval();
    }
    
    printf("After reset pulse\n");
    top->rst_n = 1;
    
    // Run for 100 cycles
    for (int i = 0; i < 200; i++) {
        top->clk = !top->clk;
        top->eval();
        if (top->clk) {
            cycles++;
            if (cycles % 10 == 0) {
                printf("Cycle %d\n", cycles);
            }
        }
    }
    
    printf("SUCCESS: 100 cycles completed\n");
    return 0;
}
