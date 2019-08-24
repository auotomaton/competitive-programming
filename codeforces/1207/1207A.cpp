// // https://codeforces.com/contest/1207/problem/A

#include <iostream>
#include <algorithm>

int main(){
	int t;
	std::cin >> t;
	for(int i=0;i<t;i++){
		int b,p,f,h,c;
		long int profit;
		std::cin >> b >> p >> f >> h >> c;
		int burgers = b/2;
		if (h>=c){
			if (burgers <= p)
				profit = burgers*h;
			else {
				profit = p*h + std::min(burgers-p, f)*c;
			}
		}
		else {
			if (burgers <= f)
				profit = burgers*c;
			else {
				profit = f*c + std::min(burgers-f, p)*h;
			}
		}
		std::cout << profit << std::endl;
	}
}