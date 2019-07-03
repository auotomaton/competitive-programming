// problems are not available online
// scoreboard: https://algotester.com/en/Contest/ViewScoreboard/50195

#include <iostream>
#include <vector>
#include <math.h>

int main(){
	int n;
	std::cin >> n;
	std::vector<long long int> even;
	std::vector<long long int> odd;
	for (int i=0;i<n;i++){
		long long int a;
		std::cin >> a;
		a%2 ? even.push_back(a) : odd.push_back(a);
	}
	int ev = even.size();
	int od = odd.size();

	if (abs(ev-od) > 1) std::cout << -1;
	else {
		int ie = 0;
		int io = 0;
		if (ev-od == 1 || ev-od == 0){
			for(int i=0;i<n;i++){
				if (i%2 == 0){
					std::cout << even[ie] << " ";
					ie++;
				}
				else {
					std::cout << odd[io] << " ";
					io++;
				}
			}
		}
		else if (od-ev == 1){
			for(int i=0;i<n;i++){
				if (i%2 == 1){
					std::cout << even[ie] << " ";
					ie++;
				}
				else {
					std::cout << odd[io] << " ";
					io++;
				}
			}
		}
	}
}