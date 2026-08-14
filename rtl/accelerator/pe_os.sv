module pe_os #(
    parameter int DATA_W = 8,   // Width of A and W 
    parameter int SUM_W = 32    // Width of accumulated sum

)   (
    input  logic        clk,
    input  logic        reset,
    
    // Control Signal
    input  logic        load, 

    input  logic [DATA_W-1:0]   a_in,
    input  logic [DATA_W-1:0]   w_in,
    
    output logic        load_out,

    output logic [DATA_W-1:0]   w_out,
    output logic [DATA_W-1:0]   a_out,
    output logic [SUM_W-1:0]    sum
);
 
    // Systolic Pipeline
    always_ff @(posedge clk) begin
        if (reset) begin
            a_out   <= '0;
            w_out   <= '0;
            sum     <= '0;
        end 
        else begin 
            a_out       <= a_in;
            w_out       <= w_in;
            sum         <= load ? ($signed(a_in) * $signed(w_in)) : ($signed(a_in) * $signed(w_in)) + $signed(sum);
            load_out    <= load;
        end
    end


endmodule
