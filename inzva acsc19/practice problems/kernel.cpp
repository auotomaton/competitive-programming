// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/solut

#include <iostream>
#include <vector>
#include <queue>

std::vector< std::vector<long int> > g;
std::vector<long long int> times;
std::vector<long long int> pathTimes;
std::vector<long int> incoming;
std::queue<long int> Q;

int main(){
    long int n;
    long int m;

    std::cin >> n >> m;

    g.resize(n);
    times.resize(n);
    pathTimes.resize(n,0);
    incoming.resize(n,0);

    for(long int i=0;i<n;i++) std::cin >> times[i];
    
    for(long int i=0;i<n;i++){
        long long int depNo;
        long int file;
        std::cin >> depNo >> file;
        incoming[file-1] += depNo;
        if (depNo == 0) Q.push(file-1);
        for(long long int j=0;j<depNo;j++){
            long int depOn;
            std::cin >> depOn;
            g[depOn-1].push_back(file-1);
        } 
    }

    while (!Q.empty()){
        long int u = Q.front();
        Q.pop();
        for (long int j : g[u]) {
            incoming[j]--;
            if (pathTimes[j] <= (pathTimes[u] + times[u])) {
                pathTimes[j] = pathTimes[u] + times[u];
            }
            if (incoming[j] == 0) Q.push(j);
        }
    }
    std::cout << pathTimes[m-1] + times[m-1];
}