// https://codeforces.com/contest/1183/problem/G  -- not accepted

#include <iostream>
#include <map>
#include <utility>
#include <vector>
#include <algorithm>

std::map<int,int> ct1;
std::map<int,int> ct2;
std::map<int,int> ct3;
std::vector<int> cc1;
std::vector<int> cc2;
std::vector<int> cc3;

int main(){
	int q;
	std::cin >> q;
	for(int i=0;i<q;i++){
		
		int n;
		std::cin >> n; 
		cc1.clear();
		cc2.clear();
		ct1.clear();
		ct2.clear();

		for(int j=0;j<n;j++){
			int type, want;
			std::cin >> type >> want;
			if (want) ct1[type]++;
			else ct3[type]++;
			ct2[type]++;
		}
		
		for(const std::pair<int,int>& c1 : ct1){
			cc1.push_back(c1.second);
		}

		for(const std::pair<int,int>& c2 : ct2){
			cc2.push_back(c2.second);
		}

		for(const std::pair<int,int>& c3 : ct3){
			cc3.push_back(c3.second);
		}

		std::sort(cc1.begin(),cc1.end());
		std::reverse(cc1.begin(),cc1.end());

		std::sort(cc2.begin(),cc2.end());
		std::reverse(cc2.begin(),cc2.end());

		std::sort(cc3.begin(),cc3.end());
		std::reverse(cc3.begin(),cc3.end());

		int l1 = cc1.size();
		int max1 = cc1[0];
		long int sum1 = cc1[0];

		for(int j=1;j<l1;j++){
			int cur1 = cc1[j];
			if (max1 <= 0) break;
			if (cur1 >= max1) {
				sum1 += (max1-1);
				max1 = max1-1;
			}
			else {
				sum1 += cur1;
				max1 = cur1;
			}
		}

		int l2 = cc2.size();
		int max2 = cc2[0];
		long int sum2 = cc2[0];

		for(int j=1;j<l2;j++){
			int cur2 = cc2[j];
			if (max2 <= 0) break;
			if (cur2 >= max2) {
				sum2 += (max2-1);
				max2 = max2-1;
			}
			else {
				sum2 += cur2;
				max2 = cur2;
			}
		}
		std::cout << sum2 << " " << sum1 << std::endl;
	}
}