// https://codeforces.com/contest/1203/problem/B

#include <iostream>
#include <algorithm>
#include <vector>

int main(){
	int q;
	std::cin >> q;
	for(int i=0;i<q;i++){
		int n;
		std::cin >> n;
		std::vector<int> sticks(4*n);
		for(int j=0;j<4*n;j++){
			std::cin >> sticks[j];
		}
		std::sort(sticks.begin(), sticks.end());
		long int area = sticks[0] * sticks[4*n-1];
		bool flag = true;
		for(int j=1;j<=n;j++){
			if (sticks[2*j-2] == sticks[2*j-1] &&
				sticks[4*n-2*j] == sticks[4*n-2*j+1] &&
				sticks[2*j-2] * sticks[4*n-2*j+1] == area) continue;
			else {
				flag = false;
				break;
			};
		}
		flag ? std::cout << "YES" : std::cout << "NO";
		std::cout << std::endl;
	}
}