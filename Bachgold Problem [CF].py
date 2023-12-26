n = int(input())
if n % 2 == 0:
    print(int(n/2))
    print("2 "*int(n/2))
else: 
    print(int((n-3)/2)+1)
    print("2 "*int((n-3)/2),"3")