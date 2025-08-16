import sys

n = int(sys.stdin.readline())
for i in range(n):
    s = sys.stdin.readline().strip()
    print("yes" if 6 <= len(s) <= 9 else "no")
