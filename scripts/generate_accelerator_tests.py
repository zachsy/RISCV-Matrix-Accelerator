import numpy as np


arraySize = 4 # Changed depending on size of array. Should match 'int N' in systolic_array.sv and tb_systolic_array.sv
num_tests = 1000 # Number of random tests not including edge case testing.

with open("sim/A.tv", "w") as fa, open("sim/W.tv", "w") as fw, open("sim/C.tv", "w") as fc:
    total_tests = 0

    # Identity Matrix:
    a = w = c = np.identity(arraySize, dtype = int)
    for val in a.flatten():
        fa.write(f"{val & 0xFF:02x} ")
    fa.write("\n")
    for val in w.flatten():
        fw.write(f"{val & 0xFF:02x} ")
    fw.write("\n")
    for val in c.flatten():
        fc.write(f"{val & 0xFFFFFFFF:08x} ")
    fc.write("\n")
    total_tests += 1


    # Zero Matrix, One Matrix, Min and Max Matrix: 
    test_values = [-128, 0, 1, 127]

    for test_val in test_values:
        a = w = np.full((arraySize, arraySize), test_val)

        c = a @ w

        for val in a.flatten():
            fa.write(f"{val & 0xFF:02x} ")
        fa.write("\n")
        for val in w.flatten():
            fw.write(f"{val & 0xFF:02x} ")
        fw.write("\n")
        for val in c.flatten():
            fc.write(f"{val & 0xFFFFFFFF:08x} ")
        fc.write("\n")
        total_tests += 1
    

    # Random Testing:     
    for _ in range(num_tests):
        a = np.random.randint(-128, 128, (arraySize, arraySize))
        w = np.random.randint(-128, 128, (arraySize, arraySize))

        c = a @ w

        for val in a.flatten():
            fa.write(f"{val & 0xFF:02x} ")
        fa.write("\n")
        for val in w.flatten():
            fw.write(f"{val & 0xFF:02x} ")
        fw.write("\n")
        for val in c.flatten():
            fc.write(f"{val & 0xFFFFFFFF:08x} ")
        fc.write("\n")

        total_tests += 1

print(f"Successfully generated {total_tests} matrices!")
