n = int(input())
height = [int(i) for i in input().split()]
minHeight = min(height)
maxHeight = max(height)
for i in range(n):
    if height[i] == minHeight:
        minIndex = i
for i in range(n):
    if height[i] == maxHeight:
        maxIndex = i
        break
if minIndex > maxIndex:
    print(maxIndex + (n-1-minIndex))
else:
    print(maxIndex + (n-1-minIndex) -1)