module pe #(
    parameter int DATA_W = 8,   // Width of A and W 
    parameter int SUM_W = 32    // Width of accumulated sum

)   (
    input  logic        clk,
    input  logic        reset,
    
    // Control Signal
    input  logic        load_weight, 
    
    input  logic [DATA_W-1:0]  a_in,
    input  logic [SUM_W-1:0] sum_in,
    input  logic [DATA_W-1:0]  weight_in,
    
    output logic [DATA_W-1:0]  weight_out,
    output logic [DATA_W-1:0]  a_out,
    output logic [SUM_W-1:0] sum_out
);


    logic [DATA_W-1:0] weight_reg;
    
    // Weight Loader
    always_ff @(posedge clk) begin
        if (reset) begin
            weight_reg <= DATA_W'b0;
        end
        else if (load_weight) begin
            weight_reg <= weight_in;
        end
    end

    // MAC Math
    logic [31:0] next_sum;
        assign next_sum = ($signed(a_in) * $signed(weight_reg)) + $signed(sum_in);

    // Systolic Pipeline
    always_ff @(posedge clk) begin
        if (reset) begin
            a_out   <= DATA_W'b0;
            sum_out <= SUM_W'b0;
        end 
        else begin 
            a_out <= a_in;
            sum_out <= next_sum;
        end
    end
    
    assign weight_out = weight_reg;


endmodule
