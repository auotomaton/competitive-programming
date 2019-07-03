// https://codeforces.com/contest/4/problem/A

#include <iostream>
 
int main(){
	int w;
	std::cin >> w;
	if (w < 3) {
		std::cout << "NO";
		return 0;
	}
 
	if (w%2) std::cout << "NO";
	else std::cout << "YES";
 
	return 0;
}