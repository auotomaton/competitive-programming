// https://www.hackerrank.com/contests/inzva-algorithm-competition-summer-camp-2019-qualification/challenges/emres-car

#include <iostream>

int main(){
	long int d, k, a, b, t;
	std::cin >> d >> k >> a >> b >> t;
	if ( (((d-1)/k)*t)/d >= (b-a) ) std::cout << (k*a)+(d-k)*b;
	else std::cout << ((d-1)/k)*t + d*a;
}