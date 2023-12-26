n = int(input())
result = input()
countA = result.count("A")
countD = result.count("D")
if countA > countD:
    print("Anton")
elif countD > countA:
    print("Danik")
else:
    print("Friendship")