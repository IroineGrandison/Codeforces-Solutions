from math import ceil
n, m = map(int, input().split())
steps = []
max = n
min = ceil(n/2)
x = min
if x % m == 0:
    print(x)
else:
    while (x % m != 0) and (x <= max):
        x += 1
    print(x)