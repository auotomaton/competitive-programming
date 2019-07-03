// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/dijk-degil-dijkstra

#include <iostream>
#include <vector>
#include <queue>

void bfs(int s, std::vector < std::vector<int> >& g, std::vector<int>& distance, std::vector<bool>& visited) {
    std::queue <int> Q;
    Q.push(s);
    distance[s] = 0;
    visited[s] = true; 
    while (!Q.empty()){
        int u = Q.front();
        Q.pop();
        for (int i : g[u]){ 
            if (!visited[i]){ 
                visited[i] = true;
                distance[i] = distance[u]+1;
                Q.push(i);
            } 
        } 
    }
    return;
}

int main(){
    int t,n,m,a,b;
    std::cin >> t;
    for (int i=0;i<t;i++){
        std::cin >> n >> m >> a >> b;
        std::vector<int> d(n,0);
        std::vector<bool> v(n,false);
        std::vector < std::vector<int> > g(n);
        for(int j=0;j<m;j++){
            int v1,v2;
            std::cin >> v1 >> v2;
            g[v1-1].push_back((v2-1));
        }
        
        bfs(a-1,g,d,v);
        int path = d[b-1];
        if (path!=0) std::cout << path << std::endl;
        else std::cout << "No Path!" << std::endl;
        if (i!=t-1) std::cout << "--" << std::endl;
    }
}