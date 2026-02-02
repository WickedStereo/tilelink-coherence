`timescale 1ns/1ps

module tl_demux_tb (
    input clk,
    input rst_n
);

    parameter N = 4;
    parameter DATA_W = 8;
    parameter SEL_W = 2;

    reg valid_i;
    wire ready_o;
    reg [DATA_W-1:0] data_i;
    reg [SEL_W-1:0] sel_i;

    wire [N-1:0] valid_o;
    reg [N-1:0] ready_i;
    wire [N*DATA_W-1:0] data_o;

    tl_demux #(
        .N(N),
        .DATA_W(DATA_W),
        .SEL_W(SEL_W)
    ) dut (
        .valid_i(valid_i),
        .ready_o(ready_o),
        .data_i(data_i),
        .sel_i(sel_i),
        .valid_o(valid_o),
        .ready_i(ready_i),
        .data_o(data_o)
    );

    reg [31:0] cycle;

    initial begin
        valid_i = 0;
        data_i = 0;
        sel_i = 0;
        ready_i = 0;
        cycle = 0;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            cycle <= 0;
            valid_i <= 0;
            ready_i <= 0;
        end else begin
            cycle <= cycle + 1;

            case (cycle)
                10: begin
                    $display("--- Test 1: Route to Port 0 ---");
                    valid_i <= 1;
                    data_i <= 8'hA0;
                    sel_i <= 0;
                    ready_i <= 4'b0001; // Only Port 0 ready
                end
                11: begin
                    if (valid_o[0] && data_o[7:0] == 8'hA0 && ready_o)
                        $display("PASS: Port 0 received data and ready propagated");
                    else
                        $display("FAIL: Port 0 check. v=%b d=%h r=%b", valid_o, data_o[7:0], ready_o);
                    
                    valid_i <= 0;
                end

                15: begin
                    $display("--- Test 2: Route to Port 2 ---");
                    valid_i <= 1;
                    data_i <= 8'hC2;
                    sel_i <= 2;
                    ready_i <= 4'b0100; // Only Port 2 ready
                end
                16: begin
                    if (valid_o[2] && data_o[2*DATA_W +: DATA_W] == 8'hC2 && ready_o)
                        $display("PASS: Port 2 received data and ready propagated");
                    else
                        $display("FAIL: Port 2 check. v=%b d=%h r=%b", valid_o, data_o[2*DATA_W +: DATA_W], ready_o);
                    
                    valid_i <= 0;
                end

                20: begin
                    $display("--- Test 3: Backpressure on Port 1 ---");
                    valid_i <= 1;
                    data_i <= 8'hB1;
                    sel_i <= 1;
                    ready_i <= 4'b0000; // Port 1 NOT ready
                end
                21: begin
                    if (valid_o[1] && !ready_o)
                        $display("PASS: Port 1 valid but not ready (Backpressure OK)");
                    else
                        $display("FAIL: Backpressure check. v=%b r=%b", valid_o[1], ready_o);
                    
                    ready_i <= 4'b0010; // Now ready
                end
                22: begin
                    if (ready_o)
                        $display("PASS: Ready propagated after delay");
                    else
                        $display("FAIL: Ready not propagated");
                    
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
