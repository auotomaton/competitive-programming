// https://codeforces.com/contest/1183/problem/C -- hacked

#include <iostream>
#include <cstdio>

int main(){
	std::ios::sync_with_stdio(false);
	int q;
	long long int k, n, a, b;
	std::cin >> q;
	for (int j=0;j<q;j++){
		std::cin >> k >> n >> a >> b;
		if (n*a < k) std::cout << n;
		else if (n*b >= k) std::cout << -1;
		else {
			long long int just = k/a;
			long long int charge = k/b;
			long long int gameCount = n;
			long long int chargeCount = 0;
			long long int need;
			while (gameCount) {
				if ((gameCount/2)*a + n-(gameCount/2)*b > k) {
					gameCount = gameCount/2;
					chargeCount = n-gameCount;
				}
				need = (gameCount*a + chargeCount*b);
				if (need < k) break;
				else if (chargeCount > charge) break;
				else {
					gameCount--;
					chargeCount++;
				}
			}
			std::cout << gameCount;
		}
		std::cout << std::endl;
	}
	
}