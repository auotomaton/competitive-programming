// https://www.hackerrank.com/challenges/recursive-digit-sum/problem

#include <iostream>
#include <string>

long long superDigit(std::string s, long int k){
	long long sum = 0;
	for(char c : s){
		sum += (c - '0');
	}
	sum *= k;
	if (sum > 10) return superDigit(std::to_string(sum),1); 
	else return sum;
}

int main(){
	std::string s;
	long int k;
	std::cin >> s >> k;
	std::cout << superDigit(s,k);
}