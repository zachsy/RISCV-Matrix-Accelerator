module systolic_array_4x4 (
    input  logic               clk,
    input  logic               reset,
    input  logic               load_weight,
    
    // Matrix A Inputs (Flowing in from the left)
    // 4 rows, each containing an 8-bit number
    input  logic [3:0][7:0]    a_in,    
    
    // Matrix W Inputs / Partial Sums (Flowing in from the top)
    // 4 columns, each containing a 32-bit number
    input  logic [3:0][31:0]   sum_in,  
    input  logic [3:0][7:0]    weight_in, 
    
    // Outputs (Flowing out the right and bottom)
    output logic [3:0][7:0]    a_out,   // Passed out the right side
    output logic [3:0][31:0]   sum_out  // The final matrix answers out the bottom
);