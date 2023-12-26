costOfBanana, dollars, noOfBananas = [int(i) for i in input().split()]
money = 0
for i in range(1,noOfBananas+1):
    money = money + i*costOfBanana
if dollars > money:
    print(0)
else:
    print(money-dollars)