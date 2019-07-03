// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/summer-camp

#include <vector>
#include <iostream>
#include <string>
#include <queue>

std::vector <std::vector<int> > moves(64);


void printMoves(){
    for (int i=0;i<64;i++) {
        for (int j : moves[i]) std::cout << i << " " << j << std::endl;
    }
    return;
}

void bfs(int s, int t, std::vector<bool>& visited, std::vector<int>& distance) {
    std::queue <int> Q;
    Q.push(s);
    distance[s] = 0;
    visited[s] = true; 
    while (!Q.empty()){
        int u = Q.front();
        Q.pop();
        for (int i : moves[u]){ 
            if (!visited[i]){ 
                visited[i] = true;
                distance[i] = distance[u]+1;
                Q.push(i);
            } 
        } 
    }
    return;
}


int parse(std::string place){
    int cha,y;

    if (place[0] == 'a') cha = 0;
    else if (place[0] == 'b') cha = 8;
    else if (place[0] == 'c') cha = 16;
    else if (place[0] == 'd') cha = 24;
    else if (place[0] == 'e') cha = 32;
    else if (place[0] == 'f') cha = 40;
    else if (place[0] == 'g') cha = 48;
    else if (place[0] == 'h') cha = 56;
    else cha = 0;

    if (place[1] == '1') y = 0;
    else if (place[1] == '2') y = 1;
    else if (place[1] == '3') y = 2;
    else if (place[1] == '4') y = 3;
    else if (place[1] == '5') y = 4;
    else if (place[1] == '6') y = 5;
    else if (place[1] == '7') y = 6;
    else if (place[1] == '8') y = 7;
    else y = 0;
    
    return cha+y;
}

int convert(int x, int y){
    return (x*8)+y;
}


void possibleMovesFrom(int p, int q){
    int X[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int Y[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

    for (int i = 0; i < 8; i++) {
        int x = p+X[i];
        int y = q+Y[i];
        if (x >= 0 && y >= 0 && x < 8 && y < 8)
            moves[convert(p,q)].push_back(convert(x,y));
    }
}

  
int main(){ 
    int t;
    for (int i=0;i<8;i++){
        for (int j=0;j<8;j++) possibleMovesFrom(i,j);
    }
    //printMoves();
    std::cin >> t;
    std::string source, target;
    for (int i=0;i<t;i++){
        std::vector<bool> visited(64,false);
        std::vector<int> parent(64,-1);
        std::vector<int> distance(64,0);
        std::cin >> source >> target;
        bfs(parse(source), parse(target), visited, distance);
        std::cout << "To get from " << source << " to " << target << " takes " << distance[parse(target)] << " knight moves." << std::endl;
    }
}

