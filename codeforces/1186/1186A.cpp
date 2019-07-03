// https://codeforces.com/contest/1186/problem/A

#include <iostream>


int main(){
	int n, p, nb;
	std::cin >> n >> p >> nb;

	if (n<=p && n<=nb) std::cout << "Yes";
	else std::cout << "No";
}
