// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/inzva-final-contest-photo

#include <algorithm>
#include <iostream>

int main(){
    long long n;
    std::cin >> n;
    long long ori[n];
    long long exp[n];
    long long diff = 0;
    for(long long i=0;i<n;i++) {
        std::cin >> ori[i];
        exp[i] = ori[i];
    }
    std::sort(exp, exp+n);
    for(long long i=0;i<n;i++) {
        if (ori[i] != exp[i]) diff++;
    }
    std::cout << diff;
}