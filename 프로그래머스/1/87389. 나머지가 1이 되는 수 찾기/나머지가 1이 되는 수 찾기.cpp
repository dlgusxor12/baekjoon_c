#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int value = n - 1;
    int cnt = 2;
    
    while(1){
        if(value % cnt == 0){
            answer = cnt;
            break;
        }
        cnt++;
    }
    
    return answer;
}