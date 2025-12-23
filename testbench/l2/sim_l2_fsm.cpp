#include "Vcpu64_l2_fsm_tb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vcpu64_l2_fsm_tb *top = new Vcpu64_l2_fsm_tb;
    VerilatedVcdC *m_trace = new VerilatedVcdC;

    top->trace(m_trace, 5);
    m_trace->open("obj_dir/wave_l2_fsm.vcd");

    while (!Verilated::gotFinish()) {
        top->eval();
        m_trace->dump(Verilated::time());
        Verilated::timeInc(1);
    }

    top->final();
    m_trace->close();
    delete top;
    return 0;
}
