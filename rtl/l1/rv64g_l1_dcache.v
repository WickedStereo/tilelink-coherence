// rv64g_l1_dcache.v - Top-level
`timescale 1ns/100ps
`include "params.vh"

/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNUSEDPARAM */

module rv64g_l1_dcache (
	input              clk_i,
	input              rst_ni,

	// Optional maintenance
	input              invalidate_all_i,

	// CPU-side (slave-like OBI style)
	input              req_i,
	input              we_i,
	input       [7:0]  be_i,
	input      [63:0]  addr_i,
	input      [63:0]  wdata_i,
	output reg         gnt_o,
	output reg         rvalid_o,
	output reg [63:0]  rdata_o,

    // Atomic Operation Signals
    input              amo_i,          // Atomic operation flag
    input              lr_i,           // Load-Reserved operation
    input              sc_i,           // Store-Conditional operation
    input       [4:0]  amo_op_i,       // Atomic operation type
    input              amo_word_i,     // Atomic word operation flag (1=32b, 0=64b)

	// TileLink A Channel (Request)
	output reg         tl_a_valid_o,
	input              tl_a_ready_i,
	output reg  [2:0]  tl_a_opcode_o,
	output reg  [2:0]  tl_a_param_o,
	output reg  [3:0]  tl_a_size_o,
	output reg  [3:0]  tl_a_source_o,
	output reg  [63:0] tl_a_address_o,
	output reg  [7:0]  tl_a_mask_o,
	output reg  [63:0] tl_a_data_o,
	output reg         tl_a_corrupt_o,

	// TileLink B Channel (Probe)
	input              tl_b_valid_i,
	output reg         tl_b_ready_o,
	input       [2:0]  tl_b_opcode_i,
	input       [2:0]  tl_b_param_i,
	input       [3:0]  tl_b_size_i,
	input       [3:0]  tl_b_source_i,
	input       [63:0] tl_b_address_i,
	input       [7:0]  tl_b_mask_i,
	input       [63:0] tl_b_data_i,
	input              tl_b_corrupt_i,

	// TileLink C Channel (Release)
	output reg         tl_c_valid_o,
	input              tl_c_ready_i,
	output reg  [2:0]  tl_c_opcode_o,
	output reg  [2:0]  tl_c_param_o,
	output reg  [3:0]  tl_c_size_o,
	output reg  [3:0]  tl_c_source_o,
	output reg  [63:0] tl_c_address_o,
	output reg  [63:0] tl_c_data_o,
	output reg         tl_c_corrupt_o,

	// TileLink D Channel (Grant)
	input              tl_d_valid_i,
	output reg         tl_d_ready_o,
	input       [2:0]  tl_d_opcode_i,
	input       [1:0]  tl_d_param_i,
	input       [3:0]  tl_d_size_i,
	input       [3:0]  tl_d_source_i,
	input       [3:0]  tl_d_sink_i,
	input              tl_d_denied_i,
	input       [63:0] tl_d_data_i,
	input              tl_d_corrupt_i,

	// TileLink E Channel (Ack)
	output reg         tl_e_valid_o,
	input              tl_e_ready_i,
	output reg  [3:0]  tl_e_sink_o,

    // Backdoor Interface (Testbench Only)
    // verilator lint_off UNUSEDSIGNAL
    input              bkdr_valid_i,
    input       [3:0]  bkdr_core_id_i,
    input       [1:0]  bkdr_array_id_i,
    input       [7:0]  bkdr_way_i,
    input       [15:0] bkdr_set_i,
    input       [63:0] bkdr_data_i
    // verilator lint_on UNUSEDSIGNAL
);

	// Fixed configuration parameters
    parameter integer CORE_ID = 0; // Added for verification identification
	localparam integer ADDR_W          = 64;
	localparam integer DATA_W          = 64;
	// LINE_BYTES defined in params.vh
	localparam integer WORDS_PER_LINE  = LINE_BYTES / 8;
	localparam integer SETS            = L1_SETS;
	localparam integer WAYS            = L1_WAYS;
	localparam integer BYTE_OFF_W      = 3;   // addr[2:0]
	localparam integer WORD_OFF_W      = 3;   // addr[5:3]
	localparam integer LINE_OFF_W      = 6;   // addr[5:0]
	localparam integer INDEX_W         = 5;   // addr[10:6]
	localparam integer TAG_W           = 53;  // addr[63:11]

	// Address decode
	wire [INDEX_W-1:0] index  = addr_i[INDEX_W+LINE_OFF_W-1 : LINE_OFF_W];
	wire [WORD_OFF_W-1:0] word_off = addr_i[5:3];
	wire [TAG_W-1:0]    tag    = addr_i[63 : INDEX_W+LINE_OFF_W];

	// Array interfaces
	wire [63:0]  arr_rdata_sel;
	wire [TAG_W-1:0]  arr_tag_sel;
	wire [1:0]   arr_state_sel;
	wire [WAYS*64-1:0] arr_rdata_way_flat;
	wire [WAYS*TAG_W-1:0] arr_tag_way_flat;
	wire [WAYS*2-1:0] arr_state_way_flat;
	
	// Derived valid/dirty for PLRU and hit logic
	reg [WAYS-1:0] arr_valid_way;
	reg [WAYS-1:0] arr_dirty_way;
	integer w;
	always @(*) begin
		for (w = 0; w < WAYS; w = w + 1) begin
			arr_valid_way[w] = (arr_state_way_flat[w*2 +: 2] != MESI_N);
			arr_dirty_way[w] = (arr_state_way_flat[w*2 +: 2] == MESI_TT);
		end
	end

	// State and control for refill + writeback FSM
	localparam [3:0] S_IDLE = 4'd0,
	                 S_REF_REQ = 4'd1,
	                 S_REF_WAIT = 4'd2,
	                 S_ACK = 4'd3,
	                 S_RESP = 4'd4,
	                 S_WB_REQ = 4'd5,
	                 S_WB_DATA = 4'd6,
	                 S_WB_WAIT = 4'd7,
	                 S_PERM_REQ = 4'd8,
                     S_PROBE_RESP = 4'd9,
                     S_AMO_MODIFY = 4'd10,
                     S_AMO_WRITE = 4'd11;

	rv64g_l1_arrays #(
		.SETS(SETS),
		.WAYS(WAYS),
		.TAG_W(TAG_W),
		.INDEX_W(INDEX_W)
	) u_arrays (
		.clk_i              (clk_i),
		.rst_ni             (rst_ni),
		.invalidate_all_i   (state == S_IDLE ? invalidate_all_i : 1'b0),
		.index_i            (arr_index_w),
		.word_sel_i         (arr_word_sel),
		.way_sel_i          (arr_way_sel),
		.write_en_i         (arr_write_en),
		.state_i            (arr_state_in),
		.be_i               (arr_be),
		.tag_in_i           (arr_tag_in),
		.wdata_i            (arr_wdata),
		.rdata_selected_o   (arr_rdata_sel),
		.tag_selected_o     (arr_tag_sel),
		.state_selected_o   (arr_state_sel),
		.rdata_way_flat_o   (arr_rdata_way_flat),
		.tag_way_flat_o     (arr_tag_way_flat),
		.state_way_flat_o   (arr_state_way_flat)
	);

	// PLRU
	wire [2:0] victim_way;
	reg        plru_access_q;
	reg [2:0]  plru_used_way_q;
	rv64g_l1_plru #(
		.SETS(SETS),
		.INDEX_W(INDEX_W)
	) u_plru (
		.clk_i     (clk_i),
		.rst_ni    (rst_ni),
		.set_i     (index),
		.access_i  (plru_access_q),
		.used_way_i(plru_used_way_q),
		.valid_i   (arr_valid_way),
		.victim_o  (victim_way)
	);

    // Atomic Operation Registers
	reg               pend_is_amo_q, pend_is_amo_n;         // Pending is atomic op
	reg [4:0]         pend_amo_op_q, pend_amo_op_n;         // Pending AMO operation
	reg               pend_amo_word_q, pend_amo_word_n;     // Pending AMO word flag
	reg [63:0]        amo_old_value_q, amo_old_value_n;     // Old value for AMO (to return to CPU)

	// LR/SC Reservation Registers
	reg               resv_valid_q, resv_valid_n;           // Reservation valid flag
	reg [57:0]        resv_addr_q, resv_addr_n;             // Reservation address (tag + index)
	reg               resv_word_q, resv_word_n;             // Reservation size: 1=word, 0=double
	reg               pend_is_lr_q, pend_is_lr_n;           // Pending LR operation
	reg               pend_is_sc_q, pend_is_sc_n;           // Pending SC operation
	reg               sc_success_q, sc_success_n;           // SC result

    // Atomic ALU
	wire [63:0] amo_new_value;
	rv64g_atomic_alu u_atomic_alu (
		.amo_op_i      (pend_amo_op_q),
		.amo_word_i    (pend_amo_word_q),
		.old_value_i   (amo_old_value_q),
		.operand_i     (pend_wdata_q),
		.new_value_o   (amo_new_value)
	);


	// "_q" suffix = registered (current) value; "_n" suffix = next-state value
	reg [3:0] state, state_n;                               // FSM state
    reg [3:0] return_state_q, return_state_n;               // Return state for interrupts
	reg [2:0] beat_q, beat_n;                               // Refill/writeback beat counter
	reg [INDEX_W-1:0] pend_index_q, pend_index_n;           // Pending set index
	reg [TAG_W-1:0]   pend_tag_q, pend_tag_n;               // Pending tag
	reg [WORD_OFF_W-1:0] pend_word_q, pend_word_n;          // Pending word offset
	reg [2:0]         pend_victim_q, pend_victim_n;         // Pending victim way
	reg               pend_is_store_q, pend_is_store_n;     // Pending is store op
	reg [63:0]        pend_wdata_q, pend_wdata_n;           // Pending write data
	reg [7:0]         pend_be_q, pend_be_n;                 // Pending byte enables
	reg [TAG_W-1:0]   pend_evict_tag_q, pend_evict_tag_n;   // Pending evict tag
	reg [1:0]         pend_evict_state_q, pend_evict_state_n; // Pending evict state
	reg [63:0]        rdata_beat_q, rdata_beat_n;           // Data beat for refill
	reg [3:0]         pend_sink_q, pend_sink_n;             // Pending Grant sink
	reg               pend_is_probe_q, pend_is_probe_n;     // Pending is probe response
	reg [2:0]         pend_probe_param_q, pend_probe_param_n; // Pending probe param
	reg [3:0]         pend_probe_source_q, pend_probe_source_n; // Pending probe source
	reg               pend_has_data_q, pend_has_data_n;     // Pending has data to send
	reg               pend_probe_hit_q, pend_probe_hit_n;   // Pending probe hit status

    // Probe Pending Registers
    reg [INDEX_W-1:0] probe_pend_index_q, probe_pend_index_n;
    reg [TAG_W-1:0]   probe_pend_tag_q, probe_pend_tag_n;
    reg [2:0]         probe_pend_param_q, probe_pend_param_n;
    reg [3:0]         probe_pend_source_q, probe_pend_source_n;
    reg               probe_pend_has_data_q, probe_pend_has_data_n;
    reg               probe_pend_hit_q, probe_pend_hit_n;
    reg [2:0]         probe_pend_way_q, probe_pend_way_n;

	// For back-invalidate (Probe)
	reg [INDEX_W-1:0] binv_index;
	reg [TAG_W-1:0]   binv_tag;
	reg               binv_hit;
	reg [2:0]         binv_way;

	// Array control registers
	reg [2:0]         arr_word_sel;
	reg [2:0]         arr_way_sel;
	reg               arr_write_en;
	reg [1:0]         arr_state_in;
	reg [7:0]         arr_be;
	reg [TAG_W-1:0]   arr_tag_in;
	reg [63:0]        arr_wdata;

	// Combinational array index selection
	wire [INDEX_W-1:0] binv_index_w = tl_b_address_i[INDEX_W+LINE_OFF_W-1 : LINE_OFF_W];
	wire [INDEX_W-1:0] arr_index_w =
		((state == S_WB_REQ) || (state == S_WB_DATA) || (state == S_WB_WAIT) || (state == S_REF_WAIT) || (state == S_RESP) || (state == S_AMO_WRITE)) ? pend_index_q :
        ((state == S_PROBE_RESP)) ? probe_pend_index_q :
		((state == S_IDLE) && tl_b_valid_i ? binv_index_w : index);				// S_REF_WAIT not required?

	// Hit detection (combinational)
	reg hit;
	reg [2:0] hit_way;
	integer i;
	reg [TAG_W-1:0] tag_slice;
	always @(*) begin
		hit = 1'b0;
		hit_way = 3'd0;
		for (i = 0; i < WAYS; i = i + 1) begin
			tag_slice = arr_tag_way_flat[((i+1)*TAG_W-1) -: TAG_W];
			if (arr_valid_way[i] && (tag_slice == tag)) begin
				hit = 1'b1;
				hit_way = i[2:0];
			end
		end
	end
	
	// Verilog-2001 friendly: use indexed part-selects directly; derive hit_data_word when hit_way known
	wire [63:0] hit_data_word;
	assign hit_data_word = arr_rdata_way_flat[(((hit_way+1)*DATA_W)-1) -: DATA_W];


	// Next-state logic and outputs
	reg gnt_n, rvalid_n;
	reg [63:0] rdata_n;
	// reg req_n, we_n;
	// reg [7:0] be_n;
	// reg [63:0] addr_n, wdata_n;
	reg        plru_access_n;
	reg [2:0]  plru_used_way_n;

	// TileLink Next-State Signals
	reg        tl_a_valid_n;
	reg [2:0]  tl_a_opcode_n;
	reg [2:0]  tl_a_param_n;
	reg [3:0]  tl_a_size_n;
	reg [3:0]  tl_a_source_n;
	reg [63:0] tl_a_address_n;
	reg [7:0]  tl_a_mask_n;
	reg [63:0] tl_a_data_n;
	reg        tl_a_corrupt_n;

	reg        tl_b_ready_n;

	reg        tl_c_valid_n;
	reg [2:0]  tl_c_opcode_n;
	reg [2:0]  tl_c_param_n;
	reg [3:0]  tl_c_size_n;
	reg [3:0]  tl_c_source_n;
	reg [63:0] tl_c_address_n;
	reg [63:0] tl_c_data_n;
	reg        tl_c_corrupt_n;

	reg        tl_d_ready_n;

	reg        tl_e_valid_n;
	reg [3:0]  tl_e_sink_n;

	always @(*) begin
		// Defaults
		state_n       = state;
		beat_n        = beat_q;
		pend_index_n  = pend_index_q;
		pend_tag_n    = pend_tag_q;
		pend_word_n   = pend_word_q;
		pend_victim_n = pend_victim_q;
		pend_is_store_n  = pend_is_store_q;
		pend_wdata_n     = pend_wdata_q;
		pend_be_n        = pend_be_q;
		pend_evict_tag_n = pend_evict_tag_q;
		pend_evict_state_n = pend_evict_state_q;
		rdata_beat_n  = rdata_beat_q;
		pend_sink_n   = pend_sink_q;
		pend_is_probe_n = pend_is_probe_q;
		pend_probe_param_n = pend_probe_param_q;
		pend_probe_source_n = pend_probe_source_q;
		pend_has_data_n = pend_has_data_q;
		pend_probe_hit_n = pend_probe_hit_q;
        
        // Atomic defaults
		pend_is_amo_n    = pend_is_amo_q;
		pend_amo_op_n    = pend_amo_op_q;
		pend_amo_word_n  = pend_amo_word_q;
		amo_old_value_n  = amo_old_value_q;
		// LR/SC defaults
		resv_valid_n     = resv_valid_q;
		resv_addr_n      = resv_addr_q;
		resv_word_n      = resv_word_q;
		pend_is_lr_n     = pend_is_lr_q;
		pend_is_sc_n     = pend_is_sc_q;
		sc_success_n     = sc_success_q;
        
        return_state_n = return_state_q;
        probe_pend_index_n = probe_pend_index_q;
        probe_pend_tag_n = probe_pend_tag_q;
        probe_pend_param_n = probe_pend_param_q;
        probe_pend_source_n = probe_pend_source_q;
        probe_pend_has_data_n = probe_pend_has_data_q;
        probe_pend_hit_n = probe_pend_hit_q;
        probe_pend_way_n = probe_pend_way_q;

		gnt_n    = 1'b0;
		rvalid_n = 1'b0;
		rdata_n  = 64'd0;
		// req_n    = 1'b0;
		// we_n     = 1'b0;
		// be_n     = 8'h00;
		// addr_n   = 64'd0;
		// wdata_n  = 64'd0;

		// TileLink A Channel (Request)
		tl_a_valid_n = 1'b0;
		tl_a_opcode_n = 3'b0;
		tl_a_param_n = 3'b0;
		tl_a_size_n = 4'b0;
		tl_a_source_n = 4'b0;
		tl_a_address_n = 64'b0;
		tl_a_mask_n = 8'b0;
		tl_a_data_n = 64'b0;
		tl_a_corrupt_n = 1'b0;

		// TileLink B Channel (Probe)
		tl_b_ready_n = 1'b0;

		// TileLink C Channel (Release)
		tl_c_valid_n = 1'b0;
		tl_c_opcode_n = 3'b0;
		tl_c_param_n = 3'b0;
		tl_c_size_n = 4'b0;
		tl_c_source_n = 4'b0;
		tl_c_address_n = 64'b0;
		tl_c_data_n = 64'b0;
		tl_c_corrupt_n = 1'b0;

		// TileLink D Channel (Grant)
		tl_d_ready_n = 1'b0;

		// TileLink E Channel (Ack)
		tl_e_valid_n = 1'b0;
		tl_e_sink_n = 4'b0;
		tl_c_data_n = 64'b0;
		tl_c_corrupt_n = 1'b0;

		// TileLink D Channel (Grant)
		tl_d_ready_n = 1'b0;

		// TileLink E Channel (Ack)
		tl_e_valid_n = 1'b0;
		tl_e_sink_n = 4'b0;

		// Array control defaults
		arr_word_sel  = word_off;
		arr_way_sel   = hit_way;
		arr_write_en  = 1'b0;
		arr_state_in  = MESI_N;
		arr_be        = 8'h00;
		arr_tag_in    = {TAG_W{1'b0}};
		arr_wdata     = 64'd0;

		plru_access_n   = 1'b0;
		plru_used_way_n = 3'd0;

		// Precompute back-invalidate decode
		binv_index = tl_b_address_i[INDEX_W+LINE_OFF_W-1 : LINE_OFF_W];
		binv_tag   = tl_b_address_i[63 : INDEX_W+LINE_OFF_W];
		binv_hit   = 1'b0;
		binv_way   = 3'd0;
		for (i = 0; i < WAYS; i = i + 1) begin
			tag_slice = arr_tag_way_flat[((i+1)*TAG_W-1) -: TAG_W];
			if (arr_valid_way[i] && (tag_slice == binv_tag)) begin
				binv_hit = 1'b1;
				binv_way = i[2:0];
			end
		end

		case (state)
		S_IDLE: begin
			// Handle Probe (Channel B) when IDLE
			tl_b_ready_n = 1'b1;
			if (tl_b_valid_i && tl_b_ready_o) begin
				probe_pend_index_n = binv_index;
				probe_pend_tag_n   = binv_tag;
				probe_pend_param_n = tl_b_param_i;
				probe_pend_source_n = tl_b_source_i;
				
                if (resv_valid_q && ({binv_tag, binv_index} == resv_addr_q)) resv_valid_n = 1'b0;

				if (binv_hit) begin
					arr_way_sel = binv_way;
					probe_pend_way_n = binv_way;
					probe_pend_hit_n = 1'b1;
					
					if (arr_dirty_way[binv_way]) begin
						// Dirty: Send ProbeAckData
						beat_n = 3'd0;
						state_n = S_PROBE_RESP;
						probe_pend_has_data_n = 1'b1;
						// Invalidate line (downgrade to N)
						arr_write_en = 1'b1;
						arr_state_in = MESI_N;
						arr_be = 8'h00;
                        
                        // Pre-fetch Beat 0
                        arr_word_sel = 3'd0;
					end else begin
						// Clean: Send ProbeAck
						arr_write_en = 1'b1;
						arr_state_in = MESI_N;
						arr_be = 8'h00;
						state_n = S_PROBE_RESP;
						probe_pend_has_data_n = 1'b0;
					end
				end else begin
					// Miss: Send ProbeAck
					state_n = S_PROBE_RESP;
					probe_pend_has_data_n = 1'b0;
					probe_pend_hit_n = 1'b0;
				end
                return_state_n = S_IDLE;
			// Block accepting new request while invalidate_all_i asserted
			end else if (invalidate_all_i) begin
				// Keep outputs idle; arrays will clear valids
			end else begin
            // ============ LR/SC Handling ============
            // LR (Load-Reserved) hit
            if (req_i && lr_i && hit) begin
                gnt_n           = 1'b1;
                rvalid_n        = 1'b1;
                rdata_n         = hit_data_word;
                resv_valid_n    = 1'b1;
                resv_addr_n     = {tag, index};
                resv_word_n     = amo_word_i;
                pend_is_lr_n    = 1'b0; 
                plru_access_n   = 1'b1;
                plru_used_way_n = hit_way;
            // LR Miss
            end else if (req_i && lr_i && !hit) begin
                gnt_n           = 1'b1;
                pend_index_n    = index;
                pend_tag_n      = tag;
                pend_word_n     = word_off;
                pend_victim_n   = victim_way;
                pend_is_lr_n    = 1'b1;
                pend_is_store_n = 1'b0; // Load-like
                pend_amo_word_n = amo_word_i;
                
                pend_evict_tag_n = arr_tag_way_flat[(((victim_way+1)*TAG_W)-1) -: TAG_W];
                beat_n          = 3'd0;
                pend_evict_state_n = arr_state_way_flat[victim_way*2 +: 2];
                if (arr_valid_way[victim_way]) begin
                    state_n = S_WB_REQ;
                    pend_has_data_n = arr_dirty_way[victim_way];
                    pend_is_probe_n = 1'b0;
                    arr_word_sel = 3'd0;
                    arr_way_sel = victim_way;
                    tl_c_data_n = arr_rdata_sel;
                end else begin
                    state_n = S_REF_REQ;
                end
            // SC Hit
            end else if (req_i && sc_i && hit) begin
                gnt_n = 1'b1;
                if (resv_valid_q && ({tag, index} == resv_addr_q) && (amo_word_i == resv_word_q)) begin
                    // Reservation valid.
                    // Always serialize SC completion via AcquirePerm (even if already T/TT),
                    // so in-flight writers can clear the reservation before we commit.
                    pend_index_n    = index;
                    pend_tag_n      = tag;
                    pend_word_n     = word_off;
                    pend_victim_n   = hit_way;
                    pend_is_store_n = 1'b1;
                    pend_wdata_n    = wdata_i;
                    pend_be_n       = amo_word_i ? 8'h0F : 8'hFF;
                    pend_is_sc_n    = 1'b1;
                    pend_amo_word_n = amo_word_i;
                    sc_success_n    = 1'b1;
                    state_n         = S_PERM_REQ;
                end else begin
                    // SC Fail
                    rvalid_n = 1'b1;
                    rdata_n  = 64'd1; // Fail
                    resv_valid_n = 1'b0;
                end
            // SC Miss
            end else if (req_i && sc_i && !hit) begin
                gnt_n = 1'b1;
                pend_index_n    = index;
                pend_tag_n      = tag;
                pend_word_n     = word_off;
                pend_victim_n   = victim_way;
                pend_is_sc_n    = 1'b1;
                pend_is_store_n = 1'b1; // Write intent
                pend_amo_word_n = amo_word_i;
                pend_wdata_n    = wdata_i;
                
                if (resv_valid_q && ({tag, index} == resv_addr_q) && (amo_word_i == resv_word_q)) begin
                    sc_success_n = 1'b1;
                end else begin
                    sc_success_n = 1'b0;
                end
                
                pend_evict_tag_n = arr_tag_way_flat[(((victim_way+1)*TAG_W)-1) -: TAG_W];
                beat_n          = 3'd0;
                pend_evict_state_n = arr_state_way_flat[victim_way*2 +: 2];
                if (arr_valid_way[victim_way]) begin
                    state_n = S_WB_REQ;
                    pend_has_data_n = arr_dirty_way[victim_way];
                    pend_is_probe_n = 1'b0;
                    arr_word_sel = 3'd0;
                    arr_way_sel = victim_way;
                    tl_c_data_n = arr_rdata_sel;
                end else begin
                    state_n = S_REF_REQ;
                end
            // ============ AMO Handling ============
            end else if (req_i && amo_i && hit) begin
                gnt_n = 1'b1;
                // Check permissions
                if (arr_state_way_flat[hit_way*2 +: 2] == MESI_B) begin
                    // Upgrade
                    pend_index_n   = index;
                    pend_tag_n     = tag;
                    pend_word_n    = word_off;
                    pend_victim_n  = hit_way;
                    pend_is_store_n= 1'b1; // Write intent
                    pend_wdata_n   = wdata_i;
                    pend_is_amo_n  = 1'b1;
                    pend_amo_op_n  = amo_op_i;
                    pend_amo_word_n= amo_word_i;
                    // Clear reservation if needed
                    if (resv_valid_q && ({tag, index} == resv_addr_q)) resv_valid_n = 1'b0;
                    state_n = S_PERM_REQ;
                end else begin
                    // Excl/Mod -> Perform AMO
                    amo_old_value_n = hit_data_word;
                    pend_is_amo_n   = 1'b1;
                    pend_amo_op_n   = amo_op_i;
                    pend_amo_word_n = amo_word_i;
                    pend_wdata_n    = wdata_i;
                    pend_index_n    = index;
                    pend_tag_n      = tag;
                    pend_word_n     = word_off;
                    pend_victim_n   = hit_way;
                    if (resv_valid_q && ({tag, index} == resv_addr_q)) resv_valid_n = 1'b0;
                    state_n         = S_AMO_MODIFY;
                    plru_access_n   = 1'b1;
                    plru_used_way_n = hit_way;
                end
            // AMO Miss
            end else if (req_i && amo_i && !hit) begin
                gnt_n = 1'b1;
                pend_index_n    = index;
                pend_tag_n      = tag;
                pend_word_n     = word_off;
                pend_victim_n   = victim_way;
                pend_is_amo_n   = 1'b1;
                pend_amo_op_n   = amo_op_i;
                pend_amo_word_n = amo_word_i;
                pend_wdata_n    = wdata_i;
                pend_is_store_n = 1'b1; // Write intent
                if (resv_valid_q && ({tag, index} == resv_addr_q)) resv_valid_n = 1'b0;
                
                pend_evict_tag_n = arr_tag_way_flat[(((victim_way+1)*TAG_W)-1) -: TAG_W];
                beat_n          = 3'd0;
                pend_evict_state_n = arr_state_way_flat[victim_way*2 +: 2];
                if (arr_valid_way[victim_way]) begin
                    state_n = S_WB_REQ;
                    pend_has_data_n = arr_dirty_way[victim_way];
                    pend_is_probe_n = 1'b0;
                    arr_word_sel = 3'd0;
                    arr_way_sel = victim_way;
                    tl_c_data_n = arr_rdata_sel;
                end else begin
                    state_n = S_REF_REQ;
                end
			// Read-hit: 1-cycle response
			end else if (req_i && !we_i && hit) begin
				gnt_n    = 1'b1;
				rvalid_n = 1'b1;
				rdata_n  = hit_data_word;
				plru_access_n   = 1'b1;
				plru_used_way_n = hit_way;
			end else if (req_i && we_i && hit) begin
				// Write hit
				if (arr_state_way_flat[hit_way*2 +: 2] == MESI_B) begin
					// Shared state: Need to upgrade (AcquirePerm)
					gnt_n = 1'b1; // Accept request
					
					pend_index_n   = index;
					pend_tag_n     = tag;
					pend_word_n    = word_off;
					pend_victim_n  = hit_way;
					pend_is_store_n= 1'b1;
					pend_wdata_n   = wdata_i;
					pend_be_n      = be_i;
					
					state_n = S_PERM_REQ;
				end else begin
					// Exclusive/Modified: Write directly
					gnt_n    = 1'b1;      // accept write
						// Program array write for selected way/word
					arr_word_sel  = word_off;
					arr_way_sel   = hit_way;
					arr_write_en  = 1'b1;
					arr_state_in  = MESI_TT;
					arr_be        = be_i;
					arr_tag_in    = tag;
					arr_wdata     = wdata_i;
                    // Clear reservation if store writes to reserved address
                    if (resv_valid_q && ({tag, index} == resv_addr_q)) resv_valid_n = 1'b0;
					plru_access_n   = 1'b1;
					plru_used_way_n = hit_way;
				end
			end else if (req_i && !we_i && !hit) begin
				// Start clean refill miss
				gnt_n         = 1'b1;       // GRANT on miss - accept the transaction
				pend_index_n  = index;
				pend_tag_n    = tag;
				pend_word_n   = word_off;
				pend_victim_n = victim_way;
				pend_is_store_n = 1'b0;
				pend_evict_tag_n = arr_tag_way_flat[(((victim_way+1)*TAG_W)-1) -: TAG_W];
				beat_n        = 3'd0;
				pend_evict_state_n = arr_state_way_flat[victim_way*2 +: 2];
				if (arr_valid_way[victim_way] && arr_dirty_way[victim_way]) begin
					state_n = S_WB_REQ;
					pend_is_probe_n = 1'b0;
					pend_has_data_n = 1'b1;
                    
                    // Pre-fetch Beat 0
                    arr_word_sel = 3'd0;
                    arr_way_sel = victim_way;
                    tl_c_data_n = arr_rdata_sel;
				end else if (arr_valid_way[victim_way]) begin
					state_n = S_WB_REQ;
					pend_is_probe_n = 1'b0;
					pend_has_data_n = 1'b0;
				end else begin
					state_n = S_REF_REQ;
				end
			end else if (req_i && we_i && !hit) begin
				// Start store-miss RFO (read for ownership)
				gnt_n          = 1'b1;       // GRANT on miss - accept the transaction
				pend_index_n   = index;
				pend_tag_n     = tag;
				pend_word_n    = word_off;
				pend_victim_n  = victim_way;
				pend_is_store_n= 1'b1;
				pend_wdata_n   = wdata_i;
				pend_be_n      = be_i;
				pend_evict_tag_n = arr_tag_way_flat[(((victim_way+1)*TAG_W)-1) -: TAG_W];
				beat_n         = 3'd0;
				pend_evict_state_n = arr_state_way_flat[victim_way*2 +: 2];
				if (arr_valid_way[victim_way] && arr_dirty_way[victim_way]) begin
					state_n = S_WB_REQ;
					pend_is_probe_n = 1'b0;
					pend_has_data_n = 1'b1;

                    // Pre-fetch Beat 0
                    arr_word_sel = 3'd0;
                    arr_way_sel = victim_way;
                    tl_c_data_n = arr_rdata_sel;
				end else if (arr_valid_way[victim_way]) begin
					state_n = S_WB_REQ;
					pend_is_probe_n = 1'b0;
					pend_has_data_n = 1'b0;
				end else begin
					state_n = S_REF_REQ;
				end
			end
			end
		end

		S_REF_REQ: begin
			// Issue AcquireBlock
			tl_a_valid_n = 1'b1;
			tl_a_opcode_n = A_ACQUIRE_BLOCK;
			tl_a_param_n = pend_is_store_q ? NtoT : NtoB;
			tl_a_size_n = 4'd6; // 64 bytes
			tl_a_source_n = 4'd0;
			tl_a_address_n = {pend_tag_q, pend_index_q, 6'b0};
			tl_a_mask_n = 8'hFF;
			
            if (tl_a_ready_i && tl_a_valid_o) begin
                tl_a_valid_n = 1'b0;
                state_n = S_REF_WAIT;
            end
        end

		S_PERM_REQ: begin
            // Handle Probe while requesting permissions to avoid deadlock
            tl_b_ready_n = 1'b1;
            if (tl_b_valid_i && tl_b_ready_o) begin
				probe_pend_index_n = binv_index;
				probe_pend_tag_n   = binv_tag;
				probe_pend_param_n = tl_b_param_i;
				probe_pend_source_n = tl_b_source_i;
				
                if (resv_valid_q && ({binv_tag, binv_index} == resv_addr_q)) resv_valid_n = 1'b0;

				if (binv_hit) begin
					arr_way_sel = binv_way;
					probe_pend_way_n = binv_way;
					probe_pend_hit_n = 1'b1;
					
					if (arr_dirty_way[binv_way]) begin
						// Dirty: Send ProbeAckData
						beat_n = 3'd0;
						state_n = S_PROBE_RESP;
						probe_pend_has_data_n = 1'b1;
						// Invalidate line (downgrade to N)
						arr_write_en = 1'b1;
						arr_state_in = MESI_N;
						arr_be = 8'h00;
                        
                        // Pre-fetch Beat 0
                        arr_word_sel = 3'd0;
					end else begin
						// Clean: Send ProbeAck
						arr_write_en = 1'b1;
						arr_state_in = MESI_N;
						arr_be = 8'h00;
						state_n = S_PROBE_RESP;
						probe_pend_has_data_n = 1'b0;
					end
				end else begin
					// Miss: Send ProbeAck
					state_n = S_PROBE_RESP;
					probe_pend_has_data_n = 1'b0;
					probe_pend_hit_n = 1'b0;
				end
                return_state_n = S_PERM_REQ;
            end else begin
			// Issue AcquirePerm
			tl_a_valid_n = 1'b1;
			tl_a_opcode_n = A_ACQUIRE_PERM;
			tl_a_param_n = BtoT; 
			tl_a_size_n = 4'd6; // 64 bytes
			tl_a_source_n = 4'd0;
			tl_a_address_n = {pend_tag_q, pend_index_q, 6'b0};
			tl_a_mask_n = 8'hFF;
			
            if (tl_a_ready_i && tl_a_valid_o) begin
                tl_a_valid_n = 1'b0;
                state_n = S_REF_WAIT;
            end
            end
        end

		S_REF_WAIT: begin
            // Handle Probe
            tl_b_ready_n = 1'b1;
            if (tl_b_valid_i && tl_b_ready_o) begin
				probe_pend_index_n = binv_index;
				probe_pend_tag_n   = binv_tag;
				probe_pend_param_n = tl_b_param_i;
				probe_pend_source_n = tl_b_source_i;
				
                if (resv_valid_q && ({binv_tag, binv_index} == resv_addr_q)) resv_valid_n = 1'b0;

				if (binv_hit) begin
					arr_way_sel = binv_way;
					probe_pend_way_n = binv_way;
					probe_pend_hit_n = 1'b1;
					
					if (arr_dirty_way[binv_way]) begin
						// Dirty: Send ProbeAckData
						beat_n = 3'd0;
						state_n = S_PROBE_RESP;
						probe_pend_has_data_n = 1'b1;
						// Invalidate line (downgrade to N)
						arr_write_en = 1'b1;
						arr_state_in = MESI_N;
						arr_be = 8'h00;
                        
                        // Pre-fetch Beat 0
                        arr_word_sel = 3'd0;
					end else begin
						// Clean: Send ProbeAck
						arr_write_en = 1'b1;
						arr_state_in = MESI_N;
						arr_be = 8'h00;
						state_n = S_PROBE_RESP;
						probe_pend_has_data_n = 1'b0;
					end
				end else begin
					// Miss: Send ProbeAck
					state_n = S_PROBE_RESP;
					probe_pend_has_data_n = 1'b0;
					probe_pend_hit_n = 1'b0;
				end
                return_state_n = S_REF_WAIT;
            end else begin
			// Wait for GrantData or Grant
			tl_d_ready_n = 1'b1;
            if (tl_d_valid_i && tl_d_ready_o) begin
                if (tl_d_opcode_i == D_GRANT_DATA) begin
					// Write received beat into arrays
					arr_word_sel  = beat_q;
					arr_way_sel   = pend_victim_q;
					arr_write_en  = 1'b1;
					// Only set state to Valid (B or T) on the LAST beat
					arr_state_in  = (beat_q == 3'd7) ? (pend_is_store_q ? MESI_T : MESI_B) : MESI_N; 
					arr_be        = 8'hFF;
					arr_tag_in    = pend_tag_q;
					arr_wdata     = tl_d_data_i;
					
					pend_sink_n = tl_d_sink_i; // Capture sink for Ack

					if (beat_q == 3'd7) begin
						beat_n  = 3'd0;
						state_n = S_ACK;
					end else begin
						beat_n  = beat_q + 3'd1;
						state_n = S_REF_WAIT;
					end
				end else if (tl_d_opcode_i == D_GRANT) begin
					// Grant for AcquirePerm
					// Capture sink for Ack, then complete in S_RESP
					pend_sink_n = tl_d_sink_i;
					state_n = S_ACK; // Send GrantAck
				end
			end
            end
		end

		S_ACK: begin
			// Send GrantAck
			tl_e_valid_n = 1'b1;
			tl_e_sink_n = pend_sink_q;
			if (tl_e_ready_i && tl_e_valid_o) begin
				tl_e_valid_n = 1'b0;
				state_n = S_RESP;
			end
		end

		S_WB_REQ: begin
			// Send Release/ProbeAck Header
			tl_c_valid_n = 1'b1;
			tl_c_size_n = 4'd6; // 64 bytes
			tl_c_source_n = 4'd0; // ID 0 for L1
			
			if (pend_is_probe_q) begin
				// Probe Response
				tl_c_address_n = {pend_tag_q, pend_index_q, 6'b0};
				if (pend_has_data_q) begin
					tl_c_opcode_n = C_PROBE_ACK_DATA;
					tl_c_param_n = TtoN; // Dirty -> TtoN
				end else begin
					tl_c_opcode_n = C_PROBE_ACK;
					tl_c_param_n = pend_probe_hit_q ? BtoN : NtoN; // Clean Hit -> BtoN, Miss -> NtoN
				end
			end else begin
				// Voluntary Eviction
				tl_c_address_n = {pend_evict_tag_q, pend_index_q, 6'b0};
				if (pend_has_data_q) begin
					tl_c_opcode_n = C_RELEASE_DATA;
					tl_c_param_n = TtoN; // Dirty eviction
				end else begin
					tl_c_opcode_n = C_RELEASE;
					case (pend_evict_state_q)
						MESI_B:  tl_c_param_n = BtoN;
						MESI_T:  tl_c_param_n = TtoN;
						MESI_TT: tl_c_param_n = TtoN;
						default: tl_c_param_n = NtoN;
					endcase
				end
			end
			
			// Prepare data for NEXT beat if advancing, or CURRENT beat if stalling
            if (pend_has_data_q) begin
                arr_way_sel = pend_victim_q;
                arr_word_sel = beat_q;
                tl_c_data_n = arr_rdata_sel;
            end

            if (tl_c_ready_i && tl_c_valid_o) begin
                if (pend_has_data_q) begin
                    if (beat_q == 3'd7) begin
                        tl_c_valid_n = 1'b0;
						beat_n = 3'd0;
						if (pend_is_probe_q) begin
							state_n = S_IDLE; // ProbeAckData done (no Ack expected)
						end else begin
							state_n = S_WB_WAIT; // ReleaseData done (expect ReleaseAck)
						end
					end else begin
						beat_n = beat_q + 3'd1;
						state_n = S_WB_DATA;
					end
				end else begin
					// No data (ProbeAck or Release)
                    tl_c_valid_n = 1'b0;
					if (pend_is_probe_q) begin
						state_n = S_IDLE; // ProbeAck done
					end else begin
						state_n = S_WB_WAIT; // Release done (expect ReleaseAck)
					end
				end
			end else begin
			end
		end

		S_WB_DATA: begin
			// Send remaining data beats
			tl_c_valid_n = 1'b1;
			tl_c_size_n = 4'd6;
			tl_c_source_n = 4'd0;
			
			if (pend_is_probe_q) begin
				tl_c_opcode_n = C_PROBE_ACK_DATA;
				tl_c_param_n = TtoN;
				tl_c_address_n = {pend_tag_q, pend_index_q, 6'b0};
			end else begin
				tl_c_opcode_n = C_RELEASE_DATA;
				tl_c_param_n = TtoN;
				tl_c_address_n = {pend_evict_tag_q, pend_index_q, 6'b0};
			end

            arr_way_sel = pend_victim_q;
            arr_word_sel = beat_q;
            tl_c_data_n = arr_rdata_sel;

            if (tl_c_ready_i && tl_c_valid_o) begin
                if (beat_q == 3'd7) begin
                    tl_c_valid_n = 1'b0;
                    beat_n = 3'd0;
					if (pend_is_probe_q) begin
						state_n = S_IDLE;
					end else begin
						state_n = S_WB_WAIT;
					end
				end else begin
					beat_n = beat_q + 3'd1;
					state_n = S_WB_DATA;
				end
			end else begin
			end
		end

		S_WB_WAIT: begin
			// Wait for ReleaseAck
			tl_d_ready_n = 1'b1;
			if (tl_d_valid_i && tl_d_ready_o && (tl_d_opcode_i == D_RELEASE_ACK)) begin
				if (pend_is_probe_q) begin
					// Should not happen for ProbeAck
					state_n = S_IDLE;
				end else begin
					// Voluntary Eviction done. Now proceed to Refill.
					state_n = S_REF_REQ;
				end
			end
		end

        S_PROBE_RESP: begin
			// Send ProbeAck Header/Data
			tl_c_valid_n = 1'b1;
			tl_c_size_n = 4'd6;
			tl_c_source_n = 4'd0;
			
            tl_c_address_n = {probe_pend_tag_q, probe_pend_index_q, 6'b0};
            if (probe_pend_has_data_q) begin
                tl_c_opcode_n = C_PROBE_ACK_DATA;
                tl_c_param_n = TtoN;
            end else begin
                tl_c_opcode_n = C_PROBE_ACK;
                tl_c_param_n = probe_pend_hit_q ? BtoN : NtoN;
            end
			
			if (probe_pend_has_data_q) begin
				tl_c_data_n = arr_rdata_sel;
				arr_way_sel  = probe_pend_way_q;
                
                arr_word_sel = beat_q;
                
                if (tl_c_ready_i && tl_c_valid_o) begin
                    if (beat_q == 3'd7) begin
                        tl_c_valid_n = 1'b0;
                        beat_n = 3'd0;
						state_n = return_state_q;
					end else begin
						beat_n = beat_q + 3'd1;
					end
				end
			end else begin
				if (tl_c_ready_i && tl_c_valid_o) begin
                    tl_c_valid_n = 1'b0;
					state_n = return_state_q;
				end
			end
        end

		S_RESP: begin
			// Completion after full line refilled
			// index driven by arr_index_w wire
			arr_word_sel = pend_word_q;
			arr_way_sel  = pend_victim_q;
			plru_access_n   = 1'b1;
			plru_used_way_n = pend_victim_q;
            
            if (pend_is_lr_q) begin
				// LR miss completion: Return data from refilled line, set reservation
				rvalid_n     = 1'b1;
				rdata_n      = arr_rdata_sel;
				// Set reservation
				resv_valid_n = 1'b1;
				resv_addr_n  = {pend_tag_q, pend_index_q};
				resv_word_n  = pend_amo_word_q;
				pend_is_lr_n = 1'b0;
				state_n      = S_IDLE;
            end else if (pend_is_sc_q) begin
                // SC miss completion
                if (sc_success_q && resv_valid_q) begin // Re-check resv_valid_q
                    // Write data
					arr_write_en  = 1'b1;
					arr_state_in  = MESI_TT;
					arr_be        = pend_amo_word_q ? 8'h0F : 8'hFF;
					arr_tag_in    = pend_tag_q;
					arr_wdata     = pend_wdata_q;
					rvalid_n      = 1'b1;
					rdata_n       = 64'd0;  // Success
                end else begin
                    // Fail
					rvalid_n      = 1'b1;
					rdata_n       = 64'd1;  // Failure
                end
				// Clear reservation
				resv_valid_n = 1'b0;
				pend_is_sc_n = 1'b0;
                sc_success_n = 1'b0;
                pend_is_store_n = 1'b0;
				state_n      = S_IDLE;
            end else if (pend_is_amo_q) begin
				// AMO miss completion: latch old value from refilled line, then modify
				amo_old_value_n = arr_rdata_sel;
				state_n = S_AMO_MODIFY;
            end else if (pend_is_store_q) begin
				// Perform BE-merge store into freshly refilled line, set dirty, then complete write via gnt
				arr_write_en  = 1'b1;
				arr_state_in  = MESI_TT;
				arr_be        = pend_be_q;
				arr_tag_in    = pend_tag_q;
				arr_wdata     = pend_wdata_q;
				gnt_n         = 1'b1;   // complete the store
				rvalid_n      = 1'b0;
				state_n       = S_IDLE;
			end else begin
				// Read miss completion
				rvalid_n = 1'b1;
				rdata_n  = arr_rdata_sel;
				state_n  = S_IDLE;
			end
		end

        S_AMO_MODIFY: begin
			// Compute new value using atomic ALU (amo_new_value wire already computed)
			// Transition to write state
			state_n = S_AMO_WRITE;
		end

		S_AMO_WRITE: begin
			// Write new value back to cache array
			// index driven by arr_index_w wire (uses pend_index_q)
			arr_word_sel  = pend_word_q;
			arr_way_sel   = pend_victim_q;
			arr_write_en  = 1'b1;
			arr_state_in  = MESI_TT;
			arr_be        = (pend_amo_word_q) ? 8'h0F : 8'hFF;
			arr_tag_in    = pend_tag_q;
			arr_wdata     = amo_new_value;
			plru_access_n   = 1'b1;
			plru_used_way_n = pend_victim_q;
			// Return old value to CPU
			rvalid_n = 1'b1;
			rdata_n  = amo_old_value_q;
			// Clear AMO pending flag
			pend_is_amo_n = 1'b0;
			state_n  = S_IDLE;
		end

		default: begin
			state_n = S_IDLE;
		end
		endcase
	end

	// Sequential state
	always @(posedge clk_i or negedge rst_ni) begin
		if (!rst_ni) begin
			state <= S_IDLE;
			beat_q <= 3'd0;
			pend_index_q <= {INDEX_W{1'b0}};
			pend_tag_q <= {TAG_W{1'b0}};
			pend_word_q <= {WORD_OFF_W{1'b0}};
			pend_victim_q <= 3'd0;
			rdata_beat_q <= 64'd0;
			pend_is_store_q <= 1'b0;
			pend_wdata_q <= 64'd0;
			pend_be_q <= 8'd0;
			pend_evict_tag_q <= {TAG_W{1'b0}};
			pend_evict_state_q <= 2'd0;
			pend_sink_q <= 4'd0;
			pend_is_probe_q <= 1'b0;
			pend_probe_param_q <= 3'd0;
			pend_probe_source_q <= 4'd0;
			pend_has_data_q <= 1'b0;
			pend_probe_hit_q <= 1'b0;
            
            return_state_q <= S_IDLE;
            probe_pend_index_q <= 0;
            probe_pend_tag_q <= 0;
            probe_pend_param_q <= 0;
            probe_pend_source_q <= 0;
            probe_pend_has_data_q <= 0;
            probe_pend_hit_q <= 0;
            probe_pend_way_q <= 0;
            
            // Atomic registers
			pend_is_amo_q <= 1'b0;
			pend_amo_op_q <= 5'd0;
			pend_amo_word_q <= 1'b0;
			amo_old_value_q <= 64'd0;
			// LR/SC registers
			resv_valid_q <= 1'b0;
			resv_addr_q <= 52'd0;
			resv_word_q <= 1'b0;
			pend_is_lr_q <= 1'b0;
			pend_is_sc_q <= 1'b0;
			sc_success_q <= 1'b0;
		end else begin
            // Debug prints removed

			state <= state_n;
			beat_q <= beat_n;
			pend_index_q <= pend_index_n;
			pend_tag_q <= pend_tag_n;
			pend_word_q <= pend_word_n;
			pend_victim_q <= pend_victim_n;
			rdata_beat_q <= rdata_beat_n;
			pend_is_store_q <= pend_is_store_n;
			pend_wdata_q <= pend_wdata_n;
			pend_be_q <= pend_be_n;
			pend_evict_tag_q <= pend_evict_tag_n;
			pend_evict_state_q <= pend_evict_state_n;
			pend_sink_q <= pend_sink_n;
			pend_is_probe_q <= pend_is_probe_n;
			pend_probe_param_q <= pend_probe_param_n;
			pend_probe_source_q <= pend_probe_source_n;
			pend_has_data_q <= pend_has_data_n;
			pend_probe_hit_q <= pend_probe_hit_n;
            
            return_state_q <= return_state_n;
            probe_pend_index_q <= probe_pend_index_n;
            probe_pend_tag_q <= probe_pend_tag_n;
            probe_pend_param_q <= probe_pend_param_n;
            probe_pend_source_q <= probe_pend_source_n;
            probe_pend_has_data_q <= probe_pend_has_data_n;
            probe_pend_hit_q <= probe_pend_hit_n;
            probe_pend_way_q <= probe_pend_way_n;
            
            // Atomic registers
			pend_is_amo_q <= pend_is_amo_n;
			pend_amo_op_q <= pend_amo_op_n;
			pend_amo_word_q <= pend_amo_word_n;
			amo_old_value_q <= amo_old_value_n;
			// LR/SC registers
			resv_valid_q <= resv_valid_n;
			resv_addr_q <= resv_addr_n;
			resv_word_q <= resv_word_n;
			pend_is_lr_q <= pend_is_lr_n;
			pend_is_sc_q <= pend_is_sc_n;
			sc_success_q <= sc_success_n;
		end
	end

	// Output registers
    always @(posedge clk_i) begin
        if (tl_d_valid_i && !tl_d_ready_o) begin
             // Debug print removed
        end
    end

	always @(posedge clk_i or negedge rst_ni) begin
		if (!rst_ni) begin
			gnt_o    <= 1'b0;
			rvalid_o <= 1'b0;
			rdata_o  <= 64'd0;

			tl_a_valid_o <= 1'b0;
			tl_a_opcode_o <= 3'b0;
			tl_a_param_o <= 3'b0;
			tl_a_size_o <= 4'b0;
			tl_a_source_o <= 4'b0;
			tl_a_address_o <= 64'b0;
			tl_a_mask_o <= 8'b0;
			tl_a_data_o <= 64'b0;
			tl_a_corrupt_o <= 1'b0;

			tl_b_ready_o <= 1'b0;

			tl_c_valid_o <= 1'b0;
			tl_c_opcode_o <= 3'b0;
			tl_c_param_o <= 3'b0;
			tl_c_size_o <= 4'b0;
			tl_c_source_o <= 4'b0;
			tl_c_address_o <= 64'b0;
			tl_c_data_o <= 64'b0;
			tl_c_corrupt_o <= 1'b0;

			tl_d_ready_o <= 1'b0;

			tl_e_valid_o <= 1'b0;
			tl_e_sink_o <= 4'b0;
		end else begin
			gnt_o    <= gnt_n;
			rvalid_o <= rvalid_n;
			rdata_o  <= rdata_n;

			tl_a_valid_o <= tl_a_valid_n;
			tl_a_opcode_o <= tl_a_opcode_n;
			tl_a_param_o <= tl_a_param_n;
			tl_a_size_o <= tl_a_size_n;
			tl_a_source_o <= tl_a_source_n;
			tl_a_address_o <= tl_a_address_n;
			tl_a_mask_o <= tl_a_mask_n;
			tl_a_data_o <= tl_a_data_n;
			tl_a_corrupt_o <= tl_a_corrupt_n;

			tl_b_ready_o <= tl_b_ready_n;

			tl_c_valid_o <= tl_c_valid_n;
			tl_c_opcode_o <= tl_c_opcode_n;
			tl_c_param_o <= tl_c_param_n;
			tl_c_size_o <= tl_c_size_n;
			tl_c_source_o <= tl_c_source_n;
			tl_c_address_o <= tl_c_address_n;
			tl_c_data_o <= tl_c_data_n;
			tl_c_corrupt_o <= tl_c_corrupt_n;

			tl_d_ready_o <= tl_d_ready_n;

			tl_e_valid_o <= tl_e_valid_n;
			tl_e_sink_o <= tl_e_sink_n;
		end
	end

	// PLRU update: drive access pulse and used way
	// We reuse the existing instance; tie access_i to registered pulse
	// Note: victim selection uses current index; update uses pending index via access pulse timing
	always @(posedge clk_i or negedge rst_ni) begin
		if (!rst_ni) begin
			plru_access_q   <= 1'b0;
			plru_used_way_q <= 3'd0;
		end else begin
			plru_access_q   <= plru_access_n;
			plru_used_way_q <= plru_used_way_n;
		end
	end

    // ========================================================================
    // Backdoor Handler
    // ========================================================================
    // Note: Writing directly into sub-module arrays. This relies on hierarchical
    // access which is valid for verification.
    
    always @(posedge clk_i) begin
        if (bkdr_valid_i && (bkdr_core_id_i == CORE_ID[3:0])) begin
             case (bkdr_array_id_i)
                2'd0: u_arrays.state_q[bkdr_way_i][bkdr_set_i] = bkdr_data_i[1:0]; 
                2'd1: u_arrays.tag_q[bkdr_way_i][bkdr_set_i] = bkdr_data_i[TAG_W-1:0];
                2'd2: u_arrays.data_q[bkdr_way_i][bkdr_set_i] = bkdr_data_i;
            endcase
        end
    end

endmodule
