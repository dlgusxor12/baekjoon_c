#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int index = 0;
    
    for(char a : s){
        if(a == ' '){
            answer += ' ';
            index = 0;
        }else{
            answer += (index % 2 == 0) ? (char)toupper(a) : (char)tolower(a);
            index++;
        }
    }
    
    return answer;
}