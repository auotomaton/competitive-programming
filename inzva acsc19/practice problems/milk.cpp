//https://www.hackerrank.com/contests/inzva-acsc-19-foundation-problems/challenges/we-want-milk

#include <iostream>
#include <map>

int main(){
    int n,m;
    long int a,b;
    long int max = 0;
    long long int spend = 0;
    std::cin >> n >> m;
    std::map <long int, long int> milk;
    for(long int i=0;i<n;i++){
    	if (a > max) max = a;
        std::cin >> a >> b;
        milk[a]+=b;
    }
    for(std::pair <const long int,long int> &i:milk){
    	if (m) {
    		if (m <= i.second){
    			spend += m*i.first;
    		    m -= m;
    		}
    		else {
    			spend += i.second*i.first;
    			m -= i.second;
    		}
    	}
    	else break;
    }
    std::cout << spend;
}