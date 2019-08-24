// // https://codeforces.com/contest/1207/problem/B

#include <iostream>
#include <vector>

int main(){
	int n,m;
	std::cin >> n >> m;
	std::vector< std::vector<int> > A(n, std::vector<int> (m));
	std::vector< std::vector<int> > B(n, std::vector<int> (m,0));
	std::vector< std::vector<int> > mapping(n-1, std::vector<int> (m-1,0));
	bool isZero = true;
	int mCount = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			std::cin >> A[i][j];
			if (A[i][j]) isZero = false;
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<m-1;j++){
			if ( A[i][j] && A[i][j+1] && A[i+1][j] && A[i+1][j+1]) {
				mapping[i][j] = 1;
				mCount++;
				B[i][j] = 1;
				B[i][j+1] = 1;
				B[i+1][j] = 1;
				B[i+1][j+1] = 1;
			}
		}
	}

	bool flag = true;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if (A[i][j] != B[i][j]){
				flag = false;
				break;
			}
		}
		if (!flag) break;
	}

	if (!flag) std::cout << -1;
	else {
		std::cout << mCount << std::endl;
		for(int i=0;i<n-1;i++){
			for(int j=0;j<m-1;j++){
				if (mapping[i][j]==1){
					std::cout << i+1 << " " << j+1 << std::endl;
				}
			}
		}
	}
}