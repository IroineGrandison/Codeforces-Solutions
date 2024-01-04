n, m = map(int, input().split())
start = 1
time = 0
listOfTasks = [int(i) for i in input().split()]
for i in range(m):
    if listOfTasks[i] >= start:
        time += listOfTasks[i] - start
    else:
        time += n - (start - listOfTasks[i])
    start = listOfTasks[i]
print(time)