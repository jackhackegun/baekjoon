n = int(input())
v = [int(input()) for _ in range(n)]

cnt = 0
while True:
    m = max(v[1:]) if n > 1 else 0
    if v[0] > m:
        break
    i = v[1:].index(m) + 1
    v[i] -= 1
    v[0] += 1
    cnt += 1

print(cnt)
