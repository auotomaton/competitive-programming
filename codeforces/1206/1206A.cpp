// https://codeforces.com/contest/1206/problem/A

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main(){
	std::map<int,int> A;
	std::map<int,int> B;
	int an, bn;
	std::cin >> an;
	std::vector<int> av(an);
	for(int i=0;i<an;i++) {
		int a;
		std::cin >> a;
		A[a]++;
		av[i] = a;
	}
	std::cin >> bn;
	std::vector<int> bv(bn);
	for(int i=0;i<bn;i++) {
		int b;
		std::cin >> b;
		B[b]++;
		bv[i] = b;
	}
	std::sort(av.begin(), av.end());
	std::sort(bv.begin(), bv.end());
	int aa,bb;
	for(int i=0;i<an;i++){
		for(int j=0;j<bn;j++){
			aa = av[i];
			bb = bv[j];
			if (A[aa+bb]==0 && B[aa+bb]==0) break; 
		}
		if (A[aa+bb]==0 && B[aa+bb]==0) break; 
	}
	std::cout << aa << " " << bb;
}