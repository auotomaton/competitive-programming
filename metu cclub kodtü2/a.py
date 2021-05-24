res = []

for n in range(3,361):
    if 360%n == 0:
        res.append(int((n-2)*180/n))

t = int(input())

for i in range(t):
    a = int(input())
    if a in res:
        print('YES')
    else:
        print('NO')