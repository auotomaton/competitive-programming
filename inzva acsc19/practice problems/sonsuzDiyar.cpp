// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/sonsuzlar-diyari

#include <iostream>

int main(){
	long long int n,t;
	std::cin >> t;
	for (long long int i=0;i<t;i++){
		std::cin >> n;
		if (n==1) std::cout << 1;
		else if (n>=2 && n<=3) std::cout << 2;
		else if (n>=4 && n<=9) std::cout << 3;
		else if (n>=10 && n<=33) std::cout << 4;
		else if (n>=34 && n<=153) std::cout << 5;
		else if (n>=154 && n<=873) std::cout << 6;
		else if (n>=874 && n<=5913) std::cout << 7;
		else if (n>=5914 && n<=46233) std::cout << 8;
		else if (n>=46234 && n<=409113) std::cout << 9;
		else if (n>=409114 && n<=4037913) std::cout << 10;
		else if (n>=4037914 && n<=43954713) std::cout << 11;
		else if (n>=43954714 && n<=522956313) std::cout << 12;
		else if (n>=522956314 && n<=6749977313) std::cout << 13;
		else if (n>=6749977314 && n<=93928267313) std::cout << 14;
		else std::cout << 15;
		std::cout << std::endl;
	}
}
