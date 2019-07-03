// https://codeforces.com/contest/1183/problem/D

#include <iostream>
#include <map>
#include <utility>
#include <vector>
#include <algorithm>

int main(){
	int q;
	std::cin >> q;
	for(int i=0;i<q;i++){
		std::map<int,int> ct;
		std::vector<int> cc;
		int n;
		std::cin >> n; 

		for(int j=0;j<n;j++){
			int type;
			std::cin >> type;
			ct[type]++;
		}
		
		for(const std::pair<int,int>& c : ct){
			cc.push_back(c.second);
		}

		std::sort(cc.begin(),cc.end());
		std::reverse(cc.begin(),cc.end());

		int l = cc.size();
		int max = cc[0];
		long int sum = cc[0];

		for(int j=1;j<l;j++){
			int cur = cc[j];
			if (max <= 0) break;
			if (cur >= max) {
				sum += (max-1);
				max = max-1;
			}
			else {
				sum += cur;
				max = cur;
			}
		}
		std::cout << sum << std::endl;
	}
}