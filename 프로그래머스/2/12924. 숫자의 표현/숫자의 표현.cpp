#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    int cnt = 0;
    int k = 1;
    
    while((n - (k*(k-1))/2) > 0){
    // a = n - k(k-1)/2
    int a = n - k*(k-1)/2;
    if(a%k == 0){
        cnt++;
    }
    k++;
    }
    
    
    return cnt;
}