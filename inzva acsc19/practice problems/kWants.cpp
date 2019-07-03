// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/what-does-kayacan-want

#include <iostream>
#include <vector>
#include <queue>

std::vector<long int> visited;

void bfs(std::vector< std::vector<long int> >& G,long int v, long int s) {
    std::queue <long int> Q;
    Q.push(s);
    visited[s] = 0;
    while (!Q.empty()){
        long int u = Q.front();
        visited[u] = 1;
        Q.pop();
        for (long int i=0; i<v; i++){ 
            if (visited[i]==-1 && G[u][i] == 1){ 
                Q.push(i); 
                visited[i] = 0;
            } 
        } 
    }
    return;
}


int main(){
    long int v;
    long int e;
    std::cin >> v >> e;
    visited.resize(v);
    for(long int i=0;i<v;i++) visited[i] = -1;
    std::vector<std::vector<long int> > G(v,std::vector<long int>(v,0));

    long int v1, v2;
    for (long int i=0; i<e; i++){
        std::cin >> v1 >> v2;
        G[v1-1][v2-1] = 1;
        G[v2-1][v1-1] = 1;
    }
    bfs(G, v, 0);
    for(long int i=0;i<v;i++) {
        if (visited[i] == -1) {
            std::cout << "Not Connected";
            return 0;
        }
    }
    std::cout << "Connected";
    return 0;
}


