// https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/buraks-sequence

#include <iostream>

long int sumUpTo(long int* meanSeq, int index){
	long int sum = 0;
	for (int i=0;i<index;i++) sum += meanSeq[i];
	return sum;
}

int main() {
    int n;
    std::cin >> n;
    long int meanSeq[n];
    long int seq[n];
    for(int i=0;i<n;i++) std::cin >> meanSeq[i];
    seq[0] = meanSeq[0];
	std::cout << seq[0];
    for(int i=1;i<n;i++){
    	seq[i] = (meanSeq[i]*(i+1)) - sumUpTo(seq, i);
    	std::cout << ' ' << seq[i];
    }
}
