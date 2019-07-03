// https://codeforces.com/contest/1166/problem/D --not accepted

#include <iostream>
#include <math.h>

void calcy(int a, int b, int m){

	int seq[50];
	seq[0] = a;
	int count = a;
	m = round(sqrt(m));
	for (int i=1; i<b; i++){
		seq[i] = count;
		count += seq[i];
	}
	if (seq[m-1] <= b) {
		seq[m-1] = b;
		for (int i=0; i<m; i++) std::cout << seq[i];
	}
	else std::cout << "-1";
	return;
}

int main(){
	int tests;
	std::cin >> tests;
	for (int t=0; t<tests; t++) {
		int a,b,m;
		std::cin >> a;
		std::cin >> b;
		std::cin >> m;
		calcy(a,b,m);
		std::cout << std::endl;
	}
}

