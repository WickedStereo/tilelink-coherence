// rv64g_l1_vlsu_miss_handler_tb.v - Testbench for VLSU miss handler
// Tests:
//   1. Single miss handling
//   2. Multiple unique misses
//   3. Duplicate miss detection (same line)
//   4. Refill sequencing

`timescale 1ns/1ps
`include "params.vh"

/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off STMTDLY */
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */

module rv64g_l1_vlsu_miss_handler_tb;

    // Parameters
    localparam NUM_LANES  = 8;
    localparam TAG_W      = 53;
    localparam INDEX_W    = 5;
    localparam MAX_MISSES = 8;

    // Clock and reset
    reg clk;
    reg rst_n;

    // Inputs
    reg                      vlsu_req;
    reg [NUM_LANES-1:0]      lane_miss;
    reg [NUM_LANES*64-1:0]   lane_addr;
    reg                      any_miss;
    reg                      refill_done;

    // Outputs
    wire                     refill_req;
    wire [63:0]              refill_addr;
    wire                     busy;
    wire                     ready_for_replay;
    wire [3:0]               miss_count;

    // DUT
    rv64g_l1_vlsu_miss_handler #(
        .NUM_LANES (NUM_LANES),
        .TAG_W     (TAG_W),
        .INDEX_W   (INDEX_W),
        .MAX_MISSES(MAX_MISSES)
    ) dut (
        .clk_i             (clk),
        .rst_ni            (rst_n),
        .vlsu_req_i        (vlsu_req),
        .lane_miss_i       (lane_miss),
        .lane_addr_i       (lane_addr),
        .any_miss_i        (any_miss),
        .refill_req_o      (refill_req),
        .refill_addr_o     (refill_addr),
        .refill_done_i     (refill_done),
        .busy_o            (busy),
        .ready_for_replay_o(ready_for_replay),
        .miss_count_o      (miss_count)
    );

    // Clock generation
    initial clk = 0;
    always #5 clk = ~clk;

    // Helper task: Set lane address
    task set_lane_addr;
        input [2:0] lane;
        input [63:0] addr;
        begin
            lane_addr[(lane+1)*64-1 -: 64] = addr;
        end
    endtask

    // Test sequence
    integer test_num;
    integer i;
    reg test_pass;
    integer refill_count;

    initial begin
        $display("=== VLSU Miss Handler Testbench ===");
        test_num = 0;
        test_pass = 1;

        // Initialize signals
        rst_n = 0;
        vlsu_req = 0;
        lane_miss = 0;
        lane_addr = 0;
        any_miss = 0;
        refill_done = 0;

        // Reset
        repeat(10) @(posedge clk);
        rst_n = 1;
        repeat(2) @(posedge clk);

        // =================================================================
        // Test 1: Single miss handling
        // =================================================================
        test_num = 1;
        $display("\nTest %0d: Single miss handling", test_num);

        // Set up lane 0 with a miss at address 0x1000
        set_lane_addr(0, 64'h1000);
        lane_miss = 8'b0000_0001;
        any_miss = 1'b1;
        vlsu_req = 1'b1;

        @(posedge clk);

        // Wait for busy
        while (!busy) @(posedge clk);
        $display("  Handler busy");

        // Wait for refill request
        while (!refill_req) @(posedge clk);
        $display("  Refill request for addr 0x%h", refill_addr);
        
        if (refill_addr != 64'h1000) begin
            $display("  FAIL: Expected refill addr 0x1000, got 0x%h", refill_addr);
            test_pass = 0;
        end

        // Simulate refill completion
        @(posedge clk);
        refill_done = 1'b1;
        @(posedge clk);
        refill_done = 1'b0;

        // Wait for ready_for_replay
        while (!ready_for_replay) @(posedge clk);
        $display("  Ready for replay");

        // Release request
        vlsu_req = 1'b0;
        lane_miss = 0;
        any_miss = 0;

        @(posedge clk);
        while (busy) @(posedge clk);
        
        if (miss_count != 4'd1) begin
            $display("  FAIL: Expected miss_count=1, got %d", miss_count);
            test_pass = 0;
        end else begin
            $display("  PASS: Single miss handled correctly");
        end

        repeat(5) @(posedge clk);

        // =================================================================
        // Test 2: Multiple unique misses (3 different lines)
        // =================================================================
        test_num = 2;
        $display("\nTest %0d: Multiple unique misses (3 lines)", test_num);

        // Lanes 0, 2, 4 miss on different lines
        set_lane_addr(0, 64'h2000);  // Line at 0x2000
        set_lane_addr(1, 64'h2008);  // Same line as 0 (within 64B: 0x2000-0x203F)
        set_lane_addr(2, 64'h3000);  // Different line
        set_lane_addr(3, 64'h3018);  // Same line as 2
        set_lane_addr(4, 64'h4000);  // Different line
        set_lane_addr(5, 64'h4020);  // Same as 4
        set_lane_addr(6, 64'h4030);  // Same as 4
        set_lane_addr(7, 64'h4038);  // Same as 4

        lane_miss = 8'b1111_1111;  // All lanes miss
        any_miss = 1'b1;
        vlsu_req = 1'b1;

        @(posedge clk);

        // Wait for busy
        while (!busy) @(posedge clk);

        // Count unique refill addresses  
        // Note: S_REFILL_REQ only lasts 1 cycle, so we need to catch refill_req every cycle
        refill_count = 0;
        $display("  miss_count = %0d", miss_count);
        
        // Simple loop: check state every cycle, handle refill when we see request
        forever begin
            @(posedge clk);
            
            if (ready_for_replay) break;  // Done with all refills
            
            // Check for refill request
            if (refill_req) begin
                $display("  Refill %0d: addr 0x%h (idx=%0d)", 
                         refill_count, refill_addr, dut.refill_idx_q);
                refill_count = refill_count + 1;
            end
            
            // If in REFILL_WAIT state (3), pulse done
            // Use a different approach: check state directly
            if (dut.state_q == 3 && !refill_done) begin
                refill_done = 1'b1;
            end else begin
                refill_done = 1'b0;
            end
        end

        $display("  Total refills: %0d", refill_count);
        
        // Should be 3 unique lines: 0x2000, 0x3000, 0x4000
        if (refill_count != 3) begin
            $display("  FAIL: Expected 3 unique refills, got %d", refill_count);
            test_pass = 0;
        end else begin
            $display("  PASS: Correctly detected 3 unique lines");
        end

        // Release
        vlsu_req = 1'b0;
        lane_miss = 0;
        any_miss = 0;

        repeat(5) @(posedge clk);

        // =================================================================
        // Test 3: All lanes miss same line (deduplication)
        // =================================================================
        test_num = 3;
        $display("\nTest %0d: All lanes miss same line (deduplication)", test_num);

        // All lanes hit the same 64B line
        for (i = 0; i < 8; i = i + 1) begin
            set_lane_addr(i[2:0], 64'h5000 + i*8);  // All within 0x5000-0x503F
        end

        lane_miss = 8'hFF;
        any_miss = 1'b1;
        vlsu_req = 1'b1;

        @(posedge clk);
        while (!busy) @(posedge clk);

        refill_count = 0;
        forever begin
            @(posedge clk);
            
            if (ready_for_replay) break;
            
            if (refill_req) begin
                $display("  Refill: addr 0x%h", refill_addr);
                refill_count = refill_count + 1;
            end
            
            if (dut.state_q == 3 && !refill_done) begin
                refill_done = 1'b1;
            end else begin
                refill_done = 1'b0;
            end
        end

        if (refill_count != 1) begin
            $display("  FAIL: Expected 1 refill (deduplication), got %d", refill_count);
            test_pass = 0;
        end else begin
            $display("  PASS: Correctly deduplicated to 1 refill");
        end

        vlsu_req = 1'b0;
        lane_miss = 0;
        any_miss = 0;

        repeat(5) @(posedge clk);

        // =================================================================
        // Summary
        // =================================================================
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
        #50000;
        $display("TIMEOUT: Test did not complete");
        $finish;
    end

endmodule
