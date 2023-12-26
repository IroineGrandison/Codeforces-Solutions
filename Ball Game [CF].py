n = int(input())
ballPos = 1
for i in range(1,n):
    ballPos = ballPos + i
    if ballPos > n:
        ballPos = ballPos - n
    print(ballPos,end=" ")