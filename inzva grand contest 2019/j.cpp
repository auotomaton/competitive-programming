// time limit exceeded - actually a segment tree problem
// problems are not available online
// scoreboard: https://algotester.com/en/Contest/ViewScoreboard/50195

#include <iostream>
#include <stack>
#include <string>
#include <cstdio>

bool isBalanced(std::string& p, int start, int end) {
	int l = p.length();
	std::stack <char> s;
	for (int i=0; i<l; i++){
		int checker = i;
		if (i>=start && i<=end) 
			checker = start+end-i;
		if (p[checker] == ')'){
			if (!s.empty() && s.top() == '(') {
				s.pop();
			}
			else return false;
		}
		else s.push(p[checker]);
	}
	if (s.empty()) return true;
	else return false;
}


int main(){
	std::ios::sync_with_stdio(false);
	std::string p;
	std::cin >> p;
	int t;
	std::cin >> t;
	for(int i=0;i<t;i++){
		int s, e;
		std::cin >> s >> e;
		if (isBalanced(p, s-1, e-1)) std::cout << "YES" << std::endl;
		else std::cout << "NO" << std::endl;
	}
}