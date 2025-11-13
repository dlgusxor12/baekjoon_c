#include <string>
#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p = 0;
    int y = 0;
    
    for(int i=0; i<s.size(); i++){
        if(tolower(s[i]) == 'p'){
            p++;
        }else if(tolower(s[i]) == 'y'){
            y++;
        }
    }
    
    if(p==y){
        return true;
    }
    else{
        return false;
    }
}