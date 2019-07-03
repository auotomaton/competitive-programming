// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/help-the-snail

#include <iostream>

int main() {
    long long int n, x, a;
    std::cin >> n >> x >> a;
    std::cout << ((a*n)-x)/(n-1);
}