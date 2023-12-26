word = input().lower()
vowels = ['a','e','i','o','u','y']
list1 = []
for i in word:
    if i not in vowels:
        list1.append(i)
str = ""
for i in range(len(list1)):
    str = str + "."  + list1[i]
print(str)