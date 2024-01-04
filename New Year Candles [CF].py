dividend, divisor = map(int, input().split())
total = dividend
quotient = dividend//divisor
remainder = dividend % divisor
while dividend // divisor > 0:
    total = total + quotient
    dividend = quotient + remainder
    quotient = dividend//divisor
    remainder = dividend % divisor
print(total)