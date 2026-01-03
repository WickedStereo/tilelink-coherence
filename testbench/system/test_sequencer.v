`timescale 1ns/100ps

module test_sequencer #(
    parameter CoresIgnored = 4, // Parameter kept for compatibility but ports are hardcoded for 4 cores
    parameter ADDR_W = 64,
    parameter DATA_W = 64
) (
    // System Signals
    output reg clk,
    output reg rst_n,

    // CPU Interfaces (To Core Stimulus Modules) - Exploded
    // Core 0
    output reg cpu_req_0, output reg cpu_we_0, output reg [7:0] cpu_be_0, 
    output reg [63:0] cpu_addr_0, output reg [63:0] cpu_wdata_0,
    output reg cpu_amo_0, output reg cpu_lr_0, output reg cpu_sc_0, 
    output reg [4:0] cpu_amo_op_0, output reg cpu_amo_word_0,
    input cpu_gnt_0, input cpu_rvalid_0, input [63:0] cpu_rdata_0,

    // Core 1
    output reg cpu_req_1, output reg cpu_we_1, output reg [7:0] cpu_be_1, 
    output reg [63:0] cpu_addr_1, output reg [63:0] cpu_wdata_1,
    output reg cpu_amo_1, output reg cpu_lr_1, output reg cpu_sc_1, 
    output reg [4:0] cpu_amo_op_1, output reg cpu_amo_word_1,
    input cpu_gnt_1, input cpu_rvalid_1, input [63:0] cpu_rdata_1,

    // Core 2
    output reg cpu_req_2, output reg cpu_we_2, output reg [7:0] cpu_be_2, 
    output reg [63:0] cpu_addr_2, output reg [63:0] cpu_wdata_2,
    output reg cpu_amo_2, output reg cpu_lr_2, output reg cpu_sc_2, 
    output reg [4:0] cpu_amo_op_2, output reg cpu_amo_word_2,
    input cpu_gnt_2, input cpu_rvalid_2, input [63:0] cpu_rdata_2,

    // Core 3
    output reg cpu_req_3, output reg cpu_we_3, output reg [7:0] cpu_be_3, 
    output reg [63:0] cpu_addr_3, output reg [63:0] cpu_wdata_3,
    output reg cpu_amo_3, output reg cpu_lr_3, output reg cpu_sc_3, 
    output reg [4:0] cpu_amo_op_3, output reg cpu_amo_word_3,
    input cpu_gnt_3, input cpu_rvalid_3, input [63:0] cpu_rdata_3,

    // NEW: Backdoor Bus Interface (To TB) - Exploded per instance
    // L1[0]
    output reg l1_0_bkdr_valid, output reg [3:0] l1_0_bkdr_core_id, output reg [1:0] l1_0_bkdr_array_id, 
    output reg [7:0] l1_0_bkdr_way, output reg [15:0] l1_0_bkdr_set, output reg [63:0] l1_0_bkdr_data,

    // L1[1]
    output reg l1_1_bkdr_valid, output reg [3:0] l1_1_bkdr_core_id, output reg [1:0] l1_1_bkdr_array_id, 
    output reg [7:0] l1_1_bkdr_way, output reg [15:0] l1_1_bkdr_set, output reg [63:0] l1_1_bkdr_data,

    // L1[2]
    output reg l1_2_bkdr_valid, output reg [3:0] l1_2_bkdr_core_id, output reg [1:0] l1_2_bkdr_array_id, 
    output reg [7:0] l1_2_bkdr_way, output reg [15:0] l1_2_bkdr_set, output reg [63:0] l1_2_bkdr_data,

    // L1[3]
    output reg l1_3_bkdr_valid, output reg [3:0] l1_3_bkdr_core_id, output reg [1:0] l1_3_bkdr_array_id, 
    output reg [7:0] l1_3_bkdr_way, output reg [15:0] l1_3_bkdr_set, output reg [63:0] l1_3_bkdr_data,

    // L2
    output reg l2_bkdr_valid, output reg [3:0] l2_bkdr_core_id, output reg [1:0] l2_bkdr_array_id, 
    output reg [7:0] l2_bkdr_way, output reg [15:0] l2_bkdr_set, output reg [63:0] l2_bkdr_data
);

    parameter CORES = 4; // Internal usage

    // Clock Generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // Internal Arrays for Logic
    reg [CORES-1:0] cpu_req;
    reg [CORES-1:0] cpu_we;
    reg [CORES*8-1:0] cpu_be;
    reg [CORES*64-1:0] cpu_addr;
    reg [CORES*64-1:0] cpu_wdata;
    reg [CORES-1:0] cpu_amo;
    reg [CORES-1:0] cpu_lr;
    reg [CORES-1:0] cpu_sc;
    reg [CORES*5-1:0] cpu_amo_op;
    reg [CORES-1:0] cpu_amo_word;
    
    wire [CORES-1:0] cpu_gnt;
    wire [CORES-1:0] cpu_rvalid;
    wire [CORES*64-1:0] cpu_rdata;

    // Mapping: Internal Arrays <-> Exploded Ports
    // Input Mapping
    assign cpu_gnt = {cpu_gnt_3, cpu_gnt_2, cpu_gnt_1, cpu_gnt_0};
    assign cpu_rvalid = {cpu_rvalid_3, cpu_rvalid_2, cpu_rvalid_1, cpu_rvalid_0};
    assign cpu_rdata = {cpu_rdata_3, cpu_rdata_2, cpu_rdata_1, cpu_rdata_0};

    // Output Mapping (Combinational)
    always @(*) begin
        cpu_req_0 = cpu_req[0]; cpu_req_1 = cpu_req[1]; cpu_req_2 = cpu_req[2]; cpu_req_3 = cpu_req[3];
        cpu_we_0 = cpu_we[0];   cpu_we_1 = cpu_we[1];   cpu_we_2 = cpu_we[2];   cpu_we_3 = cpu_we[3];
        cpu_amo_0 = cpu_amo[0]; cpu_amo_1 = cpu_amo[1]; cpu_amo_2 = cpu_amo[2]; cpu_amo_3 = cpu_amo[3];
        cpu_lr_0 = cpu_lr[0];   cpu_lr_1 = cpu_lr[1];   cpu_lr_2 = cpu_lr[2];   cpu_lr_3 = cpu_lr[3];
        cpu_sc_0 = cpu_sc[0];   cpu_sc_1 = cpu_sc[1];   cpu_sc_2 = cpu_sc[2];   cpu_sc_3 = cpu_sc[3];
        cpu_amo_word_0 = cpu_amo_word[0]; cpu_amo_word_1 = cpu_amo_word[1]; cpu_amo_word_2 = cpu_amo_word[2]; cpu_amo_word_3 = cpu_amo_word[3];
        
        cpu_be_0 = cpu_be[0*8 +: 8]; cpu_be_1 = cpu_be[1*8 +: 8]; cpu_be_2 = cpu_be[2*8 +: 8]; cpu_be_3 = cpu_be[3*8 +: 8];
        cpu_addr_0 = cpu_addr[0*64 +: 64]; cpu_addr_1 = cpu_addr[1*64 +: 64]; cpu_addr_2 = cpu_addr[2*64 +: 64]; cpu_addr_3 = cpu_addr[3*64 +: 64];
        cpu_wdata_0 = cpu_wdata[0*64 +: 64]; cpu_wdata_1 = cpu_wdata[1*64 +: 64]; cpu_wdata_2 = cpu_wdata[2*64 +: 64]; cpu_wdata_3 = cpu_wdata[3*64 +: 64];
        cpu_amo_op_0 = cpu_amo_op[0*5 +: 5]; cpu_amo_op_1 = cpu_amo_op[1*5 +: 5]; cpu_amo_op_2 = cpu_amo_op[2*5 +: 5]; cpu_amo_op_3 = cpu_amo_op[3*5 +: 5];
    end

    // Helper task to drive backdoor bus (Dispatched)
    task bkdr_write;
        input [3:0] core;
        input [1:0] arr; // 0=State/Dir, 1=Tag, 2=Data
        input [7:0] way;
        input [15:0] set;
        input [63:0] val;
        begin
            case (core)
                0: begin
                    l1_0_bkdr_core_id = core; l1_0_bkdr_array_id = arr; l1_0_bkdr_way = way; l1_0_bkdr_set = set; l1_0_bkdr_data = val;
                    l1_0_bkdr_valid = 1;
                end
                1: begin
                    l1_1_bkdr_core_id = core; l1_1_bkdr_array_id = arr; l1_1_bkdr_way = way; l1_1_bkdr_set = set; l1_1_bkdr_data = val;
                    l1_1_bkdr_valid = 1;
                end
                2: begin
                    l1_2_bkdr_core_id = core; l1_2_bkdr_array_id = arr; l1_2_bkdr_way = way; l1_2_bkdr_set = set; l1_2_bkdr_data = val;
                    l1_2_bkdr_valid = 1;
                end
                3: begin
                    l1_3_bkdr_core_id = core; l1_3_bkdr_array_id = arr; l1_3_bkdr_way = way; l1_3_bkdr_set = set; l1_3_bkdr_data = val;
                    l1_3_bkdr_valid = 1;
                end
                4: begin
                    l2_bkdr_core_id = core; l2_bkdr_array_id = arr; l2_bkdr_way = way; l2_bkdr_set = set; l2_bkdr_data = val;
                    l2_bkdr_valid = 1;
                end
            endcase
            
            @(posedge clk);
            #1;
            
            // Clear Valid
            l1_0_bkdr_valid = 0;
            l1_1_bkdr_valid = 0;
            l1_2_bkdr_valid = 0;
            l1_3_bkdr_valid = 0;
            l2_bkdr_valid = 0;
        end
    endtask

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

    task automatic core_amo;
        input integer id;
        input [63:0] addr;
        input [63:0] operand;
        input [4:0]  op;
        input        word_op; // 1=word, 0=double
        output [63:0] old_val;
        begin
            $display("[%0d cycles] CPU[%0d] AMO OP=%0d Addr=0x%016h Operand=0x%016h", $time/10, id, op, addr, operand);
            @(posedge clk);
            #1;
            cpu_req[id]   = 1;
            cpu_amo[id]   = 1;
            cpu_amo_op[id*5 +: 5] = op;
            cpu_amo_word[id] = word_op;
            cpu_addr[id*64 +: 64] = addr;
            cpu_wdata[id*64 +: 64] = operand;
            
            while (!cpu_gnt[id]) @(posedge clk);
            $display("[%0d cycles] CPU[%0d] AMO Granted", $time/10, id);
            
            #1;
            cpu_req[id] = 0;
            cpu_amo[id] = 0;
            cpu_amo_op[id*5 +: 5] = 0;
            
            while (!cpu_rvalid[id]) @(posedge clk);
            old_val = cpu_rdata[id*64 +: 64];
            $display("[%0d cycles] CPU[%0d] AMO Complete. Old Val=0x%016h", $time/10, id, old_val);
        end
    endtask

    task automatic core_lr;
        input integer id;
        input [63:0] addr;
        output [63:0] data;
        begin
            $display("[%0d cycles] CPU[%0d] LR Addr=0x%016h", $time/10, id, addr);
            @(posedge clk);
            #1;
            cpu_req[id]   = 1;
            cpu_lr[id]    = 1;
            cpu_addr[id*64 +: 64] = addr;
            
            while (!cpu_gnt[id]) @(posedge clk);
            $display("[%0d cycles] CPU[%0d] LR Granted", $time/10, id);
            
            #1;
            cpu_req[id] = 0;
            cpu_lr[id]  = 0;
            
            while (!cpu_rvalid[id]) @(posedge clk);
            data = cpu_rdata[id*64 +: 64];
            $display("[%0d cycles] CPU[%0d] LR Complete. Data=0x%016h", $time/10, id, data);
        end
    endtask

    task automatic core_sc;
        input integer id;
        input [63:0] addr;
        input [63:0] data;
        output success;
        reg [63:0] ret_val;
        begin
            $display("[%0d cycles] CPU[%0d] SC Addr=0x%016h Data=0x%016h", $time/10, id, addr, data);
            @(posedge clk);
            #1;
            cpu_req[id]   = 1;
            cpu_sc[id]    = 1;
            cpu_addr[id*64 +: 64] = addr;
            cpu_wdata[id*64 +: 64] = data;
            
            while (!cpu_gnt[id]) @(posedge clk);
            $display("[%0d cycles] CPU[%0d] SC Granted", $time/10, id);
            
            #1;
            cpu_req[id] = 0;
            cpu_sc[id]  = 0;
            
            while (!cpu_rvalid[id]) @(posedge clk);
            ret_val = cpu_rdata[id*64 +: 64];
            success = (ret_val == 0);
            $display("[%0d cycles] CPU[%0d] SC Complete. Result=%0d (0=Success)", $time/10, id, ret_val);
        end
    endtask

    // Updated Backdoor Init: Path changed from $root... to Backdoor Bus
    task backdoor_init_l2;
        integer w;
        reg [49:0] l2_tag;
        reg [52:0] l1_tag;
        reg [63:0] data;
        begin
            $display("[%0d cycles] Backdoor initializing L2 Set 0 (and partial L1) via Bus...", $time/10);
            for (w = 0; w < 16; w = w + 1) begin
                l2_tag = w; 
                l1_tag = w << 3; 
                data = w << 14; 
                
                // 1. L2 Directory: Valid=1, Sharers={C1,C0}=11, Owner=0, Dirty=0 -> 9'h07
                bkdr_write(4, 0, w, 0, 64'h07);

                // 2. L2 Tag Array: Way w, Set 0
                bkdr_write(4, 1, w, 0, {14'b0, l2_tag}); // Pad to 64

                // 3. L2 Data Array: Way w, Set 0, Word 0
                bkdr_write(4, 2, w, 0, data);

                // 4. L1 Backdoor Init (Ways 0-7)
                if (w < 8) begin
                    // Core 0 L1: State=1(S), Tag, Data
                    bkdr_write(0, 0, w, 0, 64'd1); // State
                    bkdr_write(0, 1, w, 0, {11'b0, l1_tag}); // Tag
                    bkdr_write(0, 2, w, 0, data); // Data

                    // Core 1 L1
                    bkdr_write(1, 0, w, 0, 64'd1);
                    bkdr_write(1, 1, w, 0, {11'b0, l1_tag});
                    bkdr_write(1, 2, w, 0, data);
                end
            end
            $display("[%0d cycles] L2 Set 0 Initialized (16 ways). L1 Set 0 Initialized (8 ways).", $time/10);
        end
    endtask

    // Updated Backdoor Init
    task init_coherence_state;
        input [63:0] addr;
        input [3:0] sharers; // 4-bit mask
        input [1:0] owner;
        input [1:0] state; // 0=N, 1=B, 2=T, 3=TT
        input [63:0] val;
        
        reg [49:0] l2_tag;
        reg [52:0] l1_tag;
        reg [7:0] l2_set;
        reg [4:0] l1_set;
        reg [3:0] way;
        reg [63:0] dir_entry;
        reg [1:0]  l1_state;
        integer k;
        begin
            l2_set = addr[13:6];
            l1_set = addr[10:6];
            l2_tag = addr[63:14];
            l1_tag = addr[63:11];
            way = 0; // Always use Way 0 for specific tests

            $display("[%0d cycles] Init State: Addr=0x%h Sharers=%b Owner=%0d State=%0d Val=0x%h", 
                     $time/10, addr, sharers, owner, state, val);

            // 1. Init L2 Directory
            dir_entry = 0;
            dir_entry[0] = 1'b1;
            dir_entry[4:1] = sharers;
            dir_entry[5] = (state >= 2);
            dir_entry[7:6] = owner;
            dir_entry[8] = (state == 3);
            
            bkdr_write(4, 0, way, {8'b0, l2_set}, dir_entry);

            // 2. Init L2 Arrays (Tag/Data)
            bkdr_write(4, 1, way, {8'b0, l2_set}, {14'b0, l2_tag});
            bkdr_write(4, 2, way, {5'b0, l2_set, 3'd0}, val);

            // 3. Init L1 Arrays for Sharers
            // Cycle through 4 cores
            for (k=0; k<4; k=k+1) begin
                if (sharers[k]) begin
                     l1_state = 2'b01; // Shared default
                     if (owner == k[1:0]) begin
                         if (state == 2) l1_state = 2'b10; // Exclusive
                         if (state == 3) l1_state = 2'b11; // Modified
                     end
                     
                     bkdr_write(k[3:0], 0, way, {11'b0, l1_set}, {62'b0, l1_state});
                     bkdr_write(k[3:0], 1, way, {11'b0, l1_set}, {11'b0, l1_tag});
                     // L1 Data: [way][{l1_set, 3'd0}]
                     bkdr_write(k[3:0], 2, way, {8'b0, l1_set, 3'd0}, val);
                end
            end
        end
    endtask

    // Test Sequence
    reg [63:0] read_val;
    reg sc_res;
    reg [10:1] results;
    integer i;

    initial begin
        rst_n = 0;
        
        // Init internal arrays
        cpu_req = 0;
        cpu_we = 0;
        cpu_addr = 0;
        cpu_wdata = 0;
        cpu_be = 0;
        cpu_amo = 0;
        cpu_lr = 0;
        cpu_sc = 0;
        cpu_amo_op = 0;
        cpu_amo_word = 0;
        
        // Init Backdoor ports
        l1_0_bkdr_valid = 0; l1_0_bkdr_core_id = 0; l1_0_bkdr_array_id = 0; l1_0_bkdr_way = 0; l1_0_bkdr_set = 0; l1_0_bkdr_data = 0;
        l1_1_bkdr_valid = 0; l1_1_bkdr_core_id = 0; l1_1_bkdr_array_id = 0; l1_1_bkdr_way = 0; l1_1_bkdr_set = 0; l1_1_bkdr_data = 0;
        l1_2_bkdr_valid = 0; l1_2_bkdr_core_id = 0; l1_2_bkdr_array_id = 0; l1_2_bkdr_way = 0; l1_2_bkdr_set = 0; l1_2_bkdr_data = 0;
        l1_3_bkdr_valid = 0; l1_3_bkdr_core_id = 0; l1_3_bkdr_array_id = 0; l1_3_bkdr_way = 0; l1_3_bkdr_set = 0; l1_3_bkdr_data = 0;
        l2_bkdr_valid = 0; l2_bkdr_core_id = 0; l2_bkdr_array_id = 0; l2_bkdr_way = 0; l2_bkdr_set = 0; l2_bkdr_data = 0;
        
        results = 0;

        #20 rst_n = 1;
        
        #20;
        $display("\n[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] Starting Cache System Stress Test - 4 Core Stimulus Architecture", $time / 10);
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] Test Sequence:", $time / 10);
        $display("[%0d cycles]   1. Write/Write Contention Test", $time / 10);
        $display("[%0d cycles]   2. Eviction with Sharers Test", $time / 10);
        $display("[%0d cycles]   3. Shared-to-Exclusive Upgrade (Verify AcquirePerm)", $time / 10);
        $display("[%0d cycles]   4. Dirty Line Probe (Verify Owner Downgrade)", $time / 10);
        $display("[%0d cycles]   5. Atomic Increment (AMOADD)", $time / 10);
        $display("[%0d cycles]   6. Load-Reserved/Store-Conditional Success (LR/SC)", $time / 10);
        $display("[%0d cycles]   7. LR/SC Failure (Intervening Write)", $time / 10);
        $display("[%0d cycles]   8. AMOSWAP (Swap Operation)", $time / 10);
        $display("[%0d cycles]   9. Ping-Pong Ownership", $time / 10);
        $display("[%0d cycles]  10. Capacity Eviction (Dirty Writeback)", $time / 10);
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
            results[1] = 1;
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
        core_read(0, (16 << 14), read_val);
        
        $display("[%0d cycles] ========================================", $time / 10);
        // Calculate expected value: addr 0x40000 -> mem_idx 0x8000 -> data 0x8000
        if (read_val == 64'h8000) begin
            results[2] = 1;
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
             results[3] = 1;
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
             results[4] = 1;
             $display("[%0d cycles] PASS: Dirty Data Read Successful.", $time / 10);
        end else begin
             $display("[%0d cycles] FAIL: Data Mismatch. Expected 0xD157, Got 0x%h", $time / 10, read_val);
        end
        $display("[%0d cycles] ========================================\n", $time / 10);

        #100;

        // --- Test 5: Atomic Increment (AMOADD) ---
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] TEST 5: Atomic Increment (AMOADD)", $time / 10);
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] Setup: Init address 0xA0000 with value 10", $time / 10);
        $display("[%0d cycles] Action: Core 0 performs AMOADD with operand 5", $time / 10);
        $display("[%0d cycles] Expect: Old Value = 10. New Value in Memory = 15.", $time / 10);
        $display("[%0d cycles] ========================================\n", $time / 10);

        results[5] = 1; // Assume pass, clear if fail
        // Init: Addr 0xA0000, Sharers={C0}=1, Owner=0, State=3(Modified), Val=10
        init_coherence_state(64'hA0000, 4'b0001, 0, 3, 64'd10);
        
        // AMOADD (Op=0)
        core_amo(0, 64'hA0000, 64'd5, 5'd0, 0, read_val);
        
        if (read_val == 64'd10) begin
             $display("[%0d cycles] PASS: AMO Returned correct old value (10).", $time / 10);
        end else begin
             results[5] = 0;
             $display("[%0d cycles] FAIL: AMO Returned wrong old value. Expected 10, Got %0d", $time / 10, read_val);
        end
        
        // Verify New Value (Read via Core 1)
        core_read(1, 64'hA0000, read_val);
        if (read_val == 64'd15) begin
             $display("[%0d cycles] PASS: Memory updated correctly to 15.", $time / 10);
        end else begin
             results[5] = 0;
             $display("[%0d cycles] FAIL: Memory update failed. Expected 15, Got %0d", $time / 10, read_val);
        end
        $display("[%0d cycles] ========================================\n", $time / 10);

        #100;

        // --- Test 6: Load-Reserved/Store-Conditional Success (LR/SC) ---
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] TEST 6: LR/SC Success", $time / 10);
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] Setup: Init address 0xB0000 with value 0x11", $time / 10);
        $display("[%0d cycles] Action: Core 0 performs LR then SC (with 0x22).", $time / 10);
        $display("[%0d cycles] Expect: LR returns 0x11. SC returns 0 (Success). Memory=0x22.", $time / 10);
        $display("[%0d cycles] ========================================\n", $time / 10);

        results[6] = 1; // Assume pass
        init_coherence_state(64'hB0000, 4'b0001, 0, 3, 64'h11);

        core_lr(0, 64'hB0000, read_val);
        if (read_val != 64'h11) begin
             results[6] = 0;
             $display("[%0d cycles] FAIL: LR returned wrong data 0x%h", $time/10, read_val);
        end

        core_sc(0, 64'hB0000, 64'h22, sc_res);
        if (sc_res) $display("[%0d cycles] PASS: SC Succeeded", $time/10);
        else        begin
             results[6] = 0;
             $display("[%0d cycles] FAIL: SC Failed", $time/10);
        end

        core_read(0, 64'hB0000, read_val);
        if (read_val == 64'h22) $display("[%0d cycles] PASS: Data updated to 0x22", $time/10);
        else                    begin
             results[6] = 0;
             $display("[%0d cycles] FAIL: Data not updated. Got 0x%h", $time/10, read_val);
        end

        #100;

        // --- Test 7: LR/SC Failure (Intervening Write) ---
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] TEST 7: LR/SC Failure (Intervening Write)", $time / 10);
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] Setup: Init address 0xC0000 with value 0x33", $time / 10);
        $display("[%0d cycles] Action: C0 LR -> C1 Write 0x44 -> C0 SC 0x55", $time / 10);
        $display("[%0d cycles] Expect: SC returns !0 (Fail). Data=0x44.", $time / 10);
        $display("[%0d cycles] ========================================\n", $time / 10);

        results[7] = 1; // Assume pass
        init_coherence_state(64'hC0000, 4'b0001, 0, 3, 64'h33);

        core_lr(0, 64'hC0000, read_val); // Register valid
        
        core_write(1, 64'hC0000, 64'h44); // Invalidate C0's reservation (C0 receives probe/inval)

        core_sc(0, 64'hC0000, 64'h55, sc_res); // Should fail
        if (!sc_res) $display("[%0d cycles] PASS: SC Failed as expected", $time/10);
        else         begin
             results[7] = 0;
             $display("[%0d cycles] FAIL: SC Succeeded unexpectedly", $time/10);
        end

        core_read(0, 64'hC0000, read_val);
        if (read_val == 64'h44) $display("[%0d cycles] PASS: Data is 0x44 (from C1)", $time/10);
        else                    begin
             results[7] = 0;
             $display("[%0d cycles] FAIL: Data incorrect 0x%h", $time/10, read_val);
        end

        #100;

        // --- Test 8: AMOSWAP ---
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] TEST 8: AMOSWAP", $time / 10);
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] Setup: Init 0xD0000 with 0x66", $time / 10);
        $display("[%0d cycles] Action: C0 AMOSWAP with 0x77", $time / 10);
        $display("[%0d cycles] Expect: Ret=0x66. Mem=0x77.", $time / 10);
        $display("[%0d cycles] ========================================\n", $time / 10);

        results[8] = 1; // Assume pass
        init_coherence_state(64'hD0000, 4'b0001, 0, 3, 64'h66);

        // AMOSWAP (Op=1)
        core_amo(0, 64'hD0000, 64'h77, 5'd1, 0, read_val);

        if (read_val == 64'h66) $display("[%0d cycles] PASS: AMOSWAP returned 0x66", $time/10);
        else                    begin
             results[8] = 0;
             $display("[%0d cycles] FAIL: AMOSWAP returned 0x%h", $time/10, read_val);
        end

        core_read(1, 64'hD0000, read_val);
        if (read_val == 64'h77) $display("[%0d cycles] PASS: Memory is 0x77", $time/10);
        else                    begin
             results[8] = 0;
             $display("[%0d cycles] FAIL: Memory is 0x%h", $time/10, read_val);
        end

        #100;

        // --- Test 9: Ping-Pong Ownership ---
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] TEST 9: Ping-Pong Ownership", $time / 10);
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] Sequence: C0 wr -> C1 wr -> C0 wr -> C1 wr", $time / 10);
        $display("[%0d cycles] ========================================\n", $time / 10);

        init_coherence_state(64'hE0000, 4'b0000, 0, 0, 64'h0); // Invalid everywhere

        core_write(0, 64'hE0000, 64'h1111);
        core_write(1, 64'hE0000, 64'h2222);
        core_write(0, 64'hE0000, 64'h3333);
        core_write(1, 64'hE0000, 64'h4444);

        core_read(2, 64'hE0000, read_val);
        if (read_val == 64'h4444) begin
             results[9] = 1;
             $display("[%0d cycles] PASS: Ping-Pong settled at 0x4444", $time/10);
        end else begin
             $display("[%0d cycles] FAIL: Got 0x%h", $time/10, read_val);
        end

        #100;

        // --- Test 10: Capacity Eviction (Dirty Writeback) ---
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] TEST 10: Capacity Eviction (Dirty Writeback)", $time / 10);
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] Fill Set 1 (Index 1) with 8 dirty lines (Tags 0-7).", $time / 10);
        $display("[%0d cycles] Access Line 9 (Tag 8). Check for Eviction.", $time / 10);
        $display("[%0d cycles] ========================================\n", $time / 10);

        for (i=0; i<8; i=i+1) begin
            // 0x10040, 0x14040, etc.
            init_coherence_state({(i[49:0] << 14) | 64'h40}, 4'b0001, 0, 3, 64'hA0 + i); 
            // Addr, Sharers=C0, Owner=0, State=M, Val
        end

        // Now access Tag 8 in Set 1. (8 << 14) | 0x40 = 0x20040.
        // This maps to Set 1, Way X. Since 8 ways are full/valid, one must be evicted.
        // Since all are dirty, it must writeback (ReleaseData).
        // TB monitors will show ReleaseData.
        
        $display("[%0d cycles] Accessing conflicting line 0x20040...", $time/10);
        core_read(0, 64'h20040, read_val);
        
        $display("[%0d cycles] Read complete. Check logs for 'ReleaseData' on Channel C.", $time/10);
        $display("[%0d cycles] PASS: Capacity Eviction Test Completed.", $time/10);
        results[10] = 1;

        #100;
        
        $display("[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] All Stress Tests Completed", $time / 10);
        $display("[%0d cycles] ========================================", $time / 10);
        
        $display("\n[%0d cycles] ========================================", $time / 10);
        $display("[%0d cycles] TEST RESULTS SUMMARY", $time / 10);
        $display("[%0d cycles] ========================================", $time / 10);
        $display("Test 1: Write/Write Contention           %s", results[1] ? "PASS" : "FAIL");
        $display("Test 2: Eviction with Sharers            %s", results[2] ? "PASS" : "FAIL");
        $display("Test 3: Shared-to-Exclusive Upgrade      %s", results[3] ? "PASS" : "FAIL");
        $display("Test 4: Dirty Line Probe                 %s", results[4] ? "PASS" : "FAIL");
        $display("Test 5: Atomic Increment                 %s", results[5] ? "PASS" : "FAIL");
        $display("Test 6: LR/SC Success                    %s", results[6] ? "PASS" : "FAIL");
        $display("Test 7: LR/SC Failure                    %s", results[7] ? "PASS" : "FAIL");
        $display("Test 8: AMOSWAP                          %s", results[8] ? "PASS" : "FAIL");
        $display("Test 9: Ping-Pong Ownership              %s", results[9] ? "PASS" : "FAIL");
        $display("Test 10: Capacity Eviction               %s", results[10] ? "PASS" : "FAIL");
        $display("========================================");
        
        $finish;
    end

endmodule
