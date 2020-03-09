testcases = int(input())

while testcases>0:
    testcases = testcases-1
    lenthar = int(input())
    int_put_lit = list(map(int,input().split()))
    new_lit = []
    for i in range(lenthar):
        new_lit.append(i-int_put_lit[i])

    # print(int_put_lit)
    while True:
        aset = set(new_lit)
        if(len(aset)==len(new_lit)):
            break
        else:
            # temp_lit = []
            # temp_lit = new_lit[1:]
            # temp_lit.append(new_lit[0])
            # new_lit = temp_lit[:]
            temp_liot2 =  int_put_lit[1:]
            temp_liot2.append(int_put_lit[0])
            int_put_lit = temp_liot2[:]
            new_lit = []
            for i in range(lenthar):
                new_lit.append(i-int_put_lit[i])
            # pass

    print(*int_put_lit)
    pass
