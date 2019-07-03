//https://codeforces.com/contest/1166/problem/B

#include <iostream>

void rotate(int i) {
	if (i%5 == 0) std::cout << "a";
	else if (i%5 == 1) std::cout << "e";
	else if (i%5 == 2) std::cout << "u";
	else if (i%5 == 3) std::cout << "o";
	else std::cout << "i";
}

int main() {
	int l; 
	int r = 0;
	int m;
	int flag = 0;
	std::cin >> l;
	if (l < 25) std::cout << "-1";
	else {
		for (m=5;m<2000;m++){
			if ((!(l%m)) && ((l/m)>4)) {
				int j;
				flag = 1;
				for (j=0; j<m; j++){
					for (int k=0; k<(l/m); k++){
						rotate(k+r);
					}
					r++;
				}
				break;
			} 
			else continue;
		}
		if (!flag) std::cout << "-1"; 
	}	
}
