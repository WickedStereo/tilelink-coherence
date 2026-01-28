// rv64g_l1_vlsu_hit_tb.v - Testbench for VLSU hit detection
// Tests:
//   1. Single lane hit/miss detection
//   2. Multi-lane parallel hit detection
//   3. Mixed hit/miss across lanes
//   4. Different way hits

`timescale 1ns/1ps
`include "params.vh"

/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off STMTDLY */
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */

module rv64g_l1_vlsu_hit_tb;

    // Parameters
    localparam NUM_LANES = 8;
    localparam NUM_BANKS = 8;
    localparam WAYS      = 8;
    localparam TAG_W     = 53;
    localparam INDEX_W   = 5;
    localparam SETS      = 32;

    // Clock and reset
    reg clk;
    reg rst_n;

    // Test signals
    reg [NUM_LANES*64-1:0]       lane_addr;
    reg [NUM_LANES-1:0]          lane_valid;
    reg [NUM_BANKS*WAYS*TAG_W-1:0] bank_tag_way;
    reg [NUM_BANKS*WAYS*2-1:0]   bank_state_way;
    reg [NUM_BANKS*3-1:0]        bank_src_lane;
    reg [NUM_BANKS-1:0]          bank_active;

    wire [NUM_LANES-1:0]         lane_hit;
    wire [NUM_LANES*3-1:0]       lane_hit_way;
    wire [NUM_LANES*2-1:0]       lane_state;
    wire                         any_miss;
    wire [NUM_LANES-1:0]         lane_miss;

    // DUT
    rv64g_l1_vlsu_hit_detect #(
        .NUM_LANES(NUM_LANES),
        .NUM_BANKS(NUM_BANKS),
        .WAYS     (WAYS),
        .TAG_W    (TAG_W),
        .INDEX_W  (INDEX_W)
    ) dut (
        .lane_addr_i      (lane_addr),
        .lane_valid_i     (lane_valid),
        .bank_tag_way_i   (bank_tag_way),
        .bank_state_way_i (bank_state_way),
        .bank_src_lane_i  (bank_src_lane),
        .bank_active_i    (bank_active),
        .lane_hit_o       (lane_hit),
        .lane_hit_way_o   (lane_hit_way),
        .lane_state_o     (lane_state),
        .any_miss_o       (any_miss),
        .lane_miss_o      (lane_miss)
    );

    // Clock generation
    initial clk = 0;
    always #5 clk = ~clk;

    // Helper task: Set tag/state for a specific bank/way
    task set_bank_way_tag;
        input [2:0] bank;
        input [2:0] way;
        input [TAG_W-1:0] tag;
        input [1:0] state;
        integer idx;
        begin
            idx = bank * WAYS + way;
            bank_tag_way[(idx+1)*TAG_W-1 -: TAG_W] = tag;
            bank_state_way[(idx+1)*2-1 -: 2] = state;
        end
    endtask

    // Helper task: Set lane address
    task set_lane_addr;
        input [2:0] lane;
        input [63:0] addr;
        begin
            lane_addr[(lane+1)*64-1 -: 64] = addr;
        end
    endtask

    // Helper function: Extract tag from address
    function [TAG_W-1:0] addr_to_tag;
        input [63:0] addr;
        begin
            addr_to_tag = addr[63 : INDEX_W + 6];  // addr[63:11]
        end
    endfunction

    // Test sequence
    integer test_num;
    integer i, j;
    reg test_pass;
    reg [2:0] expected_way;
    reg [TAG_W-1:0] test_tag;

    initial begin
        $display("=== VLSU Hit Detection Testbench ===");
        test_num = 0;
        test_pass = 1;

        // Initialize signals
        rst_n = 0;
        lane_addr = 0;
        lane_valid = 0;
        bank_tag_way = 0;
        bank_state_way = 0;
        bank_src_lane = 0;
        bank_active = 0;

        // Reset
        repeat(10) @(posedge clk);
        rst_n = 1;
        repeat(2) @(posedge clk);

        // =================================================================
        // Test 1: Single lane miss (empty cache)
        // =================================================================
        test_num = 1;
        $display("\nTest %0d: Single lane miss (empty cache)", test_num);

        // Set up lane 0 to access address 0x1000 (bank 0)
        set_lane_addr(0, 64'h1000);
        lane_valid = 8'b0000_0001;
        bank_active = 8'b0000_0001;

        @(posedge clk);  // Wait for combinational logic to settle

        if (lane_hit[0] != 0) begin
            $display("  FAIL: Lane 0 should miss, got hit");
            test_pass = 0;
        end else if (any_miss != 1) begin
            $display("  FAIL: any_miss should be 1");
            test_pass = 0;
        end else begin
            $display("  PASS: Lane 0 misses as expected");
        end

        // =================================================================
        // Test 2: Single lane hit (way 0)
        // =================================================================
        test_num = 2;
        $display("\nTest %0d: Single lane hit (way 0)", test_num);

        // Set bank 0, way 0 to have the tag for address 0x1000
        test_tag = addr_to_tag(64'h1000);
        set_bank_way_tag(0, 0, test_tag, MESI_T);  // Trunk state

        // Set up lane 0 to access address 0x1000 (bank 0)
        set_lane_addr(0, 64'h1000);
        lane_valid = 8'b0000_0001;
        bank_active = 8'b0000_0001;

        @(posedge clk);

        if (lane_hit[0] != 1) begin
            $display("  FAIL: Lane 0 should hit, got miss");
            test_pass = 0;
        end else if (lane_hit_way[2:0] != 3'd0) begin
            $display("  FAIL: Hit way should be 0, got %d", lane_hit_way[2:0]);
            test_pass = 0;
        end else if (lane_state[1:0] != MESI_T) begin
            $display("  FAIL: State should be MESI_T, got %d", lane_state[1:0]);
            test_pass = 0;
        end else if (any_miss != 0) begin
            $display("  FAIL: any_miss should be 0");
            test_pass = 0;
        end else begin
            $display("  PASS: Lane 0 hits in way 0 with state MESI_T");
        end

        // =================================================================
        // Test 3: Hit in different way
        // =================================================================
        test_num = 3;
        $display("\nTest %0d: Hit in way 5", test_num);

        // Clear way 0, set way 5
        set_bank_way_tag(0, 0, 0, MESI_N);
        test_tag = addr_to_tag(64'h1000);
        set_bank_way_tag(0, 5, test_tag, MESI_B);  // Branch state

        @(posedge clk);

        if (lane_hit[0] != 1) begin
            $display("  FAIL: Lane 0 should hit");
            test_pass = 0;
        end else if (lane_hit_way[2:0] != 3'd5) begin
            $display("  FAIL: Hit way should be 5, got %d", lane_hit_way[2:0]);
            test_pass = 0;
        end else if (lane_state[1:0] != MESI_B) begin
            $display("  FAIL: State should be MESI_B");
            test_pass = 0;
        end else begin
            $display("  PASS: Lane 0 hits in way 5");
        end

        // =================================================================
        // Test 4: Multiple lanes, all hit different banks
        // =================================================================
        test_num = 4;
        $display("\nTest %0d: 8 lanes, all hit different banks", test_num);

        // Clear all tags first
        bank_tag_way = 0;
        bank_state_way = 0;

        // Set up tags for each bank
        for (i = 0; i < 8; i = i + 1) begin
            // Lane i accesses bank i (unit stride)
            // Address: 0x2000 + i*8 (bank = addr[5:3] = i)
            set_lane_addr(i[2:0], 64'h2000 + i*8);
            test_tag = addr_to_tag(64'h2000 + i*8);
            set_bank_way_tag(i[2:0], i[2:0], test_tag, MESI_TT);  // Each bank hits in way i
        end

        lane_valid = 8'hFF;  // All lanes valid
        bank_active = 8'hFF;

        @(posedge clk);

        if (lane_hit != 8'hFF) begin
            $display("  FAIL: All lanes should hit, got 0x%h", lane_hit);
            test_pass = 0;
        end else if (any_miss != 0) begin
            $display("  FAIL: any_miss should be 0");
            test_pass = 0;
        end else begin
            // Check each lane's hit way
            test_pass = 1;
            for (i = 0; i < 8; i = i + 1) begin
                expected_way = i[2:0];
                if (lane_hit_way[(i+1)*3-1 -: 3] != expected_way) begin
                    $display("  FAIL: Lane %0d hit way should be %d, got %d", 
                             i, expected_way, lane_hit_way[(i+1)*3-1 -: 3]);
                    test_pass = 0;
                end
            end
            if (test_pass) begin
                $display("  PASS: All 8 lanes hit in expected ways");
            end
        end

        // =================================================================
        // Test 5: Mixed hit/miss scenario
        // =================================================================
        test_num = 5;
        $display("\nTest %0d: Mixed hit/miss (lanes 0,2,4,6 hit, 1,3,5,7 miss)", test_num);

        // Clear all tags
        bank_tag_way = 0;
        bank_state_way = 0;

        // Set up: even lanes hit, odd lanes miss
        for (i = 0; i < 8; i = i + 2) begin
            // Set up tag for even banks
            set_lane_addr(i[2:0], 64'h3000 + i*8);
            test_tag = addr_to_tag(64'h3000 + i*8);
            set_bank_way_tag(i[2:0], 3'd0, test_tag, MESI_T);
        end
        // Odd lanes have different addresses (no tags set)
        for (i = 1; i < 8; i = i + 2) begin
            set_lane_addr(i[2:0], 64'h4000 + i*8);
        end

        lane_valid = 8'hFF;
        bank_active = 8'hFF;

        @(posedge clk);

        if (lane_hit != 8'b0101_0101) begin
            $display("  FAIL: Expected hits=0x55, got 0x%h", lane_hit);
            test_pass = 0;
        end else if (lane_miss != 8'b1010_1010) begin
            $display("  FAIL: Expected misses=0xAA, got 0x%h", lane_miss);
            test_pass = 0;
        end else if (any_miss != 1) begin
            $display("  FAIL: any_miss should be 1");
            test_pass = 0;
        end else begin
            $display("  PASS: Hit/miss pattern correct");
        end

        // =================================================================
        // Test 6: Invalid lanes should not report hit
        // =================================================================
        test_num = 6;
        $display("\nTest %0d: Invalid lanes should not contribute to any_miss", test_num);

        // All tags set, but only lane 0 is valid
        for (i = 0; i < 8; i = i + 1) begin
            set_lane_addr(i[2:0], 64'h5000 + i*8);
            test_tag = addr_to_tag(64'h5000 + i*8);
            set_bank_way_tag(i[2:0], 3'd0, test_tag, MESI_T);
        end

        lane_valid = 8'b0000_0001;  // Only lane 0 valid

        @(posedge clk);

        if (any_miss != 0) begin
            $display("  FAIL: any_miss should be 0 (only lane 0 valid, and it hits)");
            test_pass = 0;
        end else if (lane_hit[0] != 1) begin
            $display("  FAIL: Lane 0 should hit");
            test_pass = 0;
        end else begin
            $display("  PASS: Only valid lane is checked");
        end

        // =================================================================
        // Summary
        // =================================================================
        repeat(5) @(posedge clk);
        $display("\n=================================");
        if (test_pass) begin
            $display("SUCCESS: All tests passed!");
        end else begin
            $display("FAILURE: Some tests failed");
        end
        $display("=================================");
        $finish;
    end

    // Timeout
    initial begin
        #100000;
        $display("TIMEOUT: Test did not complete");
        $finish;
    end

endmodule
