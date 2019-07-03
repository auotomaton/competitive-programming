// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/2-lazy-2-write-a-story

#include <iostream>
#include <algorithm>
#define mod 1000000009

long long fastExp(long long n, long long k){
    if(k == 0) return 1;
    if(k == 1) return n;
    long long temp = fastExp(n, k>>1);
    if((k&1) == 1) return (n * temp * temp) % mod;
    return (temp * temp) % mod;
}

int main(){
    int t;
    long long n;
    std::cin >> t; 
    for(int i=0; i<t; i++){
        std::cin >> n;
        long long arr[n];
        long long e;
        for(long long j=0;j<n;j++) {
            std::cin >> e;
            arr[j] = fastExp(3,fastExp(2,e));

        }
        std::sort(arr, arr+n);
        for(long long &e:arr) std::cout << e << " ";
        if (i!=t-1) std::cout << std::endl << "--" << std::endl;
    }
}