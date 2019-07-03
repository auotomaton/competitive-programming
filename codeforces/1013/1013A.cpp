// https://codeforces.com/contest/1013/problem/A

#include <iostream>
#include <vector>
 
int main(){
    int x = 0;
    int y = 0;
    int temp;
    int n;
    std::cin >> n;
    for (int i=0; i<n; i++){
        std::cin >> temp;
        x += temp;
    }
    for (int i=0; i<n; i++){
        std::cin >> temp;
        y += temp;
    }
    if (x>=y) std::cout << "Yes"; 
    else std::cout << "No";
}