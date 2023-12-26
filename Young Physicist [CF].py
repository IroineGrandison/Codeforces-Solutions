hmv = int(input())
listOfVectors = []
xCordsSum = 0
yCordsSum = 0
zCordsSum = 0
for _ in range(hmv):
    vec1 = [int(i) for i in input().split()]
    listOfVectors.append(vec1)
for i in range(len(listOfVectors)):
    xCordsSum += listOfVectors[i][0]
    yCordsSum += listOfVectors[i][1]
    zCordsSum += listOfVectors[i][2]
if (xCordsSum ==0) and (yCordsSum == 0) and (zCordsSum == 0):
    print("YES")
else:
    print("NO")