for _ in range(int(input())):
    n = int(input())
    s = [int(i) for i in input()]
    f = [int(i) for i in input()]

    sIndex = {i for i, val in enumerate(s) if val == 1}
    fIndex = {i for i, val in enumerate(f) if val == 1}

    commonIndices = sIndex.intersection(fIndex)
    maxSteps = max(len(sIndex), len(fIndex))
    samePos = len(commonIndices)

    print(maxSteps - samePos)
