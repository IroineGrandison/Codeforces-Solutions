n = int(input())
colors = input()
stonesList = list(colors)
count = 0
for i in range(len(stonesList)-1):
    if stonesList[i] == stonesList[i+1]:
        count += 1
print(count)