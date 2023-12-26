n = int(input())
membersCount = [int(i) for i in input().split()]
cars = 0
membersCount.sort()
if 4 in membersCount:
    cars = membersCount.count(4)
    while 4 in membersCount:
        membersCount.remove(4)
if 3 in membersCount:
    for i in range(len(membersCount)):
        index3 = membersCount.index(3)
        if membersCount[i] + membersCount[index3] == 4:
            pass