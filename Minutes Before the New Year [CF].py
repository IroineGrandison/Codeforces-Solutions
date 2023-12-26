hmt = int(input())
for x in range(hmt):
    h, m = [int(i) for i in input().split()]
    print(1440 - ((h*60) + m))