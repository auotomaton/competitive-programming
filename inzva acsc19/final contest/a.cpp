// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-final/challenges/yasin-and-his-machine-learning-experience

#include <iostream>
#include <set>
#include <vector>
#include <cstdio>

std::vector < std::vector<long long int> > ma;


int binarySearch(long long int q, int j){
    int begin = 0;
    int end = ma[j].size()-1;
    int m = (end-begin)/2;
    if (ma[j].size()==1) {
        if (ma[j][m] == q) return 1;
        else return -1;
    }
    while (begin<=m && end>m){
        if (ma[j][m] == q) return 1;
        else if (ma[j][m] < q) {
            begin = m+1;
        }
        else end = m;
        if (ma[j].size()!= 1 && m==ma[j].size()-2) {
            if (ma[j][m+1] == q) return 1;
        }
        m = begin + (end-begin)/2;
    }
    return -1;
}

int main(){
    std::ios::sync_with_stdio(false);
    int n, m, k;
    std::cin >> n >> m;
    ma.resize(n);
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            long long int a;
            std::cin >> a;
            ma[i].push_back(a);
        }
    }
    std::cin >> k;
    for(int i=0;i<k;i++){
        long long int q;
        std::cin >> q;
        bool flag = false;
        int j;
        for(j=0;j<n;j++){
            if (binarySearch(q,j)!=-1) {
                flag = true;
                break;
            }
        }
        flag ? std::cout << "YES" : std::cout << "NO";
        std::cout << std::endl;
    }
}