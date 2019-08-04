// https://codeforces.com/contest/1196/problem/A

#include <iostream>

int main(){
	int q;
	std::cin >> q;
	for(int i=0;i<q;i++){
		long long int sum = 0;
		long long int in;
		for(int j=0;j<3;j++){
			std::cin >> in;
			sum+=in;
		}
		std::cout << sum/2 << std::endl;
	}
}