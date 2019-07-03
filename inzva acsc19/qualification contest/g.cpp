// https://www.hackerrank.com/contests/inzva-algorithm-competition-summer-camp-2019-qualification/challenges/yet-another-secret-service-problem

#include <iostream>

int main(){
	int n;
	long long int hands = 0;
	int prev = 0;
	int curr;
	std::cin >> n;
	for (int i=0;i<n;i++){
		std::cin >> curr;
		if (curr-prev >= 0) hands += curr-prev;
		prev = curr;
	}
	std::cout << hands; 
}