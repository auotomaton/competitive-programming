// https://codeforces.com/contest/1204/problem/B

#include <iostream>

int main(){
	int n,l,r;
	int max = 1;
	int maxmem;
	long int summax = 0;
	long int summin = 0;
	std::cin >> n >> l >> r;
	for(int i=1;i<r;i++){
		max = max*2;
	}
	maxmem = max;
	for(int i=r;i>0;i--){
		summax += max;
		max = max/2;
	}
	for(int i=n-r;i>0;i--){
		summax += maxmem;
	}
	max = 1;
	for(int i=1;i<l;i++){
		max = max*2;
	}
	for(int i=l;i>0;i--){
		summin += max;
		max = max/2;
	}
	for(int i=n-l;i>0;i--){
		summin++;
	}
	std::cout << summin << " " << summax;
}