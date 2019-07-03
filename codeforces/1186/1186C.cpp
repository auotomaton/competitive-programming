// https://codeforces.com/contest/1186/problem/C

#include <iostream>
#include <string>
#include <cstdio>
#include <vector>

int main(){
	std::ios::sync_with_stdio(false);
	std::string a,b;
	std::cin >> a >> b;
	long int bSum = 0;
	long int al = a.length();
	long int bl = b.length();
	std::vector<long int> c(al);
	std::vector<long int> diff(al);
	std::vector<long int> cc;
	long int evC = 0;

	for (long int i=0;i<bl;i++){
		if (b[i]=='1') bSum++;
	}

	long int sum = 0;
	for (long int i=0;i<al;i++){
		if (a[i]=='1') sum++;
		c[i] = sum;
		//std::cout << c[i];
	}

	long int times = al - bl + 1; 
	cc.push_back(c[bl-1]);
	//std::cout << c[bl-1];

	for (long int i=0;i<times-1;i++){
		//std::cout << std::endl << c[bl+i]-c[i] << std::endl;
		cc.push_back(c[bl+i]-c[i]);
	}
	for(long int i : cc){
		if (i%2 == bSum%2) evC++;
	}

	std::cout << evC;
}