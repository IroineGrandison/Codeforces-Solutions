reqBacteria = int(input())
twosFactors = []
z = 1
count = 0
while z <= reqBacteria:
    twosFactors.append(z)
    z *= 2
twosFactors.reverse()
for i in range(len(twosFactors)):
    if twosFactors[i] <= reqBacteria:
        reqBacteria =  reqBacteria % twosFactors[i]
        count += 1
print(count)