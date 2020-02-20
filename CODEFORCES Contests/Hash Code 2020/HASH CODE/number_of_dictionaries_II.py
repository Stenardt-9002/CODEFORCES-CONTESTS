d = {}

l = []

for i in range(1000):
    l.append(i)

for i in range(10 ** 6):
    d[i] = l

print(len(d))