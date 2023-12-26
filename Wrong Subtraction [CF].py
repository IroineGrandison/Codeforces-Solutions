n, hmt = [int(i) for i in input().split()]
for i in range(hmt):   
    if n%10 > 0:
        n = n - 1
    else:
        n = n//10
print(n)