#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<long long> v;
    
    string a = to_string(n);
    sort(a.begin(), a.end(), greater<>());
    answer = stol(a);
    
    return answer;
}