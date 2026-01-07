#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int k = p.size();
    
    for(int i=0; i + k <= t.size(); i++){
        if(t.substr(i, k) <= p){
            answer++;
        } 
    }  
    
    return answer;
}