#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int i = 0;
    
    while(n>0){
        answer.insert(answer.begin() + i, n%10);
        n /= 10;
        i++;
    }
    return answer;
}