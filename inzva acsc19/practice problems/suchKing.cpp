// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/very-very-king-yasin

// distance is o(n). we have some time limit issues. -> try to implement your own tree and keep the distance.

#include <iostream>
#include <iterator>
#include <set>
#include <cstdio>

int main(){
    std::ios::sync_with_stdio(false);
    int n;
    std::cin >> n;
    std::multiset <long int> ms;
    long int arr[n];
    for(int i=0;i<n;i++){
        std::cin >> arr[i];
        ms.insert(arr[i]);
    }
    for(int i=0;i<n;i++){
        std::multiset<long int>::iterator it = ms.lower_bound(arr[i]);
        std::cout << std::distance(ms.begin(), it) << " ";
        ms.erase(it);
    }
}