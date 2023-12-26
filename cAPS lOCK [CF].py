s = input()
if s.isupper():
    s = s.lower()
elif s[0].islower() and s[1:].isupper():
    pass
elif s[0].isupper() and s[1:].islower():
    pass
elif s.islower() and len(s) == 1:
    s = s.upper()
else:
    s = s.capitalize()
print(s)