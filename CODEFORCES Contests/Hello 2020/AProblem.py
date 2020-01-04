x = input().split(" ")
n = int(x[0])
m = int(x[1])

litn = []
litm = []

# for i in range(n):
s = input()
litn = s.split(" ")

s = input()
litm = s.split(" ")
# for _ in range(m):
#     s = input()
#     litm.append(s)

q = int(input())
len1 = len(litn)
len2 = len(litm)
# ans = []
# for i range(1,2020):
#





for i in range(q):
    x12 = int(input())
    ans = litn[(x12%len1)-1]+litm[(x12%len2)-1]
    print(ans)
