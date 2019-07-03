// https://codeforces.com/contest/1145/problem/A

#include <iostream>
#include <algorithm>

int findSorted(int* arr, int n){
	if (std::is_sorted(arr, arr+n)) return n;
	return std::max(findSorted(arr,n/2), findSorted(arr+(n/2),n/2));
}
int main(){
	int n;
	std::cin >> n;
	int arr[n];
	for(int i=0; i<n; i++) std::cin >> arr[i];
	std::cout << findSorted(arr, n);
}
