#include <string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string s)
{
    bool answer = true;    
    stack<char> myStack;
    
    for(char a : s) {
        if(a == ')'){
            if(myStack.size() == 0){
                return false;
            }
            myStack.pop();
            continue;
        }
        myStack.push(a);
    }
    
    if(myStack.size() != 0){
        return false;
    }
    
        
    return answer;
}