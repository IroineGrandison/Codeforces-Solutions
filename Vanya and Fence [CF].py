n, heightOfWall = map(int, input().split())
heights = [int(i) for i in input().split()]
width = 0
for i in range(n):
    if heights[i] <= heightOfWall:
        width += 1
    else:
        width = width + 2
print(width)