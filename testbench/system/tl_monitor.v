`timescale 1ns/1ps

// TileLink Channel Monitor
// Monitors TileLink transactions and prints detailed information

module tl_monitor #(
    parameter ADDR_W = 64,
    parameter DATA_W = 64,
    parameter SOURCE_W = 4,
    parameter SINK_W = 4,
    parameter CHANNEL_NAME = "TL"
) (
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

    // Opcode decoders
    function [80:0] decode_a_opcode;
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

    function [80:0] decode_b_opcode;
        input [2:0] opcode;
        case (opcode)
            3'd6: decode_b_opcode = "Probe";
            3'd7: decode_b_opcode = "ProbePerm";
            default: decode_b_opcode = "UNKNOWN";
        endcase
    endfunction

    function [80:0] decode_c_opcode;
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

    function [80:0] decode_d_opcode;
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

    function [20:0] decode_param;
        input [2:0] param;
        case (param)
            3'd0: decode_param = "NtoB";
            3'd1: decode_param = "NtoT";
            3'd2: decode_param = "BtoT";
            default: decode_param = "UNKNOWN";
        endcase
    endfunction

    // Channel A Monitor
    always @(posedge a_valid) begin
        if (a_valid && a_ready) begin
            $display("[%0d cycles] %s A-Channel: %s addr=0x%016h source=%0d param=%s size=%0d", 
                     $time / 10, CHANNEL_NAME, decode_a_opcode(a_opcode), a_address, a_source, 
                     decode_param(a_param), a_size);
            if (a_opcode == 3'd0 || a_opcode == 3'd1) begin // PutFullData or PutPartialData
                $display("                data=0x%016h mask=0x%02h", a_data, a_mask);
            end
        end
    end

    // Channel B Monitor
    always @(posedge b_valid) begin
        if (b_valid && b_ready) begin
            $display("[%0d cycles] %s B-Channel: %s addr=0x%016h source=%0d param=%0d", 
                     $time / 10, CHANNEL_NAME, decode_b_opcode(b_opcode), b_address, b_source, b_param);
        end
    end

    // Channel C Monitor
    always @(posedge c_valid) begin
        if (c_valid && c_ready) begin
            $display("[%0d cycles] %s C-Channel: %s addr=0x%016h source=%0d param=%0d", 
                     $time / 10, CHANNEL_NAME, decode_c_opcode(c_opcode), c_address, c_source, c_param);
            if (c_opcode == 3'd1 || c_opcode == 3'd5 || c_opcode == 3'd7) begin // Has data
                $display("                data=0x%016h", c_data);
            end
        end
    end

    // Channel D Monitor
    reg [2:0] d_opcode_q;
    reg [DATA_W-1:0] d_data_q;
    reg [2:0] d_beat_cnt;
    
    always @(posedge d_valid) begin
        if (d_valid && d_ready) begin
            if (d_opcode == 3'd1 || d_opcode == 3'd5) begin // AccessAckData or GrantData
                if (d_opcode_q != d_opcode) begin
                    // New transaction
                    d_beat_cnt = 0;
                    $display("[%0d cycles] %s D-Channel: %s addr=0x%016h source=%0d sink=%0d beat=0", 
                             $time / 10, CHANNEL_NAME, decode_d_opcode(d_opcode), 64'h0, d_source, d_sink);
                end else begin
                    d_beat_cnt = d_beat_cnt + 1;
                end
                $display("                data=0x%016h beat=%0d", d_data, d_beat_cnt);
                if (d_beat_cnt == 7) begin
                    $display("                (TRANSACTION COMPLETE)");
                end
            end else begin
                $display("[%0d cycles] %s D-Channel: %s source=%0d sink=%0d", 
                         $time / 10, CHANNEL_NAME, decode_d_opcode(d_opcode), d_source, d_sink);
            end
            d_opcode_q = d_opcode;
        end
    end

    // Channel E Monitor
    always @(posedge e_valid) begin
        if (e_valid && e_ready) begin
            $display("[%0d cycles] %s E-Channel: GrantAck sink=%0d", $time / 10, CHANNEL_NAME, e_sink);
        end
    end

endmodule
