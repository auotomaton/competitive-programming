// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/kasmail

#include <iostream>
#include <vector>
#include <algorithm>

std::vector <long long int> arr;
long long cal(long long i){
	long long sum = 0;
	for(long long int &j:arr) {
		if (j>i) sum+= (j-i);
	}
	return sum;
}

int main(){
    long long n;
    long long m,need;
    long long s = 0;
    long long h;
    std::cin >> n;
    arr.resize(n);
    std::cin >> m;
    need = m;
    for(long long &i:arr) std::cin >> i;
    std::sort(arr.begin(), arr.end());
	std::reverse(arr.begin(), arr.end());
	h = arr[0];
	for (long long i=0;i<n-1;i++){
		long long diff = arr[i] - arr[i+1];
		if ( (diff*(i+1)) <= need ){
			h -= diff;
			need -= (diff*(i+1));
		}
		else {
			long long toAdd;
			need%(i+1) ? toAdd = 1 : toAdd = 0;
			h -= (need/(i+1) + toAdd);
			need = 0;
		}
	}
	if (need) {
		long long toAdd2;
		need%n ? toAdd2 = 1 : toAdd2 = 0;
		h -= (need/n + toAdd2);
	}
	std::cout << h;
}