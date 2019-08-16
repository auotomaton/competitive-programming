// https://codeforces.com/contest/1203/problem/E

#include <iostream>
#include <algorithm>
#include <vector>

int main(){
	long int n;
	std::cin >> n;
	std::vector<long int> b(n);
	for(long int i=0;i<n;i++) std::cin >> b[i];
	std::sort(b.begin(),b.end());
	long int max = 0;
	long int unique = 0;
	for(long int i=0;i<n;i++){
		if (b[i]<max) continue;
		else if (b[i]==max) {
			unique++;
			max = b[i]+1;
			continue;
		}
		else if (b[i]==max+1) {
			unique++;
			max = b[i];
			continue;
		}
		else if (b[i]>max+1){
			unique++;
			max = b[i]-1;
			continue;
		}
	}
	std::cout << unique;
}