// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-final/challenges/chernobyl

#include <iostream>
#include <math.h>

int main(){
    int t;
    std::cin >> t;
    for(int i=0;i<t;i++){
        long long int n,m;
        std::cin >> n >> m;
        if (n<m) std::cout << "FALSE";
        else {
            if (n >= m*log2(3)) std::cout << "TRUE";
            else std::cout << "FALSE";}
        std::cout << std::endl;
    }
}
