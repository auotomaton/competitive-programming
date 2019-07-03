// https://codeforces.com/contest/1087/problem/A

#include <iostream> 
#include <string>
#include <algorithm>
 
int main(){
	std::string s;
	std::cin >> s;
	size_t l = s.length();
	std::string o;
	std::string n1;
	std::string n2;
 
	//std::cout << o;
	
	if (l%2 == 1){
		int i1 = l/2;
		int i2 = l/2;
		while (i1>=0){
			n1 = s[i1];
			n2 = s[i2];
			o.append(n2);
			if (i1 != i2) o.append(n1);
			i1 = i1-1;
			i2 = i2+1;
		}
	}
 
	else {
		int i1 = l/2 -1;
		int i2 = l/2;
		while (i1>=0){
			n1 = s[i1];
			n2 = s[i2];
			o.append(n1);
			o.append(n2);
			i1 = i1-1;
			i2 = i2+1;
		}
	}
 
	std::cout << o;
}