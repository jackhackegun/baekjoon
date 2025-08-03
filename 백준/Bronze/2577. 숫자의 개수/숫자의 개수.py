a = int(input())
b = int(input())
c = int(input())

result = a * b * c
result_str = str(result)

for i in range(10):
    print(result_str.count(str(i)))
