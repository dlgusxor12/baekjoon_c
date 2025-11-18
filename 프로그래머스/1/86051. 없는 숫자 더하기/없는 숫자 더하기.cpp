#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> numbers) {
    int arr[10] = {0,};
    int result = 0;
    
    for(int i=0; i<numbers.size(); i++){
        arr[numbers[i]] = 1;
    }
    
    for(int i=0; i<10; i++){
        if(arr[i] == 0){
            result += i;
        }
    }
    
    return result;
}