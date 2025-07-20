a = int(input())
b = list(map(int, input().split()))
c = [0] * 101
d = 0

for x in b:
    if c[x] == 0:
        c[x] = 1
    else:
        d += 1

print(d)
