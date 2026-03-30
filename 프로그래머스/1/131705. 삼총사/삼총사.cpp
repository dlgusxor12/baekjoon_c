#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    int value = 0;
    
    // 삼총사 == 3명
    for(int i=0; i<number.size(); ++i){
        value += number[i];
        for(int j=i+1; j<number.size(); ++j){
            value += number[j];
            for(int k=j+1; k<number.size(); ++k){
                value += number[k];
                    if(value == 0){
                        answer++;
                    }
                value -= number[k];
            }
            value -= number[j];
        }
        value -= number[i];
    }
    
    return answer;
}