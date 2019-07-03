// https://www.hackerrank.com/contests/inzva-algorithm-competition-summer-camp-2019-qualification/challenges/array-difference-1

#include <cmath>
#include <iostream>
#include <algorithm>

int main() {
	int n;
	int m;
	int answer = 0;
	std::cin >> n;
	int a[n];
	int b[n];
	int diff[n];

	for (int i=0; i<n; i++) std::cin >> a[i];
	for (int i=0; i<n; i++) std::cin >> b[i];
	for (int i=0; i<n; i++) diff[i] = a[i]-b[i];
	std::sort (diff, diff+n);
	//for (int i=0; i<n; i++) std::cout << diff[i];
	m = -diff[n/2];
	for (int i=0; i<n; i++) answer += abs(diff[i]+m);
	std::cout << answer;
}

