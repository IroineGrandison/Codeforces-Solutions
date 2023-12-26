n, k = map(int, input().split())
scores = list(map(int, input().split()))
count = 0
k_score = scores[k - 1]
for score in scores:
    if score > 0 and score >= k_score:
        count += 1
print(count)