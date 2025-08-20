c = 0
a, b = map(int, input().split())
while(c == 0):
    if(a == 0 and b == 0):
        break
    print(a + b)
    a, b = map(int, input().split())