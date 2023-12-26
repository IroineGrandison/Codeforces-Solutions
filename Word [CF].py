word = input()
listOfWord = list(word)
countLower = 0
countUpper = 0
for char in range(len(listOfWord)):
    if listOfWord[char].islower():
        countLower += 1
    else:
        countUpper += 1
if countLower >= countUpper:
    print(word.lower())
else:
    print(word.upper())