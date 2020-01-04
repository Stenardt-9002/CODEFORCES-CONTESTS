def shtfuct(arr):
    min = arr[0]
    for i in range(1,len(arr)):
        # print(arr[i])
        # print(min)
        # print()
        if arr[i]>min:
            return True
        else:
            min = arr[i]
    return False

# print(shtfuct([2,0,2,0]))

n = int(input())

lit1 = []
contmaxmin = []
ascentcont = []
for i in range(n):
    s = list(map(int,input().split(" ")))
    s = s[1:]
    lit1.append(s)
    max1 = max(s)
    min1 = min(s)
    ascntvaluecont = shtfuct(s)
    contmaxmin.append([max1,min1])
    ascentcont.append(ascntvaluecont)


ans = 0

for i in range(n):
    for j in range(n):
        if(contmaxmin[i][1]<contmaxmin[j][0] or ascentcont[i]==True or ascentcont[j]==True):
            ans+=1
        # elif (ascentcont[i]==True or ascentcont[j]==True ):
        #     ans+=1

print(ans)
