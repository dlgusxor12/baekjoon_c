#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int solution(int n) {
    int answer = 0;
    int three = 0;
    vector<int> v;
    
    // 3진법 변환
    while(n>0){
        v.insert(v.begin(), n%3);
        n /= 3;
    }
    
    // 앞 뒤 반전
    reverse(v.begin(), v.end());
    
    int vsize = v.size();
    
    // 10진법 변환
    for(int i = 0; i < vsize; i++){
        answer += v.back()*pow(3,i);
        v.pop_back();
    }
    
    return answer;
}