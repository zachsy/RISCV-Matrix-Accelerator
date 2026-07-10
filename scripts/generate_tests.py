import random

# Helper function to recognized signed numbers (Two's Complement)
def to_signed_32(val):
    if val & 0x80000000:
        return val - 0x100000000
    return val


opcodes = {
    0b0000: lambda a, b: (a + b) & 0xFFFFFFFF,                                 # ADD
    0b1000: lambda a, b: (a - b) & 0xFFFFFFFF,                                 # SUB
    0b0111: lambda a, b: (a & b) & 0xFFFFFFFF,                                 # AND
    0b0110: lambda a, b: (a | b) & 0xFFFFFFFF,                                 # OR
    0b0100: lambda a, b: (a ^ b) & 0xFFFFFFFF,                                 # XOR
    0b0001: lambda a, b: (a << (b & 0x1F)) & 0xFFFFFFFF,                       # SLL 
    0b0101: lambda a, b: (a >> (b & 0x1F)) & 0xFFFFFFFF,                       # SRL
    0b1101: lambda a, b: (to_signed_32(a) >> (b & 0x1F)) & 0xFFFFFFFF,         # SRA
    0b0010: lambda a, b: 1 if to_signed_32(a) < to_signed_32(b) else 0,        # SLT
    0b0011: lambda a, b: 1 if a < b else 0                                     # SLTU
}
edge_cases = [
    0x00000000,  
    0x00000001,  
    0xFFFFFFFF,  
    0x7FFFFFFF,  # Maximum Positive Signed 32-bit Integer
    0x80000000,  
]

with open("alu_tests.tv", "w") as file:
    available_ops = list(opcodes.keys())
    total_vectors = 0
    
    # Testing Edge Cases
    for op in available_ops:
        for a in edge_cases:
            for b in edge_cases:
                exp_res = opcodes[op](a, b)
                exp_z = 1 if exp_res == 0 else 0
                row = f"{a:08x}_{b:08x}_{op:1x}_{exp_res:08x}_{exp_z:1x}\n"
                file.write(row)
                total_vectors += 1

    # Random Testing
    for _ in range(1000):
        a = random.randint(0, 0xFFFFFFFF)
        b = random.randint(0, 0xFFFFFFFF)
        op = random.choice(available_ops)
        
        exp_res = opcodes[op](a, b)
        exp_z = 1 if exp_res == 0 else 0
        row = f"{a:08x}_{b:08x}_{op:1x}_{exp_res:08x}_{exp_z:1x}\n"
        file.write(row)
        total_vectors += 1

print(f"Generated {total_vectors} vectors! (Includes complete edge-case matrix + random tests)")