n = int(input())
l = []
for i in range(n):
    str = input()
    l.append(str)
for i in range(len(l)):
    if len(l[i]) <= 10:
        print(l[i])
    else:
        k = len(l[i]) - 2
        print("{}{}{}".format(l[i][0],k,l[i][-1]))