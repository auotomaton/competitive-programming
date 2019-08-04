// https://codeforces.com/contest/1196/problem/C

#include <iostream>

int main(){
	int q;
	std::cin >> q;

	for(int i=0;i<q;i++){
		int r;
		std::cin >> r;
		int downx = -100000;
		int upy = 100000;
		int upx = 100000;
		int downy = -100000;
		bool flag = true;
		for (int j=0;j<r;j++){
			int x, y;
			int cha;
			std::cin >> x >> y;
			std::cin >> cha;
			if (!cha) {
				if (upx < x) flag = false;
				if (downx < x) downx = x;
			}
			std::cin >> cha;
			if (!cha) {
				if (downy > y) flag = false;
				if (upy > y) upy = y;
			}
			std::cin >> cha;
			if (!cha) {
				if (downx > x) flag = false;
				if (upx > x) upx = x;
			}
			std::cin >> cha;
			if (!cha) {
				if (upy < y) flag = false;
				if (downy < y) downy = y;
			}
		}
		if (flag) {
			std::cout << 1;
			std::cout << " " << downx << " " << downy << std::endl;
		}
		else std::cout << 0 << std::endl;
	}
}