`timescale 1ns/1ps

// TileLink Channel Monitor
// Monitors TileLink transactions and prints detailed information in a clean, summarized format.

module tl_monitor #(
    parameter ADDR_W = 64,
    parameter DATA_W = 64,
    parameter SOURCE_W = 4,
    parameter SINK_W = 4,
    parameter CHANNEL_NAME = "TL",
    parameter IS_MANAGER = 0  // Set to 1 if monitoring a Manager (Slave) interface (e.g. L2, MEM)
) (
    input wire clk,
    // Channel A (Request)
    input wire a_valid,
    input wire a_ready,
    input wire [2:0] a_opcode,
    input wire [2:0] a_param,
    input wire [3:0] a_size,
    input wire [SOURCE_W-1:0] a_source,
    input wire [ADDR_W-1:0] a_address,
    input wire [7:0] a_mask,
    input wire [DATA_W-1:0] a_data,
    
    // Channel B (Probe)
    input wire b_valid,
    input wire b_ready,
    input wire [2:0] b_opcode,
    input wire [2:0] b_param,
    input wire [3:0] b_size,
    input wire [SOURCE_W-1:0] b_source,
    input wire [ADDR_W-1:0] b_address,
    input wire [7:0] b_mask,
    input wire [DATA_W-1:0] b_data,
    
    // Channel C (Release)
    input wire c_valid,
    input wire c_ready,
    input wire [2:0] c_opcode,
    input wire [2:0] c_param,
    input wire [3:0] c_size,
    input wire [SOURCE_W-1:0] c_source,
    input wire [ADDR_W-1:0] c_address,
    input wire [DATA_W-1:0] c_data,
    
    // Channel D (Grant)
    input wire d_valid,
    input wire d_ready,
    input wire [2:0] d_opcode,
    input wire [1:0] d_param,
    input wire [3:0] d_size,
    input wire [SOURCE_W-1:0] d_source,
    input wire [SINK_W-1:0] d_sink,
    input wire d_denied,
    input wire [DATA_W-1:0] d_data,
    
    // Channel E (GrantAck)
    input wire e_valid,
    input wire e_ready,
    input wire [SINK_W-1:0] e_sink
);

    // Helper Functions for Decoding
    function [127:0] decode_a_opcode;
        input [2:0] opcode;
        case (opcode)
            3'd0: decode_a_opcode = "PutFullData";
            3'd1: decode_a_opcode = "PutPartialData";
            3'd2: decode_a_opcode = "ArithmeticData";
            3'd3: decode_a_opcode = "LogicalData";
            3'd4: decode_a_opcode = "Get";
            3'd5: decode_a_opcode = "Intent";
            3'd6: decode_a_opcode = "AcquireBlock";
            3'd7: decode_a_opcode = "AcquirePerm";
            default: decode_a_opcode = "UNKNOWN";
        endcase
    endfunction

    function [127:0] decode_b_opcode;
        input [2:0] opcode;
        case (opcode)
            3'd6: decode_b_opcode = "Probe";
            3'd7: decode_b_opcode = "ProbePerm";
            default: decode_b_opcode = "UNKNOWN";
        endcase
    endfunction

    function [127:0] decode_c_opcode;
        input [2:0] opcode;
        case (opcode)
            3'd0: decode_c_opcode = "AccessAck";
            3'd1: decode_c_opcode = "AccessAckData";
            3'd2: decode_c_opcode = "HintAck";
            3'd4: decode_c_opcode = "ProbeAck";
            3'd5: decode_c_opcode = "ProbeAckData";
            3'd6: decode_c_opcode = "Release";
            3'd7: decode_c_opcode = "ReleaseData";
            default: decode_c_opcode = "UNKNOWN";
        endcase
    endfunction

    function [127:0] decode_d_opcode;
        input [2:0] opcode;
        case (opcode)
            3'd0: decode_d_opcode = "AccessAck";
            3'd1: decode_d_opcode = "AccessAckData";
            3'd2: decode_d_opcode = "HintAck";
            3'd4: decode_d_opcode = "Grant";
            3'd5: decode_d_opcode = "GrantData";
            3'd6: decode_d_opcode = "ReleaseAck";
            default: decode_d_opcode = "UNKNOWN";
        endcase
    endfunction

    function [39:0] decode_grow_param;
        input [2:0] param;
        case (param)
            3'd0: decode_grow_param = "NtoB";
            3'd1: decode_grow_param = "NtoT";
            3'd2: decode_grow_param = "BtoT";
            3'd3: decode_grow_param = "TtoT"; // Not typical for Grow, but defined
            3'd4: decode_grow_param = "BtoB"; // Not typical for Grow
            3'd5: decode_grow_param = "NtoN";
            default: decode_grow_param = "UNK";
        endcase
    endfunction

    function [39:0] decode_shrink_param;
        input [2:0] param;
        case (param)
            3'd0: decode_shrink_param = "TtoB";
            3'd1: decode_shrink_param = "TtoN";
            3'd2: decode_shrink_param = "BtoN";
            3'd3: decode_shrink_param = "TtoT";
            3'd4: decode_shrink_param = "BtoB";
            3'd5: decode_shrink_param = "NtoN";
            default: decode_shrink_param = "UNK";
        endcase
    endfunction

    // ------------------------------------------------------------------------
    // Channel A Monitor (Requests)
    // ------------------------------------------------------------------------
    reg [2:0] a_beat_cnt;
    reg       a_in_burst;
    
    always @(posedge clk) begin
        if (a_valid && a_ready) begin
            // Detect if this opcode carries data
            if (a_opcode == 3'd0 || a_opcode == 3'd1) begin // PutFull/Partial
                if (!a_in_burst) begin
                    $display("[%0d cycles] %s %s A: %s @ 0x%h (Src:%0d Sz:%0d)", 
                             $time/10, CHANNEL_NAME, IS_MANAGER ? "<-" : "->", decode_a_opcode(a_opcode), a_address, a_source, a_size);
                    a_in_burst = 1;
                    a_beat_cnt = 0;
                end else begin
                    a_beat_cnt = a_beat_cnt + 1;
                end
                
                // End of burst check (assuming 64B line / 8B data = 7 beats max for Size 6)
                // Simplified: Just check for beat 7
                if (a_beat_cnt == 3'd7) begin
                    $display("                ... (Data Burst Complete)");
                    a_in_burst = 0;
                    a_beat_cnt = 0;
                end
            end else begin
                // Non-data commands (Get, Acquire) - Print immediately
                $display("[%0d cycles] %s %s A: %s @ 0x%h (Src:%0d Param:%s)", 
                         $time/10, CHANNEL_NAME, IS_MANAGER ? "<-" : "->", decode_a_opcode(a_opcode), a_address, a_source, decode_grow_param(a_param));
            end
        end
    end

    // ------------------------------------------------------------------------
    // Channel B Monitor (Probes)
    // ------------------------------------------------------------------------
    always @(posedge clk) begin
        if (b_valid && b_ready) begin
            $display("[%0d cycles] %s %s B: %s @ 0x%h (Src:%0d Param:%s)", 
                     $time/10, CHANNEL_NAME, IS_MANAGER ? "->" : "<-", decode_b_opcode(b_opcode), b_address, b_source, decode_shrink_param(b_param));
        end
    end

    // ------------------------------------------------------------------------
    // Channel C Monitor (Releases)
    // ------------------------------------------------------------------------
    reg [2:0] c_beat_cnt;
    reg       c_in_burst;

    always @(posedge clk) begin
        if (c_valid && c_ready) begin
            if (c_opcode == 3'd1 || c_opcode == 3'd5 || c_opcode == 3'd7) begin // AccessAckData, ProbeAckData, ReleaseData
                if (!c_in_burst) begin
                    $display("[%0d cycles] %s %s C: %s @ 0x%h (Src:%0d Param:%s)", 
                             $time/10, CHANNEL_NAME, IS_MANAGER ? "<-" : "->", decode_c_opcode(c_opcode), c_address, c_source, decode_shrink_param(c_param));
                    c_in_burst = 1;
                    c_beat_cnt = 0;
                end else begin
                    c_beat_cnt = c_beat_cnt + 1;
                end

                if (c_beat_cnt == 3'd7) begin
                    $display("                ... (Data Burst Complete)");
                    c_in_burst = 0;
                    c_beat_cnt = 0;
                end
            end else begin
                $display("[%0d cycles] %s %s C: %s @ 0x%h (Src:%0d Param:%s)", 
                         $time/10, CHANNEL_NAME, IS_MANAGER ? "<-" : "->", decode_c_opcode(c_opcode), c_address, c_source, decode_shrink_param(c_param));
            end
        end
    end

    // ------------------------------------------------------------------------
    // Channel D Monitor (Grants/Responses)
    // ------------------------------------------------------------------------
    reg [2:0] d_beat_cnt;
    reg       d_in_burst;

    always @(posedge clk) begin
        if (d_valid && d_ready) begin
            if (d_opcode == 3'd1 || d_opcode == 3'd5) begin // AccessAckData or GrantData
                if (!d_in_burst) begin
                    $display("[%0d cycles] %s %s D: %s (Src:%0d Snk:%0d) -> Data Start", 
                             $time/10, CHANNEL_NAME, IS_MANAGER ? "->" : "<-", decode_d_opcode(d_opcode), d_source, d_sink);
                    d_in_burst = 1;
                    d_beat_cnt = 0;
                end else begin
                    d_beat_cnt = d_beat_cnt + 1;
                end

                if (d_beat_cnt == 3'd7) begin
                    $display("                ... (Data Burst Complete)");
                    d_in_burst = 0;
                    d_beat_cnt = 0;
                end
            end else begin
                $display("[%0d cycles] %s %s D: %s (Src:%0d Snk:%0d)", 
                         $time/10, CHANNEL_NAME, IS_MANAGER ? "->" : "<-", decode_d_opcode(d_opcode), d_source, d_sink);
            end
        end
    end

    // ------------------------------------------------------------------------
    // Channel E Monitor (GrantAck)
    // ------------------------------------------------------------------------
    always @(posedge clk) begin
        if (e_valid && e_ready) begin
            $display("[%0d cycles] %s %s E: GrantAck (Snk:%0d)", $time/10, CHANNEL_NAME, IS_MANAGER ? "<-" : "->", e_sink);
        end
    end

endmodule
