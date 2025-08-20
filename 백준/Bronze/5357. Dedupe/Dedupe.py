n = int(input())

for _ in range(n):
    s = input().strip()
    result = []

    for ch in s:
        if not result or result[-1] != ch:
            result.append(ch)

    print("".join(result))
