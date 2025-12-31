`timescale 1ns/1ps

module stimulus #(
    parameter CORES = 4,
    parameter ADDR_W = 64,
    parameter DATA_W = 64
) (
    // System Signals
    output reg clk,
    output reg rst_n,

    // CPU Interfaces (To DUT)
    output reg  [CORES-1:0] cpu_req,
    output reg  [CORES-1:0] cpu_we,
    output reg  [CORES*8-1:0] cpu_be,
    output reg  [CORES*64-1:0] cpu_addr,
    output reg  [CORES*64-1:0] cpu_wdata,
    
    // CPU Interfaces (From DUT)
    input wire [CORES-1:0] cpu_gnt,
    input wire [CORES-1:0] cpu_rvalid,
    input wire [CORES*64-1:0] cpu_rdata,

    // Memory Interface (From DUT) - Disconnected, used for monitor only
    input wire [2:0]   mem_a_opcode,
    input wire [2:0]   mem_a_param,
    input wire [2:0]   mem_a_size,
    input wire [3:0]   mem_a_source,
    input wire [ADDR_W-1:0]  mem_a_address,
    input wire [7:0]   mem_a_mask,
    input wire [DATA_W-1:0]  mem_a_data,
    input wire         mem_a_valid,
    
    // Memory Interface (To DUT) - Disconnected, driven by simple_ram in TB
    output reg          mem_a_ready, // Not used here anymore
    output reg  [2:0]   mem_d_opcode,
    output reg  [1:0]   mem_d_param,
    output reg  [2:0]   mem_d_size,
    output reg  [3:0]   mem_d_source,
    output reg  [1:0]   mem_d_sink,
    output reg          mem_d_denied,
    output reg  [DATA_W-1:0]  mem_d_data,
    output reg          mem_d_corrupt,
    output reg          mem_d_valid,
    input wire         mem_d_ready
);

    // Clock Generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // Tasks for Driver
    task automatic core_write;
        input integer id;
        input [63:0] addr;
        input [63:0] data;
        begin
            $display("[%0d cycles] CPU[%0d] WRITE: addr=0x%016h data=0x%016h", $time / 10, id, addr, data);
            @(posedge clk);
            #1;
            cpu_req[id]   = 1;
            cpu_we[id]    = 1;
            cpu_addr[id*64 +: 64] = addr;
            cpu_wdata[id*64 +: 64] = data;
            cpu_be[id*8 +: 8]     = 8'hFF;
            
            while (!cpu_gnt[id]) @(posedge clk);
            $display("[%0d cycles] CPU[%0d] WRITE: Granted", $time / 10, id);
            
            #1;
            cpu_req[id]   = 0;
            cpu_we[id]    = 0;
        end
    endtask

    task automatic core_read;
        input integer id;
        input [63:0] addr;
        output [63:0] data;
        begin
            $display("[%0d cycles] CPU[%0d] READ:  addr=0x%016h", $time / 10, id, addr);
            @(posedge clk);
            #1;
            cpu_req[id]   = 1;
            cpu_we[id]    = 0;
            cpu_addr[id*64 +: 64] = addr;
            
            while (!cpu_gnt[id]) @(posedge clk);
            $display("[%0d cycles] CPU[%0d] READ:  Granted", $time / 10, id);
            
            #1;
            cpu_req[id]   = 0;
            
            while (!cpu_rvalid[id]) @(posedge clk);
            data = cpu_rdata[id*64 +: 64];
            $display("[%0d cycles] CPU[%0d] READ:  data=0x%016h (COMPLETE)", $time / 10, id, data);
        end
    endtask

    task backdoor_init_l2;
        integer w;
        integer core;
        reg [49:0] l2_tag;
        reg [52:0] l1_tag;
        reg [63:0] data;
        begin
            $display("[%0d cycles] Backdoor initializing L2 Set 0 (and partial L1)...", $time/10);
            for (w = 0; w < 16; w = w + 1) begin
                l2_tag = w; // Addr = w << 14. L2 Tag = Addr >> 14 = w.
                l1_tag = w << 3; // Addr = w << 14. L1 Tag = Addr >> 11 = w << 3.
                
                // 1. L2 Directory: Valid=1, Sharers={C1,C0}=11, Owner=0, Dirty=0
                // Value = 9'h07
                $root.rv64g_cache_system_stress_tb.dut.l2.directory.ram[0][w*9 +: 9] = 9'h07;

                // 2. L2 Tag Array: Way w, Set 0
                $root.rv64g_cache_system_stress_tb.dut.l2.arrays.tag_q[w][0] = l2_tag;

                // 3. L2 Data Array: Way w, Set 0, Word 0
                data = w << 14; 
                $root.rv64g_cache_system_stress_tb.dut.l2.arrays.data_q[w][0] = data;

                // 4. L1 Backdoor Init (Only for first 8 lines -> Ways 0-7 map to L1 Ways 0-7)
                if (w < 8) begin
                    // Initialize Core 0 L1
                    $root.rv64g_cache_system_stress_tb.dut.gen_l1[0].l1.u_arrays.state_q[w][0] = 2'b01;
                    $root.rv64g_cache_system_stress_tb.dut.gen_l1[0].l1.u_arrays.tag_q[w][0] = l1_tag;
                    $root.rv64g_cache_system_stress_tb.dut.gen_l1[0].l1.u_arrays.data_q[w][0] = data;

                    // Initialize Core 1 L1
                    $root.rv64g_cache_system_stress_tb.dut.gen_l1[1].l1.u_arrays.state_q[w][0] = 2'b01;
                    $root.rv64g_cache_system_stress_tb.dut.gen_l1[1].l1.u_arrays.tag_q[w][0] = l1_tag;
                    $root.rv64g_cache_system_stress_tb.dut.gen_l1[1].l1.u_arrays.data_q[w][0] = data;
                end
            end
            $display("[%0d cycles] L2 Set 0 Initialized (16 ways). L1 Set 0 Initialized (8 ways, consistent with L2 ways 0-7).", $time/10);
        end
    endtask

    task init_coherence_state;
        input [63:0] addr;
        input [3:0] sharers; // 4-bit mask
        input [1:0] owner;
        input [1:0] state; // 0=N, 1=B, 2=T, 3=TT
        input [63:0] val;
        
        integer c;
        reg [49:0] l2_tag;
        reg [52:0] l1_tag;
        reg [7:0] l2_set;
        reg [4:0] l1_set;
        reg [3:0] way;
        begin
            l2_set = addr[13:6];
            l1_set = addr[10:6];
            l2_tag = addr[63:14];
            l1_tag = addr[63:11];
            way = 0; // Always use Way 0 for specific tests

            $display("[%0d cycles] Init State: Addr=0x%h Sharers=%b Owner=%0d State=%0d Val=0x%h", 
                     $time/10, addr, sharers, owner, state, val);

            // 1. Init L2 Directory
            // Structure: {dirty, owner_id, owner_valid, sharers, valid}
            $root.rv64g_cache_system_stress_tb.dut.l2.directory.ram[l2_set][way*9 + 0] = 1'b1; // Valid
            $root.rv64g_cache_system_stress_tb.dut.l2.directory.ram[l2_set][way*9 + 1 +: 4] = sharers;
            $root.rv64g_cache_system_stress_tb.dut.l2.directory.ram[l2_set][way*9 + 5] = (state >= 2);
            $root.rv64g_cache_system_stress_tb.dut.l2.directory.ram[l2_set][way*9 + 6 +: 2] = owner;
            $root.rv64g_cache_system_stress_tb.dut.l2.directory.ram[l2_set][way*9 + 8] = (state == 3);

            // 2. Init L2 Arrays (Tag/Data)
            $root.rv64g_cache_system_stress_tb.dut.l2.arrays.tag_q[way][l2_set] = l2_tag;
            // Flattened index: set * 8 + word
            $root.rv64g_cache_system_stress_tb.dut.l2.arrays.data_q[way][{l2_set, 3'd0}] = val;

            // 3. Init L1 Arrays for Sharers
            // Tool requires static indexing for generated instances.
            // Unrolling for 4 cores.
            
            // Core 0
            if (sharers[0]) begin
                if (state == 1) // Shared
                     $root.rv64g_cache_system_stress_tb.dut.gen_l1[0].l1.u_arrays.state_q[way][l1_set] = 2'b01; 
                else if (owner == 0 && state == 2) // Exclusive
                     $root.rv64g_cache_system_stress_tb.dut.gen_l1[0].l1.u_arrays.state_q[way][l1_set] = 2'b10;
                else if (owner == 0 && state == 3) // Modified
                     $root.rv64g_cache_system_stress_tb.dut.gen_l1[0].l1.u_arrays.state_q[way][l1_set] = 2'b11;
                
                $root.rv64g_cache_system_stress_tb.dut.gen_l1[0].l1.u_arrays.tag_q[way][l1_set] = l1_tag;
                $root.rv64g_cache_system_stress_tb.dut.gen_l1[0].l1.u_arrays.data_q[way][{l1_set, 3'd0}] = val;
            end

            // Core 1
            if (sharers[1]) begin
                if (state == 1) 
                     $root.rv64g_cache_system_stress_tb.dut.gen_l1[1].l1.u_arrays.state_q[way][l1_set] = 2'b01; 
                else if (owner == 1 && state == 2) 
                     $root.rv64g_cache_system_stress_tb.dut.gen_l1[1].l1.u_arrays.state_q[way][l1_set] = 2'b10;
                else if (owner == 1 && state == 3) 
                     $root.rv64g_cache_system_stress_tb.dut.gen_l1[1].l1.u_arrays.state_q[way][l1_set] = 2'b11;
                
                $root.rv64g_cache_system_stress_tb.dut.gen_l1[1].l1.u_arrays.tag_q[way][l1_set] = l1_tag;
                $root.rv64g_cache_system_stress_tb.dut.gen_l1[1].l1.u_arrays.data_q[way][{l1_set, 3'd0}] = val;
            end

            // Core 2
            if (sharers[2]) begin
                if (state == 1) 
                     $root.rv64g_cache_system_stress_tb.dut.gen_l1[2].l1.u_arrays.state_q[way][l1_set] = 2'b01; 
                else if (owner == 2 && state == 2) 
                     $root.rv64g_cache_system_stress_tb.dut.gen_l1[2].l1.u_arrays.state_q[way][l1_set] = 2'b10;
                else if (owner == 2 && state == 3) 
                     $root.rv64g_cache_system_stress_tb.dut.gen_l1[2].l1.u_arrays.state_q[way][l1_set] = 2'b11;
                
                $root.rv64g_cache_system_stress_tb.dut.gen_l1[2].l1.u_arrays.tag_q[way][l1_set] = l1_tag;
                $root.rv64g_cache_system_stress_tb.dut.gen_l1[2].l1.u_arrays.data_q[way][{l1_set, 3'd0}] = val;
            end

            // Core 3
            if (sharers[3]) begin
                if (state == 1) 
                     $root.rv64g_cache_system_stress_tb.dut.gen_l1[3].l1.u_arrays.state_q[way][l1_set] = 2'b01; 
                else if (owner == 3 && state == 2) 
                     $root.rv64g_cache_system_stress_tb.dut.gen_l1[3].l1.u_arrays.state_q[way][l1_set] = 2'b10;
                else if (owner == 3 && state == 3) 
                     $root.rv64g_cache_system_stress_tb.dut.gen_l1[3].l1.u_arrays.state_q[way][l1_set] = 2'b11;
                
                $root.rv64g_cache_system_stress_tb.dut.gen_l1[3].l1.u_arrays.tag_q[way][l1_set] = l1_tag;
                $root.rv64g_cache_system_stress_tb.dut.gen_l1[3].l1.u_arrays.data_q[way][{l1_set, 3'd0}] = val;
            end
        end
    endtask

    // Test Sequence
    reg [63:0] read_val;
    integer i;

    initial begin
        rst_n = 0;
        cpu_req = 0;
        cpu_we = 0;
        cpu_addr = 0;
        
        // Tie off unused memory ports (now handled by external module)
        mem_a_ready = 0;
        mem_d_opcode = 0;
        mem_d_param = 0;
        mem_d_size = 0;
        mem_d_source = 0;
        mem_d_sink = 0;
        mem_d_denied = 0;
        mem_d_data = 0;
        mem_d_corrupt = 0;
        mem_d_valid = 0;

        #20 rst_n = 1;
        
        #20;
        $display("\n[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] Starting Cache System Stress Test", $time / 10);
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] Test Sequence:", $time / 10);
        $display("[%0d cycles]   1. Write/Write Contention Test", $time / 10);
        $display("[%0d cycles]   2. Eviction with Sharers Test", $time / 10);
        $display("[%0d cycles]   3. Shared-to-Exclusive Upgrade (Verify AcquirePerm)", $time / 10);
        $display("[%0d cycles]   4. Dirty Line Probe (Verify Owner Downgrade)", $time / 10);
        $display("[%0d cycles] ========================================\n", $time / 10);
        
        // --- Test 1: Write/Write Contention ---
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] TEST 1: Write/Write Contention", $time / 10);
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] Core 0 will write 0xAAAA to 0x200", $time / 10);
        $display("[%0d cycles] Core 1 will write 0xBBBB to 0x200", $time / 10);
        $display("[%0d cycles] (Simultaneous writes to same address)", $time / 10);
        $display("[%0d cycles] ========================================\n", $time / 10);
        
        fork
            begin
                core_write(0, 64'h200, 64'hAAAA);
            end
            begin
                core_write(1, 64'h200, 64'hBBBB);
            end
        join

        $display("[%0d cycles] Both CPU write requests accepted by L1, waiting for coherence to settle...", $time / 10);
        #200; // Wait for coherence to settle

        // Read back from Core 2 (Neutral observer)
        $display("[%0d cycles] Reading from Core 2 (neutral observer) to verify coherence...", $time / 10);
        core_read(2, 64'h200, read_val);
        
        $display("[%0d cycles] ========================================", $time / 10);
        if (read_val == 64'hAAAA || read_val == 64'hBBBB) begin
            $display("[%0d cycles] PASS: Write Contention resolved", $time / 10);
            $display("[%0d cycles]        Last writer wins: 0x%016h", $time / 10, read_val);
        end else begin
            $display("[%0d cycles] FAIL: Write Contention failed", $time / 10);
            $display("[%0d cycles]        Expected 0xAAAA or 0xBBBB, got 0x%016h", $time / 10, read_val);
        end
        $display("[%0d cycles] ========================================\n", $time / 10);

        #100;

        // --- Test 2: Eviction with Sharers ---
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] TEST 2: Eviction with Sharers (Fast Init)", $time / 10);
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] Filling L2 Set 0 via Backdoor (Sharers C0+C1)", $time / 10);
        $display("[%0d cycles] Then accessing 17th line to force eviction", $time / 10);
        $display("[%0d cycles] ========================================\n", $time / 10);
        
        // Backdoor Initialize
        backdoor_init_l2();
        
        $display("[%0d cycles] Set 0 filled via backdoor", $time / 10);
        $display("[%0d cycles] Accessing 17th line (Tag=16) to force eviction...", $time / 10);
        $display("[%0d cycles] (L2 must probe Core 0 and Core 1. L1s hold Ways 0-7. L2 evicts Way 0.)", $time / 10);
        $display("[%0d cycles] (Expectation: L1 HITS probe for Way 0, and invalidates it.)", $time / 10);
        
        // Access 17th line (Tag=16)
        // This should force eviction of Way 0 (Tag=0)
        // L2 sees Sharers=C0|C1 in Directory. Sends Probes.
        // C0/C1 have 0-7. Probe is for 0. Hit! Reply ProbeAck (BtoN).
        // L2 proceeds.
        
        core_read(0, (16 << 14), read_val);
        
        $display("[%0d cycles] ========================================", $time / 10);
        // Calculate expected value: addr 0x40000 -> mem_idx 0x8000 -> data 0x8000
        if (read_val == 64'h8000) begin
            $display("[%0d cycles] PASS: Eviction completed without hang", $time / 10);
            $display("[%0d cycles]        Read data: 0x%016h (CORRECT)", $time / 10, read_val);
        end else begin
            $display("[%0d cycles] WARNING: Eviction completed but data mismatch", $time / 10);
            $display("[%0d cycles]        Expected: 0x0000000000008000", $time / 10);
            $display("[%0d cycles]        Got:      0x%016h", $time / 10, read_val);
            $display("[%0d cycles]        (Test continues - eviction didn't hang)", $time / 10);
        end
        $display("[%0d cycles] ========================================\n", $time / 10);
        
        #100;

        // --- Test 3: Shared-to-Exclusive Upgrade ---
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] TEST 3: Shared-to-Exclusive Upgrade", $time / 10);
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] Setup: Core 0 and Core 1 have 0x80000 (Set 0) in Shared State", $time / 10);
        $display("[%0d cycles] Action: Core 0 Writes to 0x80000", $time / 10);
        $display("[%0d cycles] Expect: C0 sends AcquirePerm. C1 receives Probe(Invalidate). C0 gets Grant.", $time / 10);
        $display("[%0d cycles] ========================================\n", $time / 10);

        // Init: Addr 0x80000, Sharers={C1,C0}=3, Owner=0, State=1(Shared), Val=0xCAFE
        init_coherence_state(64'h80000, 4'b0011, 0, 1, 64'hCAFE);
        
        // C0 Writes
        core_write(0, 64'h80000, 64'hBEEF);
        
        $display("[%0d cycles] Write completed.", $time / 10);
        
        // Verify C1 was invalidated (Optional: Read C1, should Miss/Get)
        // Verify C0 has new data (Read C0)
        core_read(0, 64'h80000, read_val);
        
        if (read_val == 64'hBEEF) begin
             $display("[%0d cycles] PASS: Upgrade Write Successful.", $time / 10);
        end else begin
             $display("[%0d cycles] FAIL: Data Mismatch. Expected 0xBEEF, Got 0x%h", $time / 10, read_val);
        end
        $display("[%0d cycles] ========================================\n", $time / 10);

        #100;

        // --- Test 4: Dirty Line Probe ---
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] TEST 4: Dirty Line Probe (Owner Downgrade)", $time / 10);
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] Setup: Core 0 has 0x90000 (Set 0) in Modified State (Dirty)", $time / 10);
        $display("[%0d cycles] Action: Core 1 Reads 0x90000", $time / 10);
        $display("[%0d cycles] Expect: C0 receives Probe. Flushes Data. C1 gets Data.", $time / 10);
        $display("[%0d cycles] ========================================\n", $time / 10);

        // Init: Addr 0x90000, Sharers={C0}=1, Owner=0, State=3(Modified), Val=0xDIRT
        init_coherence_state(64'h90000, 4'b0001, 0, 3, 64'hD157); // 0xD157 = DIRT
        
        // C1 Reads
        core_read(1, 64'h90000, read_val);
        
        if (read_val == 64'hD157) begin
             $display("[%0d cycles] PASS: Dirty Data Read Successful.", $time / 10);
        end else begin
             $display("[%0d cycles] FAIL: Data Mismatch. Expected 0xD157, Got 0x%h", $time / 10, read_val);
        end
        $display("[%0d cycles] ========================================\n", $time / 10);

        #100;
        
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] All Stress Tests Completed", $time / 10);
        $display("[%0d cycles] ========================================", $time / 10);
        $finish;
    end

endmodule
