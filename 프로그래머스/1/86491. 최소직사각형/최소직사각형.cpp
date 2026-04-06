// 모든 명함에 대해 가로 x, 세로 y가 주어졌을때
// 최소 명함 : 가로 = 명함의 가장 긴 변, 세로 = 명함의 가장 짧은 변
// 긴 변 : max(x, y)
// 짧은 변 : min(x, y)
// 최종 명함 : 가로 = max(max(x,y)), 세로 = max(min(x, y))

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int x_max = 0;
    int y_max = 0;
    vector<int> width;
    vector<int> height;
    
    for(int i=0; i<sizes.size(); ++i){
        if(sizes[i][0] >= sizes[i][1]){
            width.push_back(sizes[i][0]);
            height.push_back(sizes[i][1]);
        }
        else{
            width.push_back(sizes[i][1]);
            height.push_back(sizes[i][0]);   
            }
        }
    x_max = *max_element(width.begin(), width.end());
    y_max = *max_element(height.begin(), height.end());
    answer = x_max * y_max;
    
    return answer;
}