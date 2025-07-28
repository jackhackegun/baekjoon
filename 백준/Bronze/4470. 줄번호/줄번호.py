a = int(input())
b = []
for _ in range(a):          
    b.append(input())
for j in range(a):
    print(str(j + 1) + ". " + b[j])
