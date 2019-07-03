// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/count-inversions-2

#include <iostream>
long long int c = 0;

void merge(long long int* arr, int start, int middle, int end){
	int nl = middle-start+1;
	int nr = end-middle;
	int left[nl];
	int right[nr];
	int i,l=0,r=0;
	for(i=0; i<nl; i++) left[i]=arr[start+i];
	for(i=0; i<nr; i++) right[i]=arr[middle+1+i];
	i = start;
	while(l<nl && r<nr){
		if (left[l]<=right[r]){
			arr[i] = left[l];
			l++;
		}
		else{
			arr[i] = right[r];
			c += (nl-l);
			r++;
		}
		i++;
	}
	while (l < nl) 
	{ 
		arr[i] = left[l]; 
		l++; 
		i++; 
	} 
	while (r < nr) 
	{ 
		arr[i] = right[r]; 
		r++; 
		i++; 
	} 
}
void mergeSort(long long int* arr, int start, int end){
	int middle = (start+end)/2;
	if (start < end){
		mergeSort(arr, start, middle);
		mergeSort(arr, middle+1, end);
		merge(arr, start, middle, end);
	}
	return;
}
int main(){
    int n;
    std::cin >> n;
    long long int arr[n];
    for(int i=0;i<n;i++) std::cin >> arr[i];
    mergeSort(arr, 0, n-1);
    std::cout << c;
}