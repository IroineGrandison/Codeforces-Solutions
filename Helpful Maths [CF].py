str1 = list(map(str, input().split("+")))
str1.sort()
str2 = ""
for i in range(len(str1)):
    str2 = str2 + str1[i] + "+"
list1 = []
for i in str2:
    list1.append(i)
list1.pop(len(str2)-1)
str3 = ""
for i in range(len(list1)):
    str3 += list1[i]
print(str3)