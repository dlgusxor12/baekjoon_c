#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    stringstream ss(s);
    int idx = 0;
    int max = 0;
    int min = 0;
    int x;
    
    while(ss >> x){
        if(idx == 0){
            max = x;
            min = x;
        }
        if(max < x){
            max = x;
        }
        else if(min > x){
            min = x;
        }
        idx++;
    }
    
    answer = to_string(min) + " " + to_string(max);
    return answer;
}