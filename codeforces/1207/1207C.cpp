// // https://codeforces.com/contest/1207/problem/C

#include <iostream>
#include <string>
#include <algorithm>

int main(){
	int t;
	std::cin >> t;
	for(int i=0;i<t;i++){
		long long int n, a, b;
		std::string s;
		std::cin >> n >> a >> b;
		std::cin >> s;
		long long int cost = b;
		bool seen = false;
		long long int streak = 0;
		for(long int j=1;j<n-1;j++){
			if (!seen && s[j]=='0'){
				cost += (a+b);
			}
			else if (!seen && s[j]=='1'){
				seen = true;
				cost += (2*(a+b));
			}
			else if (seen && s[j]=='0'){
				streak++;
			}
			else if (seen && s[j]=='1'){
				if (s[j-1]=='1') cost += (a+(2*b));
				else if (streak == 1) {
					cost += ((2*a)+(4*b));
					streak = 0;
				}
				else {
					cost += std::min(
						((streak+1)*(a+(2*b))),
						((5*(a+b))+((streak-2)*(a+b)))
						);
					streak = 0;
				}
			}
		}
		if (streak && seen) {
			cost += ((streak+3)*(a+b));
		}
		else if (!seen) cost += (2*(a+b));
		else cost += ((3*a)+(3*b));
		std::cout << cost << std::endl;
	}

}