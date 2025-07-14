a = int(input())

b = 0
while b < a:
    c = " " * b
    d = "*" * (a - b)
    print(c + d)
    b = b + 1
