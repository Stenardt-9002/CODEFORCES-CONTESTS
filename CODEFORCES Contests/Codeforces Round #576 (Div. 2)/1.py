import operator
n,m = map(int,input().split())
lit = []
for i in range(n):
    x = list(input())
    lit.append(x)
# print(lit)
wait = list(map(int,input().split()))
# print(wait)

dict1 = {'A':0,'B':0,'C':0,'D':0,'E':0}
count = 0
for i in range(m):
    for j in range(n):
        dict1[lit[j][i]]+=1
    count+=max(dict1.values())*wait[i]
    dict1 = {'A':0,'B':0,'C':0,'D':0,'E':0}

print(count)

