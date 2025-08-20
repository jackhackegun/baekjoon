need = [1, 1, 2, 2, 2, 8]   
have = list(map(int, input().split()))

for n, h in zip(need, have):
    print(n - h, end=" ")
