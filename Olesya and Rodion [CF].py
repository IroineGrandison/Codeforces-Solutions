n, t = map(int, input().split())
min_no = 10**(n-1)
max_no = (10**n)-1
list1 = []
while min_no <= max_no:
    if min_no % t == 0:
        list1.append(min_no)
        break
    min_no += 1
if len(list1) == 0:
    print(-1)
else:
    print(list1[0])