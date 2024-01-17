ansList = []
for _ in range(int(input())):
    noOfMessages, inititalCharge, chargeConsumptionPUT, switchOnOff = [int(i) for i in input().split()]
    moments = [int(i) for i in input().split()]
    chargeRequired = 0
    moments.insert(0,0)
    for i in range(noOfMessages):
        udega = (moments[i+1] - moments[i]) * chargeConsumptionPUT
        if udega > switchOnOff:
            chargeRequired += switchOnOff
        else:
            chargeRequired += udega
    if chargeRequired < inititalCharge:
        ansList.append("YES")
    else:
        ansList.append("NO")
for i in ansList:
    print(i)


# ansList = []
# for _ in range(int(input())):
#     noOfMessages, inititalCharge, chargeConsumptionPUT, switchOnOff = map(int, input().split())
#     moments = [0] + list(map(int, input().split()))
#     chargeRequired = sum(min((moments[i+1] - moments[i]) * chargeConsumptionPUT, switchOnOff) for i in range(noOfMessages))
#     ansList.append("YES" if chargeRequired < inititalCharge else "NO")
# for ans in ansList:
#     print(ans)