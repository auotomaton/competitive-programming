// https://codeforces.com/contest/1166/problem/C  --not accepted

#include <iostream>
#include <vector>
#include <algorithm>

int main(){

	int n;
	int count = 0;
	std::cin >> n;
	std::vector<int> N(20000,0);
	for (int i=0;i<n;i++) std::cin >> N[i];
	std::sort(N.begin(), N.end());
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (N[i]!=N[j]){
				long int x = abs(N[i]);
				long int y = abs(N[j]);
				long int x2 = abs(N[i]-N[j]);
				long int y2 = abs(N[i]+N[j]);

				if (x == y) {
					if ((x2 >= x) && (y2 <= y)) count++;
					else if ((x2 <= x) && (y2 >= y)) count++;
					else if ((x2 == x) && (y2 == x)) count++;
				}
				else {
					if (x2 < y2){
						if ((x2 <= x) && (y2 >= y)) count++;
					}
					else if (x2 > y2){
						if ((x2 >= y) && (y2 <= x)) count++;
					}
				}				
			}
		}
	}
	std::cout << count;
}