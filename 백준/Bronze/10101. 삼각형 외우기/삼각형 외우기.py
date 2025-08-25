a = int(input())
b = int(input())
c = int(input())
total = a + b + c
if a == 60 and b == 60 and c == 60:
    print("Equilateral")
elif total == 180 and (a == b or b == c or a == c):
    print("Isosceles")
elif total == 180 and (a != b and b != c and a != c):
    print("Scalene")
else:
    print("Error")
