// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/compilation-error

#include <vector>
#include <iostream>
#include <queue>

int main(){
    long int n,m;
    std::cin >> n >> m;
    std::vector< std::vector<int> > g(n);
    std::vector<long int> toposort;
    std::queue<long int> Q;
    std::vector<long int> incoming(n,0);
    for(long int i=0;i<m;i++){
        long int f1,f2;
        std::cin >> f1 >> f2;
        g[f1-1].push_back(f2-1);
        incoming[f2-1]++;
    }

    for(long int i=0;i<n;i++){
        if (incoming[i] == 0) Q.push(i);
    }
    long int count = 0;
    while (!Q.empty()){
        long int u = Q.front();
        Q.pop();
        count++;
        for (long int j : g[u]) {
            incoming[j]--;
            if (incoming[j] == 0) Q.push(j);
        }
    }
    if (count != n) std::cout << "NO";
    else std::cout << "YES";
}