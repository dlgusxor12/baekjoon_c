#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    int value = n;
    
    int n_cnt = 0;
    int b_cnt = 0;
    int cnt = 1;
    
    // 1 개수 구하기
    while(value > 0){
        if(value%2 == 1){
            n_cnt++;
        }
        value /= 2;
    }
    
    // 다음 큰 수 구하기
    while(1){
        value = n + cnt;
        // 다음 큰 수의 1 개수 구하기
        while(value > 0){
        if(value%2 == 1){
            b_cnt++;
        }
        value /= 2;
        }
        
        if(n_cnt == b_cnt){
            answer = n + cnt;
            break;
        }
        cnt++;
        b_cnt = 0;
    }
    
    return answer;
}