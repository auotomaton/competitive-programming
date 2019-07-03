// https://codeforces.com/contest/1092/problem/B

#include <iostream>
#include <algorithm>
#include <vector>
 
int main(){
	std::vector<int> ss(100);
	int n;
	int q = 0;
	std::cin >> n;
	for(int i=0; i<n; i++){
		std::cin >> ss[i];
	}
	std::sort(ss.begin(),ss.begin()+n);
	for(int i=0; i<n; i = i+2){
		q = q + (ss[i+1]-ss[i]);
	}
	std::cout << q;
}