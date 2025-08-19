a = input()
a_list = list(a)
b = input()
b_list = list(b)
count_a = {}
for ch in 'abcdefghijklmnopqrstuvwxyz':
    count_a[ch] = a_list.count(ch)
count_b = {}
for ch in 'abcdefghijklmnopqrstuvwxyz':
    count_b[ch] = b_list.count(ch)
remove_count = 0
for ch in 'abcdefghijklmnopqrstuvwxyz':
    remove_count += abs(count_a[ch] - count_b[ch])
print(remove_count)