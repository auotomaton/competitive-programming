// https://codeforces.com/contest/1200/problem/A

#include <iostream>
#include <string>

int main(){
	std::string events;
	int n;
	std::cin >> n >> events;
	int room[10] = {0};
	int left = 0;
	int right = 9;
	for (int i=0;i<n;i++){
		if (events[i]=='L') {
			while(room[left]) left++;
			room[left] = 1;
			left++;
		}
		else if (events[i]=='R') {
			while(room[right]) right--;
			room[right] = 1;
			right--;
		}
		else {
			room[events[i]-48] = 0;
			if (events[i]-48 < left) left = events[i]-48;
			if (events[i]-48 > right) right = events[i]-48;
		}
	}
	for (int i=0;i<10;i++) std::cout << room[i];
}