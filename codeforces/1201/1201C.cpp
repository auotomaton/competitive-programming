// https://codeforces.com/contest/1201/problem/C

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>

int main(){
	long int n;
	long int nc = 0;
	long long int k, median;
	long long int kc;
	long long int max = 0;
	std::cin >> n >> k;
	kc = k;
	std::vector<long long int> arr(n);
	std::map<long long int,long int> map;

	for(long int i=0;i<n;i++) {
		long long int num;
		std::cin >> num;
		if (num > max) max = num;
		map[num]++;
	}


	for(auto &i : map){
		if (nc+i.second < n/2+1) nc += i.second;
		else {
			median = i.first;
			i.second = i.second - (n/2-nc);
			break;
		}
	}

	std::pair<long long int,long int> prev;
	for (auto &i : map) {
		if (i.first <= median) {
			prev = i;
			continue;
		}
		else if (prev.first == median) {
			if (i.second) {
				if (kc - (prev.second)*(i.first-prev.first) >= 0) {
					kc -= (prev.second)*(i.first-prev.first);
					i.second = i.second + prev.second;
					prev.second = 0;
					median = i.first;
				}
				else {
					prev = i;
					break;
				}
			}
			prev = i;
		}
	}

	if (kc) median += kc/map[median];

	if (n==1) median = max + k;

	std::cout << median;
}