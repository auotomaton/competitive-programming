// https://www.hackerrank.com/contests/inzva-algorithm-competition-summer-camp-2019-qualification/challenges/single-letter-strings

#include <iostream>
#include <string>

int main(){
	std::string s;
	std::cin >> s;
	int l = s.length();
	int cc = 1;
	long int ss = 0;
	char pivot = s[0];
	for (int i=1; i<l; i++) {
		if (s[i] == pivot) cc++;
		else {
			ss += ((cc*(cc+1))/2);
			cc = 1;
			pivot = s[i];
		} 
	}
	ss += ((cc*(cc+1))/2);
	std::cout << ss << std::endl;
}