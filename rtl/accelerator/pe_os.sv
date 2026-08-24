module pe_os #(
    parameter int DATA_W,   // Width of A and W 
    parameter int SUM_W     // Width of accumulated sum

)   (
    input  logic        clk,
    input  logic        reset,
    
    // Control Signal
    input  logic        load_top_in,
    input  logic        load_left_in, 

    input  logic [DATA_W-1:0]   a_in,
    input  logic [DATA_W-1:0]   w_in,
    
    output logic        load_out,

    output logic [DATA_W-1:0]   w_out,
    output logic [DATA_W-1:0]   a_out,
    output logic [SUM_W-1:0]    sum_out
);
    logic load;
    assign load = load_top_in | load_left_in;

    // Systolic Pipeline
    always_ff @(posedge clk) begin
        if (reset) begin
            a_out       <= '0;
            w_out       <= '0;
            load_out    <= '0;
            sum_out     <= '0;
        end 
        else begin 
            a_out       <= a_in;
            w_out       <= w_in;
            load_out    <= load;
            sum_out     <= load ? ($signed(a_in) * $signed(w_in)) : ($signed(a_in) * $signed(w_in)) + $signed(sum_out);

        end
    end


endmodule
