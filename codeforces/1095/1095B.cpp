// https://codeforces.com/contest/1095/problem/B

#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
 
int main(){
 
	int n;
	int t;
	std::vector<int> arr;
	int max = INT_MIN;
	int oldmax = INT_MIN;
	int min = INT_MAX;
	int oldmin = INT_MAX;
 
	std::cin >> n;
 
	for (int i=0; i<n; i++) {
		std::cin >> t;
		arr.push_back(t);
	}
 
	std::sort(arr.begin(), arr.end());
 
	if (n <= 2) std::cout << 0;
 
	else if (n == 3) {
		((arr[1]-arr[0]) < (arr[2]-arr[1])) ? (std::cout << (arr[1]-arr[0])) : (std::cout << (arr[2]-arr[1]));
	}
	
	else {
		max = arr[n-1];
		oldmax = arr[n-2];
		min = arr[0];
		oldmin = arr[1];
 
		((max-oldmin) <= oldmax-min) ? (std::cout << (max-oldmin)) : (std::cout << (oldmax-min));
	}
}