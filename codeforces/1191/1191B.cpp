// https://codeforces.com/contest/1191/problem/B

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

int main(){
	std::string a,b,c;
	std::vector<char> n;
	std::cin >> a >> b >> c;
	if (a[1]==b[1] && b[1]==c[1]){
		if (a[0]==b[0] && b[0]==c[0]) std::cout << 0;
		else if (a[0]==b[0] || a[0]==c[0] || b[0]==c[0]) std::cout << 1;
		else {
			n.push_back(a[0]);
			n.push_back(b[0]);
			n.push_back(c[0]);
			std::sort(n.begin(),n.end());
			if (n[1]-n[0] == 1 && n[2]-n[1] == 1) std::cout << 0;
			else if (n[1]-n[0] <= 2 || n[2]-n[1] <= 2) std::cout << 1;
			else std::cout << 2;
		}
	}
	else if (a[1]==b[1] && b[1]!=c[1]) {
		if (abs(a[0]-b[0]) <= 2) std::cout << 1;
		else std::cout << 2;
	}
	else if (a[1]==c[1] && b[1]!=c[1]){
		if (abs(a[0]-c[0]) <= 2) std::cout << 1;
		else std::cout << 2;
	}
	else if (b[1]==c[1] && b[1]!=a[1]){
		if (abs(b[0]-c[0]) <= 2) std::cout << 1;
		else std::cout << 2;
	}
	else std::cout << 2;
}