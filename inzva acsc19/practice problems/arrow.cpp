// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/it-is-brute-force

#include <iostream>
#include <map>

int main() {
    long int n,cur;
    long int count = 0;
    std::cin >> n;
    std::map <long int, long int> m;
    std::cin >> cur;
    m[cur-1]++;
    count++;
    for(long int i=1;i<n;i++) {
    	std::cin >> cur; 
    	if (m[cur]>0) {
    		m[cur]--;
    	}
    	else {
    		count++;
    	}
    	m[cur-1]++;
    }
    std::cout << count;
}