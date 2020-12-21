x,y,z = map(int,input().split())
ans1 = (x+y)//z
r1 = x%z
r2 = y%z
if r1+r2<z:
    ans2 = 0
else:
    ans2 = min(z-r1,z-r2)
print(ans1,ans2)
