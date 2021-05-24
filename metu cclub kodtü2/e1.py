N, a, b = tuple(map(int, input().split()))
S = list(map(int, input().split()))

for i in range(N):
    s1 = S[i-a:i]
    s2 = S[i+1:i+b+1]
    x = S[i]
    if all(x < s for s in s1) and all(x < s for s in s2):
        print(i+1)
        break