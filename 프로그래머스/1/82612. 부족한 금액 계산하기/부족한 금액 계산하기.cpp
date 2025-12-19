#include <algorithm>
using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long value = 0;
    
    for(int i=1; i<=count; i++){
        value += price * i;
    }
    
    answer = (money - value);
    
    if(answer < 0){
        return abs(answer);
    }
    else{
        return 0;
    }
}