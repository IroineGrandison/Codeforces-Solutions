hmt = int(input())
for _ in range(hmt):
    n = int(input())
    string = input()
    total = 0
    flips = 0
    for i in range(n):
        if string[i] == "(":
            flips +=1
        else:
            flips -= 1
        if flips < 0:
            total += 1
            flips = 0
    print(total)