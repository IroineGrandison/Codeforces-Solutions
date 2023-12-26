n = int(input())
list1 = list(str(n))
count = 0
alpha = 0
for i in range(len(list1)):
    if (list1[i] == "4") or (list1[i] == "7"):
        count += 1
list2 = list(str(count))
for j in range(len(list2)):
    if (list2[j] == "4" ) or (list2[j] == "7"):
        alpha += 1
if alpha == len(list2):
    print("YES")
else:
    print("NO")