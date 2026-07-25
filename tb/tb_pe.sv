module tb_pe();
    logic        clk, reset, load_weight;
    logic [7:0]  a_in, weight_in;
    logic [31:0] sum_in;
    logic [7:0]  a_out;
    logic [31:0] sum_out;

    pe dut (
        .clk(clk),
        .reset(reset),
        .load_weight(load_weight),
        .a_in(a_in),
        .sum_in(sum_in),
        .weight_in(weight_in),
        .a_out(a_out),
        .sum_out(sum_out)
    );

    // Clock
    always begin
        clk = 1; #5; clk = 0; #5;
    end