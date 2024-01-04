n = int(input())
teamNames = []
for _ in range(n):
    x = input()
    teamNames.append(x)
teamSet = list(set(teamNames))
if len(teamSet) < 2:
    print(teamSet[0])
else:
    countTeam1 = teamNames.count(teamSet[0])
    countTeam2 = teamNames.count(teamSet[1])
    if countTeam1 > countTeam2:
        print(teamSet[0])
    else:
        print(teamSet[1])