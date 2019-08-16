// https://codeforces.com/contest/1203/problem/A

#include <iostream>
#include <vector>

int main(){
	int t;
	int n;
	std::cin >> t;
	for(int i=0;i<t;i++){
		std::cin >> n;
		int first, second;
		std::cin >> first;
		bool flag = false;
		if (n!=1) {
			std::cin >> second;
			if (first+1 == second || (first==n && second==1)){
				first = second;
				for (int j=2;j<n;j++) {
					std::cin >> second;
					if (!(first+1 == second || (first==n && second==1))) flag = true;
					first = second;
				}
			}
			else if (first == second+1 || (first==1 && second==n)){
				first = second;
				for (int j=2;j<n;j++) {
					std::cin >> second;
					if (!(first == second+1 || (first==1 && second==n))) flag = true;
					first = second;
				}
			}
			else {
				flag = true;
				for (int j=2;j<n;j++) std::cin >> second;
			}
		}
		
		flag ? std::cout << "NO" : std::cout << "YES";
		std::cout << std::endl;
	}
}