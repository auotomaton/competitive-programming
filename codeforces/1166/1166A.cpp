// https://codeforces.com/contest/1166/problem/A

#include <iostream>
#include <string>

int main(){
	int map[26] = {0};
	int c1[26] = {0};
	int c2[26] = {0};
	int n;
	int chatty = 0;
	std::string next;
	std::cin >> n;
	for (int i=0; i<n; i++){
		std::cin >> next;
		char c = next[0];
		map[c-97]++;
	}
	for (int i=0; i<26; i++){
		if (map[i]>=1) {
			int j;
			for (j=map[i]; j>0; j--){
				(j%2) ? c1[i]++ : c2[i]++;
			}
		}
	}
	for (int i=0; i<26; i++){
		if (c1[i]>1) chatty += (((c1[i]) * (c1[i]-1))/2);
		if (c2[i]>1) chatty += (((c2[i]) * (c2[i]-1))/2);
	}
	std::cout << chatty;
}

