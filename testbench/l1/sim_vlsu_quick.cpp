#include "Vrv64g_l1_vlsu_quick_tb.h"
#include "verilated.h"
#include <memory>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto top = std::make_unique<Vrv64g_l1_vlsu_quick_tb>();
    
    while (!Verilated::gotFinish()) {
        top->eval();
    }
    
    return 0;
}
