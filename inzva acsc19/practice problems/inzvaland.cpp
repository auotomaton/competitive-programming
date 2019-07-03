// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/inzvaland

#include <vector>
#include <stack>
#include <iostream>
#include <utility>

std::vector< std::vector<std::pair <long long int, long long int> > > adj; 


void dfs(long long int v, std::vector<bool>& visited, std::vector<long long int>& parent, std::vector<long long int>& distance) {
    visited[v] = true;
    for (std::pair<long long int, long long int> &u : adj[v]) {
        if (!visited[u.first]) {
            parent[u.first] = v;
            distance[u.first] = (distance[v]+u.second);
            dfs(u.first, visited, parent, distance);
        }
    }
    return;
}


int main(){
    long long int n,z;
    long long int v1f;
    long long int v1,v2,w;
    std::cin >> n >> z;
    adj.resize(n);
    std::vector<bool> visited(n,false);
    std::vector<long long int> parent(n,-1);
    std::vector<long long int> distance(n,0);
    for(long long int i=1;i<n;i++){
        std::cin >> v1 >> v2 >> w;
        if (i==1) v1f = v1-1;
        adj[v1-1].push_back(std::make_pair(v2-1,w));
        adj[v2-1].push_back(std::make_pair(v1-1,w));
    }
    dfs(v1f,visited,parent,distance);
    long long int max = 0;
    long long int maxNode;
    long long int s;
    for(s=0;s<n;s++) {
        if (distance[s]>=max){
            max = distance[s];
            maxNode = s;
        }
    }
    std::vector<bool> visited2(n,false);
    std::vector<long long int> parent2(n,-1);
    std::vector<long long int> distance2(n,0);
    dfs(maxNode,visited2,parent2,distance2);
    for(long long int i=0;i<n;i++) if (distance2[i]>=max) max = distance2[i];    
    std::cout << z*max;    
}



