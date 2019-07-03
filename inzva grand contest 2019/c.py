# does not work 
# problems are not available online
# scoreboard: https://algotester.com/en/Contest/ViewScoreboard/50195

n = int(input())
l = set(list(map(int,input().split())))
flag = True
if 1 in l and len(l) == 2:
	flag = False
elif len(l) == 1:
	flag = False
if flag:
	res = n+1
else:
	res = max(l) + n - 1

print(res)
