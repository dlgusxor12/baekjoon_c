#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int cnt = 0;
    
    for(char &c : s){
        c = tolower(c);
        if(cnt == 0){
            c = toupper(c);
            cnt++;
        }
        if(c == ' '){
            cnt = 0;
        }
        cout << c;
        answer += c;
    }
    
    return answer;
}