module array_ws #(
    parameter int N = 4,        // Size of array
    parameter int DATA_W = 8,   // Width of A and W 
    parameter int SUM_W = 32    // Width of accumulated sum. SUM_W ≥ 2 * DATA_W + ceil(log2(N))

) (
    input  logic               clk,
    input  logic               reset,
    input  logic               load_weight,
    
    // Matrix A Inputs (Flowing in from the left)
    input  logic [DATA_W-1:0]       a_in      [N],    
    
    // Matrix W Inputs / Partial Sums (Flowing in from the top)
    input  logic [SUM_W-1:0]        sum_in    [N],  
    input  logic [DATA_W-1:0]       weight_in [N], 
    
    // Outputs (Flowing out the right and bottom)
    output logic [DATA_W-1:0]       a_out     [N],      // Passed out the right side
    output logic [SUM_W-1:0]        sum_out   [N]       // The final matrix answers out the bottom
);

    logic [DATA_W-1:0] skew_reg [N][N - 1];
    always_ff @(posedge clk) begin
        if (reset) begin
            for (int r = 0; r < N; r++) begin
                for (int c = 0; c < N - 1; c++) begin
                    skew_reg[r][c] <= 0;
                end
            end
        end
        else begin
            for (int r = 0; r < N; r++) begin
                skew_reg[r][0] <= a_in[r];
                for (int s = 1; s < N; s++) begin
                    if (s < r) begin
                        skew_reg[r][s] <= skew_reg[r][s-1];
                    end
                end
            end
        end
    end


    logic [DATA_W-1:0]     a_wire      [N][N + 1];
    logic [SUM_W-1:0]    sum_wire    [N + 1][N];
    logic [DATA_W-1:0]     weight_wire [N + 1][N];

    assign a_wire[0][0] = a_in[0];
    genvar r, c;
    generate
        for(r = 0; r < N; r++) begin
            if(r > 0) begin : gen_skew_tap
                assign a_wire[r][0] = skew_reg[r][r-1];
            end
            assign a_out[r] = a_wire[r][N];

        end
        for (c = 0; c < N; c++) begin
            assign sum_wire[0][c] = sum_in[c];
            assign sum_out[c] = sum_wire[N][c];
            assign weight_wire[0][c] = weight_in[c];
        end

        for (r = 0; r < N; r++) begin : row
            for (c = 0; c < N; c++) begin : col
                pe pe_inst (
                    .clk         (clk),
                    .reset       (reset),
                    .load_weight (load_weight),
                    .weight_in   (weight_wire[r][c]),
                    .weight_out  (weight_wire[r + 1][c]),
                    .a_in        (a_wire[r][c]),
                    .a_out       (a_wire[r][c + 1]),
                    .sum_in      (sum_wire[r][c]),
                    .sum_out     (sum_wire[r + 1][c])
                );
            end
        end
    endgenerate

endmodule
