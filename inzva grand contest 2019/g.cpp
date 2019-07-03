// problems are not available online
// scoreboard: https://algotester.com/en/Contest/ViewScoreboard/50195

#include <string>
#include <iostream>

int main(){
	std::string s;
	int n;
	std::cin >> n;
	std::cin >> s;
	int max = 0;
	int curmax = 1;
	int i = 0;
	for(i=1;i<n;i++){
		if (s[i] == s[i-1]) curmax++;
		else curmax = 1;
		if (curmax >= max) max = curmax;
	}
	if (n == 1) std::cout << 0;
	else std::cout << n-max;
}