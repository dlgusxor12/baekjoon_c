#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    map<int, int> m;
    vector<int> vals;
    
    for(int a : tangerine){
        m[a]++;
    }
    
    for(auto&p : m){
        vals.push_back(p.second);
    }
    
    sort(vals.begin(), vals.end(), greater<int>());
    
    for(auto& p : vals){
        k -= p;
        answer++;
        if(k<=0) break;
    }
    return answer;
}