// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/algo-team

#include <iostream>
#include <string>

int main(){
    int arr[26];
    for(int i=0;i<26;i++) arr[i]=0;
    std::string name;
    int n;
    std::cin >> n;
    if (n < 5) {
        for(int i=0;i<n;i++) std::cin >> name;
        std::cout << "inzva";
    }
    else {
        for(int i=0;i<n;i++){
            std::cin >> name;
            arr[((name[0])-'a')]++;
        }
        bool none = true;
        for(int i=0;i<26;i++) {
            if (arr[i]>=5) {
                std::cout << char('a'+i);
                none = false;
            }
        }
        if (none) std::cout << "inzva";
    }
}