// https://codeforces.com/contest/1187/problem/A

#include <iostream>

int main(){
    int t;
    std::cin >> t;
    for(int i=0;i<t;i++){
        long long int n, s, t;
        std::cin >> n >> s >> t;
        long long int mn = std::min(s,t);
        mn = n-mn;
        std::cout << mn+1 << std::endl;
    }
}