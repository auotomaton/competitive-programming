// https://codingcompetitions.withgoogle.com/kickstart/round/0000000000050ff2/0000000000150aac

#include <iostream>
#include <string>
#include <vector>


int main (){
	int tests;
	int t,i;
	int n,r,c,sr,sc;
	std::cin >> tests;
	for (t=0; t<tests; t++){
		std::string s;
		std::cin >> n >> r >> c >> sr >> sc;
		std::cin >> s;
		int x = sr-1;
		int y = sc-1;
		std::vector<std::vector<bool> > grid(r, std::vector<bool> (c,0));
		grid[x][y] = 1;
		for (i=0; i<n; i++) {
			if (s[i]=='N') {
				while (grid[x][y]) x-=1;
				grid[x][y] = 1;
			}
			if (s[i]=='S') {
				while (grid[x][y]) x+=1;
				grid[x][y] = 1;
			}
			if (s[i]=='W') {
				while (grid[x][y]) y-=1;
				grid[x][y] = 1;
			}
			if (s[i]=='E') {
				while (grid[x][y]) y+=1;
				grid[x][y] = 1;
			}
		}
		std::cout << "Case #" << t+1 << ": " << x+1 << " " << y+1 << std::endl;
	}
}

