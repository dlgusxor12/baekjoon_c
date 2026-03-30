#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int count = 0;
    // 오름차순 정렬
    sort(d.begin(), d.end()); 
    
    for(int i : d){
        budget -= i;
        if(budget >= 0){
            count++;
        }
        else{
            break;
        }
    }
    
    
    return count;
}