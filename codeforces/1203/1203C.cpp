// https://codeforces.com/contest/1203/problem/C

#include <iostream>
#include <math.h>
#include <numeric>
#include <set>

int main(){
	long int n;
	long int count;
	std::set<long long int> s;
	std::cin >> n;
	long long int a, b;
	std::cin >> a;
	for(long int i=1;i<n;i++){
		std::cin >> b;
		a = std::gcd(a,b);
	}
	for (long long int i=1;i<sqrt(a)+1;i++){
		if (a%i==0) {
			s.insert(i);
			s.insert(a/i);
		}
	}
	count = s.size();
	std::cout << count;
}