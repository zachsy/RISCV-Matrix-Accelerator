lut         = None
flip_flop   = None
bram        = None
dsp         = None
fmax        = None

with open("build/util.rpt", "r") as util:
    for line in util:
        if "Slice LUTs" in line:    
            parts = line.split("|")
            lut = int(parts[2].strip())
        if "Register as Flip Flop" in line:
            parts = line.split("|")
            flip_flop = int(parts[2].strip())
        if "Block RAM Tile" in line:
            parts = line.split("|")
            bram = int(parts[2].strip())
            break
        if "DSPs" in line:
            parts = line.split("|")
            dsp = int(parts[2].strip())
            break

print (lut)
print (flip_flop)
print (bram)
print (dsp)

with open("build/timing.rpt", "r") as timing:
    for line in timing: 
        if "Worst Slack" in line:
            parts = line.split()
            wns = str(parts[7].strip())
            print(wns)
            break
