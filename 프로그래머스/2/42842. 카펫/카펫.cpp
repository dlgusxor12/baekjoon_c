#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int value = brown + yellow;
    int cnt = 3;
    
    while(1){
        if(value % cnt == 0){
            int row = value / cnt;
            int col = cnt;
            if((row*(col-2)-2*(col-2))==yellow){
                answer.push_back(row);
                answer.push_back(col);
                break;
            }
            cnt++;
        }else{
            cnt++;
        }
    }
    
    return answer;
}