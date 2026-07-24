module pe (
    input  logic        clk,
    input  logic        reset,
    
    // Control Signal
    input  logic        load_weight, 
    
    input  logic [7:0]  a_in,
    input  logic [31:0] sum_in,
    input  logic [7:0]  weight_in,
    
    output logic [7:0]  a_out,
    output logic [31:0] sum_out
);


    logic [7:0] weight_reg;
    
    // Weight Loader
    always_ff @(posedge clk) begin
        if (reset) begin
            weight_reg <= 8'b0;
        end
        else if (load_weight) begin
            weight_reg <= weight_in;
        end
    end

    // MAC Math
    logic [31:0] next_sum;
    always_comb begin
        next_sum = (a_in * weight_reg) + sum_in;
    end 



endmodule