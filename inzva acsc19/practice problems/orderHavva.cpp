// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/havvas-order-2

#include <vector>
#include <set>
#include <iostream>

void preorder(std::vector<std::set<int> >& g, int node, int n){
    std::cout << node+1 << " ";
    for(const int i : g[node]){
        preorder(g,i,n);
    }
    return;
}

void postorder(std::vector<std::set<int> >& g, int node, int n){
    for(const int i : g[node]){
        postorder(g,i,n);
    }
    std::cout << node+1 << " ";
    return;
}


int main(){
    int t, n;
    std::cin >> t;
    for (int j=0;j<t;j++){
        int ln = -1;
        int rn = -1;
        std::cin >> n;
        std::vector<std::set<int> > g(n);
        for(int i=1;i<n;i++){
            int n1, n2;
            std::cin >> n1 >> n2;
            if (n1 == 1 && ln == -1) ln = n2-1;
            if (n1 == 1 && ln != -1) rn = n2-1;
            g[n1-1].insert(n2-1);
        }
        preorder(g,ln,n);
        std::cout << "1" << " ";
        postorder(g,rn,n);
        std::cout << std::endl;
    }
}