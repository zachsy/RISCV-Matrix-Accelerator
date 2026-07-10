import random

with open("alu_tests.tv", "w") as file:
    
    for _ in range(50):
        a = random.randint(0, 0xFFFFFFFF)
        b = random.randint(0, 0xFFFFFFFF)
        
        op = 0
        
        exp_res = (a + b) & 0xFFFFFFFF
        
        exp_z = 1 if exp_res == 0 else 0
        
        row = f"{a:08x}_{b:08x}_{op:1x}_{exp_res:08x}_{exp_z:1x}\n"
        file.write(row)

print("Generated 50 test vectors for a + b in alu_tests.tv!")