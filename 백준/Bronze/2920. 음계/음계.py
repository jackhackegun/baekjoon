a = input().split()
b = len(a)
c = 0
for i in range(b - 7):
    if(a[i] == '1' and a[i+1] == '2' and a[i+2] == '3' and a[i+3] == '4' and 
       a[i+4] == '5' and a[i+5] == '6' and a[i+6] == '7' and a[i+7] == '8'):
        c = 1
    elif(a[i] == '8' and a[i+1] == '7' and a[i+2] == '6' and a[i+3] == '5' and 
         a[i+4] == '4' and a[i+5] == '3' and a[i+6] == '2' and a[i+7] == '1'):
        c = -1

if(c == 1):
    print('ascending')
elif(c == -1):
    print('descending')
else:
    print('mixed')
