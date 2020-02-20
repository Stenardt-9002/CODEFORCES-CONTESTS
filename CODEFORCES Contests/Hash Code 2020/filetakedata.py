import sys

if len(sys.argv) > 1:
    inFile = sys.argv[1]

    if len(sys.argv) > 2:
        outFile = sys.argv[2]

with open(inFile, 'r') as i:
    lines = i.readlines()

processedLines = None
print(lines)
try:
    # with open(outFile, 'w') as o:
    #     for line in processedLines:
    #         o.write(line)
    o = open(outFile,'r')

except:
    print("Unexpected error:", sys.exc_info()[0])
    raise
