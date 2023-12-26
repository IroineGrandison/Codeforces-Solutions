a = []
for i in range(5):
    a.append([*map(int, input().split())])
    
pos = []
for i in range(5):
    for j in range(5):
        if a[i][j] == 1:
            pos.append((i,j))
            break
            
print (abs(pos[0][0]-2) + abs(pos[0][1]-2))