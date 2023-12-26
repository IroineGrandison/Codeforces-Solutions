luckyNumbers = [4,7,44,77,47,74,444,777,447,474,744,774,747,477]
n = int(input())
count = 0
for i in range(len(luckyNumbers)):
    if n % luckyNumbers[i] == 0:
        count = count + 1
if count == 0:
    print("NO")
else:
    print("YES")