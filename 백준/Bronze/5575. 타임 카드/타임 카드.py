import sys

for _ in range(3):
    sh, sm, ss, eh, em, es = map(int, sys.stdin.readline().split())

    start = sh * 3600 + sm * 60 + ss
    end   = eh * 3600 + em * 60 + es

    diff = end - start  

    h = diff // 3600
    diff %= 3600
    m = diff // 60
    s = diff % 60

    print(h, m, s)
