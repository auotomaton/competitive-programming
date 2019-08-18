// https://codeforces.com/contest/1206/problem/B

#include <iostream>
#include <vector>
#include <math.h>

int main(){
	long int n;
	long long int coin = 0;
	long int minusC = 0;
	long int zeroC = 0;
	std::cin >> n;
	std::vector<long long int> a(n);
	for(long int i=0;i<n;i++){
		std::cin >> a[i];
	}
	for(long int i=0;i<n;i++){
		if (a[i]>=0){
			if (a[i]==0) zeroC++;
			coin += abs(a[i]-1);
		}
		else {
			coin += abs(a[i]+1);
			minusC++;
		}
	}
	if (minusC%2) {
		if (!zeroC) coin += 2;
	}
	std::cout << coin;
}