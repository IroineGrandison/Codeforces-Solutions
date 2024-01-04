n, houseToVisit = map(int, input().split())
Ai_nos = [int(i) for i in input().split()]
list1 = []
currentCell = 1
while len(list1) <= houseToVisit:
    list1.append(currentCell)
    if currentCell <= len(Ai_nos):
        currentCell += Ai_nos[currentCell - 1]
if houseToVisit in list1:
    print("YES")
else:
    print("NO")