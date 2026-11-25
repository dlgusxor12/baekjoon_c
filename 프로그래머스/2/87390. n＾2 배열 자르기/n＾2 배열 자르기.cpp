#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    vector<int> arr;
    
    for (long long k = left; k <= right; k++) {
        long long i = k / n;   // 행
        long long j = k % n;   // 열
        if (j <= i) answer.push_back(i + 1);
        else        answer.push_back(j + 1);
    }
    return answer;
}