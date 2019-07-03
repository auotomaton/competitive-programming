// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/it-is-brute-force

#include <iostream>
#include <math.h>
#include <limits.h>


long long int theSum = LONG_MAX;

void subsetSums(long long int* arr, int n) 
{ 
    long long t = 1<<n;  
    for (long long i=1; i<t; i++) 
    { 
        long long sum = 0; 
        for (int j=0; j<n; j++) 
            if (i & (1<<j)) 
                sum += arr[j]; 
        if (abs(sum)<theSum) theSum = abs(sum);
    } 
} 


int main() {
    int n;
    std::cin >> n;
    long long int arr[n];
    for(int i=0;i<n;i++) std::cin >> arr[i];
    subsetSums(arr, n);
    std::cout << theSum;
}