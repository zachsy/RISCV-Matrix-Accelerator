module array_os #(
    parameter int N = 4,        // Size of array
    parameter int DATA_W = 8,   // Width of A and W 
    parameter int SUM_W = 32    // Width of accumulated sum. SUM_W ≥ 2 * DATA_W + ceil(log2(N))

) (
    input  logic            clk,
    input  logic            reset,
    input  logic            start,  
    
    // Matrix A Inputs (Flowing in from the left)
    input  logic [DATA_W-1:0]       a_in      [N],    
    
    // Matrix W Inputs (Flowing in from the top)  
    input  logic [DATA_W-1:0]       w_in [N], 
    
    // Outputs (Flowing out the right and bottom)
    output logic [DATA_W-1:0]       a_out     [N],      // Passed out the right side
    output logic [DATA_W-1:0]       w_out     [N],      // Passed out the bottom
    output logic [SUM_W-1:0]        sum_out   [N][N],       // The final matrix answers out the bottom of each PE
);
    logic load_wire [N][N]; 
    logic [DATA_W-1:0] a_skew_reg [N][N - 1];
    always_ff @(posedge clk) begin
        if (reset) begin
            for (int r = 0; r < N; r++) begin
                for (int c = 0; c < N - 1; c++) begin
                    a_skew_reg[r][c] <= 0;
                end
            end
        end
        else begin
            for (int r = 0; r < N; r++) begin
                a_skew_reg[r][0] <= a_in[r];
                for (int s = 1; s < N; s++) begin
                    if (s < r) begin
                        a_skew_reg[r][s] <= a_skew_reg[r][s-1];
                    end
                end
            end
        end
    end

    logic [DATA_W-1:0] w_skew_reg [N - 1][N];
    always_ff @(posedge clk) begin
        if (reset) begin
            for (int c = 0; c < N; c++) begin
                for (int r = 0; r < N - 1; r++) begin
                    w_skew_reg[r][c] <= 0;
                end
            end
        end
        else begin
            for (int c = 0; c < N; c++) begin
                w_skew_reg[0][c] <= w_in[c];
                for (int s = 1; s < N; s++) begin
                    if (s < c) begin
                        w_skew_reg[s][c] <= w_skew_reg[s-1][c];
                    end
                end
            end
        end
    end


    logic [DATA_W-1:0]      a_wire      [N][N + 1];
    logic [DATA_W-1:0]      w_wire      [N + 1][N];

    assign a_wire[0][0] = a_in[0];
    assign w_wire[0][0] = w_in[0];

    genvar r, c;
    generate
        for(r = 0; r < N; r++) begin
            if(r > 0) begin : gen_skew_tap
                assign a_wire[r][0] = a_skew_reg[r][r-1];
            end
            assign a_out[r] = a_wire[r][N];
        end
        for (c = 0; c < N; c++) begin
            if(c > 0) begin : gen_skew_tap
                assign w_wire[0][c] = w_skew_reg[c-1][c];
            end
            assign w_out[c] = w_wire[N][c];
        end

        for (r = 0; r < N; r++) begin : row
            for (c = 0; c < N; c++) begin : col
                pe_os pe_os_inst (
                    .clk            (clk),
                    .reset          (reset),
                    .load_top_in    ((r==0) ? 0 : load_wire[r-1][c]),
                    .load_left_in   ((c==0) ? ((r==0) ? start : 0) : load_wire[r][c-1]), 
                    .a_in           (a_wire[r][c]),
                    .a_out          (a_wire[r][c + 1]),
                    .w_in           (w_wire[r][c]),
                    .w_out          (w_wire[r + 1][c]),
                    .load_out       (load_wire[r][c]),
                    .sum_out        (sum_out[r][c])
                );
            end
        end
    endgenerate

endmodule
