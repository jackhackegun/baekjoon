a = int(input())
d = []

for i in range(a):
    b = int(input())
    if b == 0 and d:
        d.pop()
    else:
        d.append(b)


c = sum(d)
print(c)
