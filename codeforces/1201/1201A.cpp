// https://codeforces.com/contest/1201/problem/A

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>

int main(){
	int n, m;
	int total = 0;
	std::cin >> n >> m;
	std::vector<int> pts(m);
	std::vector< std::vector<int> > ans(m,std::vector<int>(5,0));
	for (int i=0; i<n; i++){
		std::string s;
		std::cin >> s;
		for (int j=0;j<m;j++){
			ans[j][s[j]-'A']++;
		}
	}
	for (int j=0;j<m;j++){
		std::cin >> pts[j];
	}
	for (int j=0; j<m; j++){
		int max = 0;
		for (int i=0;i<5;i++){
			if (ans[j][i] > max) max = ans[j][i];
		}
		total += max * pts[j];
	}
	std::cout << total;
}