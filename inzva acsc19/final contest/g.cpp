// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-final/challenges/pelinsu-and-berkecan/problem

#include <vector>
#include <iostream>
#include <algorithm>

std::vector<int> count;


int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> candies(n);
    for(int i=0;i<n;i++){ 
        std::cin >> candies[i];
    }
    long int min = 1000000000000000;
    std::sort(candies.begin(),candies.end());
    if (n==k) std::cout << candies[n-1] - candies[0];
    else {
        int st = 0;
        int end = k-1;
        bool flag = false;
        while(end<n){
            int curdif = candies[end]-candies[st];
            if (curdif==0) {
                min = curdif;
                break;
            }
            else if (curdif < min) min = curdif;
            st++;
            end++;
        }
        std::cout << min;
    }
    
    
}
