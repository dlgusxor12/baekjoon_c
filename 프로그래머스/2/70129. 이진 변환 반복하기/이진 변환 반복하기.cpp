#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int cnt = 0;
    int b_cnt = 0;

while(s.size() > 1)
{    
    // 0 제거
    cnt += count(s.begin(), s.end(), '0');
    s.erase(remove(s.begin(), s.end(), '0'), s.end());
    
    // 이진 변환
    int s_size = s.size();
    string b = "";
    while(s_size >= 1){
        b.insert(0, to_string(s_size % 2));
        s_size /= 2;
    }
    s = b;
    b_cnt++;
}
    
    answer.push_back(b_cnt);
    answer.push_back(cnt);
    
    return answer;
}