`timescale 1ns/1ps

module tl_arbiter_tb (
    input clk,
    input rst_n
);

    parameter N = 4;
    parameter DATA_W = 8;

    reg [N-1:0] valid_i;
    wire [N-1:0] ready_o;
    reg [N*DATA_W-1:0] data_i;

    wire valid_o;
    reg ready_i;
    wire [DATA_W-1:0] data_o;

    tl_arbiter #(
        .N(N),
        .DATA_W(DATA_W)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .valid_i(valid_i),
        .ready_o(ready_o),
        .data_i(data_i),
        .valid_o(valid_o),
        .ready_i(ready_i),
        .data_o(data_o),
        .last_i(1'b1)  // All single-beat in this test
    );

    integer i;
    reg [31:0] cycle;

    // Initial setup
    initial begin
        valid_i = 0;
        data_i = 0;
        ready_i = 0;
        cycle = 0;
        
        // Set distinct data for each input
        for (i = 0; i < N; i = i + 1) begin
            data_i[i*DATA_W +: DATA_W] = i + 8'hA0;
        end
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            cycle <= 0;
            valid_i <= 0;
            ready_i <= 0;
        end else begin
            cycle <= cycle + 1;

            // --- Test Sequence ---
            case (cycle)
                // Wait for reset release
                10: begin
                    $display("--- Test 1: Single Request (Client 0) ---");
                    valid_i[0] <= 1;
                    ready_i <= 1;
                end
                11: begin
                    if (valid_o && data_o == 8'hA0 && ready_o[0]) 
                        $display("PASS: Client 0 granted");
                    else 
                        $display("FAIL: Client 0 not granted correctly. valid_o=%b data_o=%h ready_o=%b", valid_o, data_o, ready_o);
                    
                    valid_i[0] <= 0;
                end
                
                // Gap
                15: begin
                    $display("--- Test 2: Round Robin (All Requesting) ---");
                    valid_i <= 4'b1111;
                    ready_i <= 1;
                end
                
                // Cycle 1 of RR
                16: begin
                    // Previous grant was 0, so mask should block 0. Next is 1.
                    if (data_o == 8'hA1) $display("PASS: RR Cycle 1 -> Client 1");
                    else $display("FAIL: RR Cycle 1 -> Expected A1, Got %h", data_o);
                end
                
                // Cycle 2 of RR
                17: begin
                    if (data_o == 8'hA2) $display("PASS: RR Cycle 2 -> Client 2");
                    else $display("FAIL: RR Cycle 2 -> Expected A2, Got %h", data_o);
                end

                // Cycle 3 of RR
                18: begin
                    if (data_o == 8'hA3) $display("PASS: RR Cycle 3 -> Client 3");
                    else $display("FAIL: RR Cycle 3 -> Expected A3, Got %h", data_o);
                end

                // Cycle 4 of RR (Wrap around to 0)
                19: begin
                    if (data_o == 8'hA0) $display("PASS: RR Cycle 4 -> Client 0");
                    else $display("FAIL: RR Cycle 4 -> Expected A0, Got %h", data_o);
                    
                    valid_i <= 0;
                end

                // Gap
                25: begin
                    $display("--- Test 3: Backpressure ---");
                    valid_i[2] <= 1;
                    ready_i <= 0;
                end
                26: begin
                    if (valid_o && !ready_o[2]) $display("PASS: Valid asserted but not ready");
                    else $display("FAIL: Backpressure check failed");
                    
                    ready_i <= 1;
                end
                27: begin
                    if (ready_o[2]) $display("PASS: Ready propagated");
                    else $display("FAIL: Ready not propagated");
                    
                    valid_i <= 0;
                end

                30: begin
                    $display("All tests completed");
                    $finish;
                end
            endcase
        end
    end

endmodule
