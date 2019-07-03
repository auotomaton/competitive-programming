// https://codeforces.com/contest/1183/problem/A

#include <iostream>


int giveA(int a){
	int aH = a/100; //9
	int aT = (a-aH*100)/10; //9
	int aO = a-((a/10)*10);	// 9
	int total = aH+aT+aO;	
	while (total%4) {
		a+=1;
		aH = a/100; //1
		aT = (a-aH*100)/10; //0
		aO = a-((a/10)*10);		//0
		total = aH+aT+aO; //1
	}
	return a;
}


int main(){
	int a;
	std::cin >> a;
	if (a == 1000 || a == 999 || a == 998 || a == 997) std::cout << 1003;
	else if (a == 999) std::cout << 1003;
	else {
		int aH = a/100;
		int aT = (a-aH*100)/10;
		int aO = a-((a/10)*10);
		int total = aH+aT+aO;
		if (total%4 == 0) std::cout << a;
		else std::cout << giveA(a);
	}
}