a = input()
b = list(a)
b.reverse()
c = 0
for i in range(len(b)):
    if(b[i] == '1'):
        c = c + (1 * (16 ** i))
    if(b[i] == '2'):
        c = c + (2 * (16 ** i))
    if(b[i] == '3'):
        c = c + (3 * (16 ** i))
    if(b[i] == '4'):
        c = c + (4 * (16 ** i))
    if(b[i] == '5'):
        c = c + (5 * (16 ** i))
    if(b[i] == '6'):
        c = c + (6 * (16 ** i))
    if(b[i] == '7'):
        c = c + (7 * (16 ** i))
    if(b[i] == '8'):
        c = c + (8 * (16 ** i))
    if(b[i] == '9'):
        c = c + (9 * (16 ** i))
    if(b[i] == 'A'):
        c = c + (10 * (16 ** i))
    if(b[i] == 'B'):
        c = c + (11 * (16 ** i))
    if(b[i] == 'C'):
        c = c + (12 * (16 ** i))
    if(b[i] == 'D'):
        c = c + (13 * (16 ** i))
    if(b[i] == 'E'):
        c = c + (14 * (16 ** i))
    if(b[i] == 'F'):
        c = c + (15 * (16 ** i))
print(c)
