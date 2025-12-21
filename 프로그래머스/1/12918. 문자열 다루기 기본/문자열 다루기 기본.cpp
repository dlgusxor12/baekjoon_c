#include <string>
#include <vector>
#include <cctype>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    for(char c : s){
        if(!isdigit(c)) answer = false;
    }
    
    if(s.length() != 4 && s.length() != 6){
        answer = false;
    }
    
    return answer;
}