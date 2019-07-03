# problems are not available online
# scoreboard: https://algotester.com/en/Contest/ViewScoreboard/50195

n = int(input())
def f(x):
	l = []
	if x <= 37:
		l.append(x)
	if x > 37:
		l.append(x-(x%37))
		if x%37 :
			l.append(x%37)
	return l
for i in range(1,n+1):
	if len(f(i)) == 1:
		print(1,f(i)[0])
	else:
		print(2,f(i)[0],f(i)[1])


