// https://codeforces.com/contest/1200/problem/B

#include <iostream>
#include <math.h>

int main(){
	int t;
	std::cin >> t;
	for(int test=0;test<t;test++){
		int n;
		long long int m,k;
		std::cin >> n >> m >> k;
		long int cur, next;
		std::cin >> cur;
		bool flag = false;
		for (int i=1;i<n;i++){
			std::cin >> next;
			long long int dif = abs(next-cur);	
			if (cur >= next) {
				m += dif;
				cur -= dif;
				if (k > cur) m += cur;
				else m += k;
			}
			else if (next > cur){
				if (dif <= k) {
					if ((k-dif) > cur) m += cur;
					else m += (k-dif);
				}
				else if (dif > k && m >= (dif-k)){
					m -= (dif-k);
				}
				else flag = true;
			}
			cur = next;
		}
		flag ? std::cout << "NO" : std::cout << "YES";
		std::cout << std::endl;
	}
}