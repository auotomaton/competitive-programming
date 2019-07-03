// https://codeforces.com/contest/1095/problem/A

#include <iostream>
#include <string>
 
int main(){
	std::string s;
	std::string c;
	int k, m;
	int i = 0;
	std::cin >> m;
	std::cin >> c;
	for (i=0, k=1; i<m; i=k+i+1, k++){
		s.append(c, i, 1);
	}
	std::cout << s;
}