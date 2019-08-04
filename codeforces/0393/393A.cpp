// https://codeforces.com/contest/393/problem/A

#include <iostream>
#include <string>
#include <map>

int main(){
	std::string s;
	std::cin >> s;
	std::map <char, int> m;
	for(char c : s){
		m[c]++;
	}

	if (m['n'] < 3) {
		std::cout << 0;
	}

	else {
		int maxPos = INT_MAX;
		maxPos = std::min(maxPos, m['i']);
		maxPos = std::min(maxPos, m['t']);
		maxPos = std::min(maxPos, m['e']/3);
		maxPos = std::min(maxPos, ((m['n']-3)/2)+1);
		std::cout << maxPos;
	}
}