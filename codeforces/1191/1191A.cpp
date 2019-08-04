// https://codeforces.com/contest/1191/problem/A

#include <iostream>

int main(){
	int x;
	std::cin >> x;
	if (x%4 == 1) std::cout << "0 A";
	else if (x%4 == 3) std::cout << "2 A";
	else if (x%4 == 2) std::cout << "1 B";
	else std::cout << "1 A";
}