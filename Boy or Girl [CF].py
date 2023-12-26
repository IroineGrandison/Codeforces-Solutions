word = input().lower()
list_of_word = []
for i in word:
    if i not in list_of_word:
        list_of_word.append(i)
if len(list_of_word) % 2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")