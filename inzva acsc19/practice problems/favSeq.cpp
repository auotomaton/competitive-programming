// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/favourite-sequence

#include <vector>
#include <iostream>
#include <queue>
#include <set>

int main(){
    int n,m;
    std::cin >> n;
    std::vector< std::set<int> > g(1000001);
    std::queue<int> Q;
    std::vector<int> incoming(1000001,-1);
    for(int i=0;i<n;i++){
        int f, s, k;
        std::cin >> k >> f;
        if (incoming[f-1] == -1) incoming[f-1] = 0;
        for (int j=1;j<k;j++){
            std::cin >> s;
            if (incoming[s-1] == -1) incoming[s-1] = 0;
            g[f-1].insert(s-1);
            incoming[s-1]++;
            f = s;
        }  
    }

    for(int i=0;i<1000001;i++){
        if (incoming[i] == 0) {
        	Q.push(i);
       	}
    }

    while (!Q.empty()){
        int u = Q.front();
        Q.pop();
        std::cout << u+1 << " ";
        for (const int j : g[u]) {
            incoming[j]--;
            if (incoming[j] == 0) Q.push(j);
        }
    }
}