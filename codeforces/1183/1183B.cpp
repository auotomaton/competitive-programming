// https://codeforces.com/contest/1183/problem/B

#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	int q;
	std::cin >> q;
	for(int i=0;i<q;i++){
		int n;
		long long int k;
		std::cin >> n >> k;
		std::vector<long long int> p(n);
		for(int j=0;j<n;j++){
			std::cin >> p[j];
		}
		std::sort(p.begin(),p.end());
		long long int mx = p[n-1];
		long long int mn = p[0];
		bool flag = false;
		int curIn = n-1;
		long long int cur = p[curIn];
		if (k==0 && mn!=mx) std::cout << -1;
		else if (k==0 && mn==mx) std::cout << mx;
		else if (mn+k>=mx) std::cout << mn+k;
		else if (mn+k<=mx && mx-mn-k<=k) std::cout << mn+k;
		else {
			while(mx-cur<=k && curIn >= 0){
				if (cur-mn<=k) {
					flag = true;
					break;
				}
				else {
					curIn--;
					if (curIn < 0) break;
					cur = p[curIn];
				}
			}
			if (flag) std::cout << cur;
			else std::cout << -1;
		}
		
		std::cout << std::endl;
	}
}