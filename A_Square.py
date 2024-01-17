hmt = int(input())
for _ in range(hmt):
    list1 = []
    for z in range(4):
        temp = [int(i) for i in input().split()]
        list1.append(temp)
    listoffirst = [list1[0][0],list1[1][0],list1[2][0],list1[3][0]]
    
    cordx , cordy = list(set(listoffirst))
    cordsofx = []
    cordsofy = []


    for i in range(4):
        if list1[i][0] == cordx:
            cordsofx.append(list1[i][1])
        if list1[i][0] ==  cordy:
            cordsofy.append(list1[i][1])

    a,b = cordsofx
    c,d = cordsofy



    sidea = abs(a-b)
    sideb = abs(c-d)


    print(sidea*sideb)