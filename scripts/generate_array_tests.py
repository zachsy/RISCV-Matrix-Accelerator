import numpy as np


arraySize = 4
num_tests = 1

with open("systolic_array_tests.tv", "w") as file:
    total_tests = 0


    #Random Testing:     
    for _ in range(num_tests):
        a = np.random.randint(-128, 128, (arraySize, arraySize))
        w = np.random.randint(-128, 128, (arraySize, arraySize))

        c = a @ w

        a_hex = " ".join([f"{(val & 0xFF):02x}" for val in a.flatten()])
        w_hex = " ".join([f"{(val & 0xFF):02x}" for val in w.flatten()])

        c_hex = " ".join([f"{(val & 0xFF):08x}" for val in c.flatten()])

        file.write(f"{a_hex} {w_hex} {c_hex}\n")
        total_tests += 1

print(f"Successfully generated {total_tests} signed test vectors!")
