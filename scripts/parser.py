PERIOD_NS   = 6.667
lut         = None
flip_flop   = None
bram        = None
dsp         = None
fmax_mhz    = None

with open("build/util.rpt", "r") as util:
    for line in util:
        if "|" not in line:
            continue
        if "Slice LUTs" in line:    
            parts = line.split("|")
            lut = int(parts[2].strip())
        if "Register as Flip Flop" in line:
            parts = line.split("|")
            flip_flop = int(parts[2].strip())
        if "Block RAM Tile" in line:
            parts = line.split("|")
            bram = int(parts[2].strip())
        if "DSPs" in line:
            parts = line.split("|")
            dsp = int(parts[2].strip())

with open("build/timing.rpt", "r") as timing:
    for line in timing: 
        if "Worst Slack" in line:
            parts = line.split()
            wns = float(parts[7].strip().rstrip("ns,"))   # '-0.531ns,' -> -0.531
            fmax_mhz  = 1000.0 / (PERIOD_NS - wns)
            break
