import math
testcases = int(input())
for i in range(testcases):
    vaulen = int(input())
    for j1 in range(2,vaulen):
        x1 = vaulen/(math.pow(2,j1)-1)
        x2 = vaulen//(math.pow(2,j1)-1)
        # print(x1)
        # print(x2)
        # print(j1)
        if x1==x2:
            print((int)(x1))
            break
            pass
        pass

    pass
