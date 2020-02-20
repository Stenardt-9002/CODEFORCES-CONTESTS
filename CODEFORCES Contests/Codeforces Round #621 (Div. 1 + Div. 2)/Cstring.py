strin = input()
dic_t = {}
temstring = ""
jump = len(strin)

for i in range(0,len(strin)):

    # jump = jump+1
    for j in range(1,jump):
        if i+(j*jump)>=len(strin):
            break
        temstring = temstring+strin[i+(j*jump)]
        if temstring not in dic_t.keys():
            dic_t[temstring] = 1
        else:
            dic_t[temstring]+=1
# ans = max(dic_t.values())
print(dic_t)
# print(ans)
