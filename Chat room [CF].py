target = "hello"
s = input().lower()
index = 0

for i in range(len(s)):
    if index < len(target) and s[i] == target[index]:
        index += 1

if index == len(target):
    print("YES")
else:
    print("NO")
