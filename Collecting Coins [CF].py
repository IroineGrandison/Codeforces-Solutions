t = int(input())
for i in range(t):
    A, B, C, n = list(map(int, input().split()))
    a = (n - 2*A + B + C) / 3
    b = (n + A - 2*B + C) / 3
    c = (n + A + B - 2*C) / 3 
    aa = int(a)
    bb = int(b)
    cc = int(c)
    if aa + bb + cc == n and min(a, b, c) >= 0:
        print("YES")
    else:
        print("NO")