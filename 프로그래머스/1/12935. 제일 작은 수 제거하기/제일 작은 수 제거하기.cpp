#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

vector<int> solution(vector<int> arr) {
    int min = 0;
    vector<int> answer;
    
    if(arr.size() == 1){
        arr.pop_back();
        arr.push_back(-1);
        return arr;
    }
    
    for(int i=0; i<arr.size(); i++){
        if(i == 0){
            min = arr[i];
        }
        
        if(arr[i]<min){
            min = arr[i];
        }
    }
    auto it = find(arr.begin(), arr.end(), min);
    int dis = distance(arr.begin(), it);
    
    arr.erase(arr.begin() + dis);
    
    return arr;
    
}