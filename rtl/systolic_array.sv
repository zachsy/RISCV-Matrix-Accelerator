module systolic_array_4x4 #(
    parameter int N = 4
) (
    input  logic               clk,
    input  logic               reset,
    input  logic               load_weight,
    
    // Matrix A Inputs (Flowing in from the left)
    input  logic [7:0]    a_in      [N],    
    
    // Matrix W Inputs / Partial Sums (Flowing in from the top)
    input  logic [31:0]   sum_in    [N],  
    input  logic [7:0]    weight_in [N], 
    
    // Outputs (Flowing out the right and bottom)
    output logic [7:0]    a_out     [N],   // Passed out the right side
    output logic [31:0]   sum_out   [N]  // The final matrix answers out the bottom
);
    logic [7:0] a_wire      [N][N + 1];
    logic [31:0] sum_wire    [N + 1][N];

    genvar r, c;
    generate
        for(r = 0; r < N; r++) begin
            assign a_wire[r][0] = a_in[r];
        end
        for (c = 0; c < N; c++) begin
            assign sum_wire[0][c] = sum_in[c];
            assign sum_out[c] = sum_wire[N][c];
        end
    endgenerate