// https://codeforces.com/contest/1201/problem/B

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>

int main(){
	long long int sum = 0;
	long long int max = 0;
	long long int min = INT_MAX;
	
	long int n;
	std::cin >> n;
	for (int i=0;i<n;i++){
		long long int num;
		std::cin >> num;
		sum += num;
		if (num > max) max = num;
		if (num < min) min = num;
	}

	if (sum-max >= max && !(sum%2)) std::cout << "YES";
	else std::cout << "NO";
}