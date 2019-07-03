// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/clan-wars

#include <iostream>
#include <queue>

std::vector< std::vector<long long int> > g;
std::vector <bool> visited;
std::vector <int> color;
std::queue <long long int> Q;

void colorize(long long int root){
    Q.push(root);
    visited[root] = true;
    color[root] = 0;
    while (!Q.empty()){
        long long int u = Q.front();
        Q.pop();
        for (long long int i : g[u]){ 
            if (!visited[i]){ 
                visited[i] = true;
                color[i] = 1-color[u];
                Q.push(i);
            } 
        } 
    }
}

int main() {
    long long int n;
    long long int m;
    bool isBoring = false;
    std::cin >> n >> m;
    g.resize(n);
    color.resize(n,-1);
    visited.resize(n,false);
    for(long long int i=0;i<m;i++){
        long long int p1,p2;
        std::cin >> p1 >> p2;
        g[p1-1].push_back(p2-1);
        g[p2-1].push_back(p1-1);
    }
    for(long long int i=0;i<n;i++){
        if (!visited[i]) colorize(i);
    }
    for (long long int i=0;i<n;i++){
        for(long long int u : g[i]){
            if (color[i] == color[u]) isBoring = true;
        }
    }
    
    isBoring ? std::cout << "Boring" : std::cout << "Fight will be awesome";
}