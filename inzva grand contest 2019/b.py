# problems are not available online
# scoreboard: https://algotester.com/en/Contest/ViewScoreboard/50195

n = int(input())
l = list(map(int,input().split()))
od = []
ev = []
for i in l:
	if i%2==0:
		ev.append(i)
	else:
		od.append(i)

odd = len(od)
eve = len(ev)
j = 0
k = 0
res = []
if abs(odd-eve) > 1:
	print(-1)


else:
	if odd > eve:
		for i in range(n):
			if i%2 == 0:
				res.append(od[k])
				k+=1
			else:
				res.append(ev[j])
				j+=1
	else:
		for i in range(n):
			if i%2 == 0:
				res.append(ev[k])
				k+=1
			else:
				res.append(od[j])
				j+=1
	print(res)