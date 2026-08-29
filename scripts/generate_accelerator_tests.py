import numpy as np

# KNOBS
arraySize = 4                                       # Changed depending on size of array. Should match 'int N' in systolic_array.sv and tb_systolic_array.sv
num_tests = 1000                                    # Number of random tests not including edge case testing.
data_W    = 8                                       # Bit width of A and W elements (e.g. INT4=4, INT8=8, INT16=16)
sum_W = 2*data_W + (arraySize - 1).bit_length()     # Bit width of accumulated C elements (must be >= 2*DATA_W + ceil(log2(N)))

def fileWrite(mat, file, bitWidth):
    for val in mat.flatten():
        hexWidth = (bitWidth + 3) // 4
        mask = (1 << bitWidth) - 1
        file.write(f"{val & mask:0{hexWidth}x} ")
    file.write("\n")
    return

with open("sim/A.tv", "w") as fa, open("sim/W.tv", "w") as fw, open("sim/C.tv", "w") as fc:
    total_tests = 0

    # Identity Matrix:
    a = np.identity(arraySize, dtype = int)
    w = np.identity(arraySize, dtype = int)
    c = np.identity(arraySize, dtype = int)

    fileWrite(a, fa, data_W)
    fileWrite(w, fw, data_W)
    fileWrite(c, fc, sum_W)

    total_tests += 1


    # Zero Matrix, One Matrix, Min and Max Matrix: 
    test_values = [-(2**(data_W-1)), 0, 1, ((2**(data_W-1)) - 1)]

    for test_val in test_values:
        a = np.full((arraySize, arraySize), test_val)
        w = np.full((arraySize, arraySize), test_val)
        c = a @ w

        fileWrite(a, fa, data_W)
        fileWrite(w, fw, data_W)
        fileWrite(c, fc, sum_W)

        total_tests += 1
    

    # Random Testing:     
    for _ in range(num_tests):
        a = np.random.randint(-(2**(data_W-1)), (2**(data_W-1)), (arraySize, arraySize))
        w = np.random.randint(-(2**(data_W-1)), (2**(data_W-1)), (arraySize, arraySize))

        c = a @ w

        fileWrite(a, fa, data_W)
        fileWrite(w, fw, data_W)
        fileWrite(c, fc, sum_W)

        total_tests += 1

print(f"Successfully generated {total_tests} matrices!")
