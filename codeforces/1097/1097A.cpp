// https://codeforces.com/contest/1097/problem/A

#include <string>
#include <iostream>
 
int main(){
	std::string desk;
	std::string a;
	std::cin >> desk;
	int i;
	for (i=0; i<5; i++){
		std::cin >> a;
		if (a[0] == desk[0]) {
			std::cout << "YES";
			break;
		}
		if (a[1] == desk[1]) {
			std::cout << "YES";
			break;
		}
	}
 
	if (i==5) std::cout << "NO";
}