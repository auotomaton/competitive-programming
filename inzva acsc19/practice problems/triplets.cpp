// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/array-triplets-1

#include <vector>
#include <iostream>

int n;
std::vector<long long int> arr;

long long int solve(int index, long s1, long s2, long s3, int c1, int c2, int c3){
    if (index==n && s1==s2 && s2==s3 && c1!=0 && c2!=0 && c3!=0) return 1LL;
    if (index==n) return 0LL;
    
    return solve(index+1,s1+arr[index],s2,s3,c1+1,c2,c3) + solve(index+1,s1,s2+arr[index],s3,c1,c2+1,c3) + solve(index+1,s1,s2,s3+arr[index],c1,c2,c3+1);
}

int main() {
    std::cin >> n;
    arr.resize(n);
    for(long long int &i:arr) std::cin >> i;
    std::cout << solve(0,0,0,0,0,0,0);
}