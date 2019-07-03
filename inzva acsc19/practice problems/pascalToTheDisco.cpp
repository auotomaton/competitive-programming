// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/pascal-take-us-to-the-disco

#include <iostream>
#define mod 1000000007

long long fastExp(long long n, long long k){
	if(k == 0) return 1;
	if(k == 1) return n;
	long long temp = fastExp(n, k>>1);
	if((k&1) == 1) return (n * temp * temp) % mod;
	return (temp * temp) % mod;
}

int main(){
	int t;
	long long n;
	std::cin >> t; 
	for(int i=0; i<t; i++){
		std::cin >> n;
		std::cout << fastExp(2,n)-1 << std::endl;
	}
}