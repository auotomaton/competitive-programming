// https://www.hackerrank.com/contests/inzva-algorithm-competition-summer-camp-2019-qualification/challenges/chair-game

#include <iostream>
#include <string>

int main(){
	int n;
	int no = 0;
	std::string s;
	std::cin >> n;
	std::cin >> s;

	if (n==1) {
		if (s[0] == 0) std::cout << "No";
		else std::cout << "Yes";
	}
	else if (s[0]== '1' && s[1] == '1') std::cout << "No";
	else if (s[0] == '0' && s[1] == '0') std::cout << "No";
	else if (s[n-1] == '0' && s[n-2] == '0') std::cout << "No";

	else {
        for (int i=2;i<n;i++) {
            if (no == 1) break;
            if (s[i]=='1' && s[i-1]=='1') no = 1;
            if (s[i]=='0' && s[i-1]=='0' && s[i-2]=='0') no = 1;
        }
        if (no == 1) std::cout << "No";
        else std::cout << "Yes";
    }
}