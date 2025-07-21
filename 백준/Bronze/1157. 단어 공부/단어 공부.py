from collections import Counter

# 1. 입력받고 대문자로 변환
word = input().upper()

# 2. 알파벳 개수 세기
count = Counter(word)

# 3. 가장 많이 나온 횟수 구하기
max_count = max(count.values())

# 4. 가장 많이 나온 알파벳들 모으기
most_common = [k for k, v in count.items() if v == max_count]

# 5. 결과 출력
if len(most_common) > 1:
    print('?')
else:
    print(most_common[0])
