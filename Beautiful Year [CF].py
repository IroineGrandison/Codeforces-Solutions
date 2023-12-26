year = int(input())
while True:
    year += 1
    set1 = set(str(year))
    if len(set1) == 4:
        print(year)
        break