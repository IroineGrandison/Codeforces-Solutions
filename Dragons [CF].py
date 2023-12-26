s, n = map(int, input().split())
dragonStrength = []
dragonBonus = []
for _ in range(n):
    x, y = map(int, input().split())
    dragonStrength.append(x)
    dragonBonus.append(y)
sorted_dragons = sorted(zip(dragonStrength, dragonBonus))
success = True
for strength, bonus in sorted_dragons:
    if s > strength:
        s += bonus
    else:
        success = False
        break
if success:
    print("YES")
else:
    print("NO")