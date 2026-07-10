module tb_alu();
    reg a, b, alu_control; 
    wire result, zero;

    alu alu_test (a, b, alu_control, result, zero);

    initial
        begin
        
        end

    initial
        begin
            //vardiation(fixed values/loops)
        end
    
    initial
        begin   
            $monitor("",);
            $finish
        end
endmodule