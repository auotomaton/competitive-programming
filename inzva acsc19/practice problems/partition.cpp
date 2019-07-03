// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/array-triplets-1

#include <iostream>


int main() {
    int n;
    long int sum = 0;
    std::cin >> n;
    long int arr[n];
    for (int i=0;i<n;i++){
        std::cin >> arr[i];
        sum += arr[i];
    } 
    if (sum%3) std::cout << 0;
    else {
    	
    }
}
