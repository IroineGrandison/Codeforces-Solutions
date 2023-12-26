l=[]
m = 0
for i in range(0, int(input())):
    j = input().split()
    if j.count('1') >= 2:
        m+=1
        l.append(m)
print(l)
print(max(l))