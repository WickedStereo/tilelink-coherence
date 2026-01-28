// sim_vlsu_cpp.cpp - C++ testbench for VLSU integration
#include "Vrv64g_l1_vlsu_cpp_tb.h"
#include "verilated.h"
#include <memory>
#include <cstdio>
#include <cstdint>
#include <map>

// Simple memory model
std::map<uint64_t, uint64_t> memory;

class TestBench {
public:
    std::unique_ptr<Vrv64g_l1_vlsu_cpp_tb> dut;
    uint64_t cycle_count;
    
    // Pending request tracking
    bool req_pending;
    uint64_t req_address;
    int req_latency;
    int req_beat;  // For multi-beat responses
    
    TestBench() {
        dut = std::make_unique<Vrv64g_l1_vlsu_cpp_tb>();
        cycle_count = 0;
        req_pending = false;
        req_latency = 0;
        req_beat = 0;
        
        // Initialize inputs
        dut->clk = 0;
        dut->rst_n = 0;
        dut->vlsu_req = 0;
        dut->vlsu_lane_valid = 0;
        dut->vlsu_lane_we = 0;
        dut->vlsu_lane_be = 0xFFFFFFFFFFFFFFFFULL; // All bytes enabled
        dut->vlsu_addr0 = 0;
        dut->vlsu_addr1 = 0;
        dut->vlsu_addr2 = 0;
        dut->vlsu_addr3 = 0;
        dut->vlsu_addr4 = 0;
        dut->vlsu_addr5 = 0;
        dut->vlsu_addr6 = 0;
        dut->vlsu_addr7 = 0;
        dut->vlsu_wdata0 = 0;
        dut->vlsu_wdata1 = 0;
        dut->vlsu_wdata2 = 0;
        dut->vlsu_wdata3 = 0;
        dut->vlsu_wdata4 = 0;
        dut->vlsu_wdata5 = 0;
        dut->vlsu_wdata6 = 0;
        dut->vlsu_wdata7 = 0;
        
        // Memory interface
        dut->tl_a_ready = 1;
        dut->tl_d_valid = 0;
        dut->tl_d_opcode = 0;
        dut->tl_d_param = 0;
        dut->tl_d_size = 0;
        dut->tl_d_source = 0;
        dut->tl_d_sink = 0;
        dut->tl_d_data = 0;
    }
    
    void tick() {
        dut->clk = 0;
        dut->eval();
        dut->clk = 1;
        dut->eval();
        cycle_count++;
        
        // Handle memory requests
        handle_memory();
    }
    
    void handle_memory() {
        // Check for new TileLink A request
        if (dut->tl_a_valid && dut->tl_a_ready && !req_pending) {
            uint8_t opcode = dut->tl_a_opcode;
            uint64_t addr = dut->tl_a_address;
            
            printf("  [Cycle %lu] TL-A request: opcode=%d addr=0x%lx size=%d\n", 
                   cycle_count, opcode, addr, dut->tl_a_size);
            
            if (opcode == 6 || opcode == 4) { // AcquireBlock(6) or Get(4)
                req_pending = true;
                req_address = addr & ~0x3FULL; // Align to cache line
                req_latency = 5; // 5 cycle memory latency (initial)
                req_beat = 0;    // Start at beat 0
            }
        }
        
        // Deassert D channel by default
        dut->tl_d_valid = 0;
        
        // Process pending request - send 8 beats (64 bytes total)
        if (req_pending) {
            if (req_latency > 0) {
                req_latency--;
            } else {
                // Send one beat of data
                dut->tl_d_valid = 1;
                dut->tl_d_opcode = 5; // GrantData
                dut->tl_d_param = 1;  // toT (Trunk permission)
                dut->tl_d_size = 6;   // 64 bytes total
                dut->tl_d_source = 0;
                dut->tl_d_sink = 0;
                
                // Get data for this beat (8 bytes)
                uint64_t word_addr = req_address + req_beat * 8;
                uint64_t data;
                if (memory.find(word_addr) != memory.end()) {
                    data = memory[word_addr];
                } else {
                    // Default: address pattern
                    data = word_addr;
                }
                dut->tl_d_data = data;
                
                printf("  [Cycle %lu] TL-D beat %d: addr=0x%lx data=0x%lx\n",
                       cycle_count, req_beat, word_addr, data);
                
                req_beat++;
                if (req_beat >= 8) {
                    // All beats sent
                    req_pending = false;
                    req_beat = 0;
                }
            }
        }
    }
    
    void reset() {
        printf("Resetting...\n");
        dut->rst_n = 0;
        for (int i = 0; i < 10; i++) {
            tick();
        }
        dut->rst_n = 1;
        for (int i = 0; i < 5; i++) {
            tick();
        }
        printf("Reset complete at cycle %lu\n", cycle_count);
    }
    
    bool wait_vlsu_done(int max_cycles) {
        bool deasserted = false;
        bool saw_miss = false;
        for (int i = 0; i < max_cycles; i++) {
            tick();
            printf("    Cycle %lu: state=%d, miss_st=%d, xbar_st=%d, any_miss=%d, xbar_done=%d, ready=%d, done=%d, lane_hit=0x%x\n",
                   cycle_count, dut->debug_state, dut->debug_miss_state, 
                   dut->debug_xbar_state, dut->debug_vlsu_any_miss, dut->debug_vlsu_xbar_done,
                   dut->vlsu_ready, dut->vlsu_done, dut->vlsu_lane_hit);
            
            // Track if we've seen an actual miss for this operation
            if (dut->debug_vlsu_any_miss) saw_miss = true;
            
            // Deassert request after miss handler has captured (goes to REFILL_REQ or later)
            // Only do this if we actually saw a miss for THIS operation
            // miss_state >= 2 means S_REFILL_REQ or beyond
            if (!deasserted && dut->vlsu_req && saw_miss && dut->debug_miss_state >= 2) {
                printf("    -> Miss captured (state=%d), deasserting\n", dut->debug_miss_state);
                dut->vlsu_req = 0;
                deasserted = true;
            }
            
            // NOTE: For hits, do NOT auto-deassert here!
            // The caller must keep vlsu_req asserted until after capturing read data.
            // vlsu_done for hits is only valid while vlsu_req is asserted since
            // hit detection is combinational on current inputs.
            
            if (dut->vlsu_done) {
                printf("  VLSU done at cycle %lu (state=%d)\n", 
                       cycle_count, dut->debug_state);
                return true;
            }
        }
        printf("  VLSU timeout after %d cycles (state=%d, miss_state=%d)\n",
               max_cycles, dut->debug_state, dut->debug_miss_state);
        return false;
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    printf("=== VLSU Integration Test (C++ driven) ===\n\n");
    
    TestBench tb;
    tb.reset();
    
    // Initialize some memory
    memory[0x1000] = 0xAAAAAAAAAAAAAAAAULL;
    memory[0x1008] = 0xBBBBBBBBBBBBBBBBULL;
    memory[0x1010] = 0xCCCCCCCCCCCCCCCCULL;
    memory[0x1018] = 0xDDDDDDDDDDDDDDDDULL;
    memory[0x1020] = 0x1111111111111111ULL;
    memory[0x1028] = 0x2222222222222222ULL;
    memory[0x1030] = 0x3333333333333333ULL;
    memory[0x1038] = 0x4444444444444444ULL;
    
    int passed = 0;
    int failed = 0;
    
    // Test 1: Single lane VLSU load (miss)
    printf("Test 1: Single lane VLSU load (cold miss)...\n");
    tb.dut->vlsu_req = 1;
    tb.dut->vlsu_lane_we = 0;   // Load
    tb.dut->vlsu_lane_valid = 0x01; // Lane 0 only
    tb.dut->vlsu_addr0 = 0x1000;
    
    printf("  Asserting VLSU request...\n");
    
    // Don't deassert until we get ready to drop
    
    // Wait for done
    if (tb.wait_vlsu_done(100)) {
        uint64_t rdata = tb.dut->vlsu_rdata0;
        printf("  Lane 0 rdata: 0x%lx (expected 0x%lx)\n", rdata, memory[0x1000]);
        if (rdata == memory[0x1000]) {
            printf("  PASS: Correct data\n");
            passed++;
        } else {
            printf("  FAIL: Data mismatch\n");
            failed++;
        }
    } else {
        printf("  FAIL: Timeout\n");
        failed++;
    }
    
    // Test 2: Single lane load (should be hit now)
    printf("\nTest 2: Single lane VLSU load (cache hit)...\n");
    tb.dut->vlsu_req = 1;
    tb.dut->vlsu_lane_we = 0;
    tb.dut->vlsu_lane_valid = 0x01;
    tb.dut->vlsu_addr0 = 0x1008; // Same cache line
    
    printf("  Before tick: cycle=%lu, xbar_st=%d, xbar_done=%d, done=%d\n",
           tb.cycle_count, tb.dut->debug_xbar_state, tb.dut->debug_vlsu_xbar_done, tb.dut->vlsu_done);
    // Keep request asserted until done
    // tb.tick();  <- don't tick early, let wait_vlsu_done handle it
    
    if (tb.wait_vlsu_done(10)) {
        uint64_t rdata = tb.dut->vlsu_rdata0;
        printf("  Lane 0 rdata: 0x%lx (expected 0x%lx)\n", rdata, memory[0x1008]);
        tb.dut->vlsu_req = 0;  // Deassert AFTER we got data
        if (rdata == memory[0x1008]) {
            printf("  PASS: Cache hit with correct data\n");
            passed++;
        } else {
            printf("  FAIL: Data mismatch\n");
            failed++;
        }
    } else {
        printf("  FAIL: Timeout\n");
        tb.dut->vlsu_req = 0;
        failed++;
    }
    
    // Test 3: Multi-lane load from same line
    printf("\nTest 3: Multi-lane load from same cache line...\n");
    tb.dut->vlsu_req = 1;
    tb.dut->vlsu_lane_we = 0;
    tb.dut->vlsu_lane_valid = 0x0F; // Lanes 0-3
    tb.dut->vlsu_addr0 = 0x1000;
    tb.dut->vlsu_addr1 = 0x1008;
    tb.dut->vlsu_addr2 = 0x1010;
    tb.dut->vlsu_addr3 = 0x1018;
    
    // Don't deassert until done
    
    if (tb.wait_vlsu_done(20)) {
        bool all_correct = true;
        printf("  Lane 0: 0x%lx\n", tb.dut->vlsu_rdata0);
        printf("  Lane 1: 0x%lx\n", tb.dut->vlsu_rdata1);
        printf("  Lane 2: 0x%lx\n", tb.dut->vlsu_rdata2);
        printf("  Lane 3: 0x%lx\n", tb.dut->vlsu_rdata3);
        
        tb.dut->vlsu_req = 0;  // Deassert after capturing data
        
        if (tb.dut->vlsu_rdata0 != memory[0x1000]) all_correct = false;
        if (tb.dut->vlsu_rdata1 != memory[0x1008]) all_correct = false;
        if (tb.dut->vlsu_rdata2 != memory[0x1010]) all_correct = false;
        if (tb.dut->vlsu_rdata3 != memory[0x1018]) all_correct = false;
        
        if (all_correct) {
            printf("  PASS: All lanes correct\n");
            passed++;
        } else {
            printf("  FAIL: Data mismatch\n");
            failed++;
        }
    } else {
        printf("  FAIL: Timeout\n");
        tb.dut->vlsu_req = 0;
        failed++;
    }
    
    printf("\n=== Test Summary ===\n");
    printf("Passed: %d\n", passed);
    printf("Failed: %d\n", failed);
    printf("Total cycles: %lu\n", tb.cycle_count);
    
    if (failed == 0) {
        printf("\nSUCCESS: All tests passed!\n");
        return 0;
    } else {
        printf("\nFAILURE: Some tests failed\n");
        return 1;
    }
}
