// 자기 점수 중에 최댓값을 골랐다. 이 값을 M이라고 한다. 그리고 나서 모든 점수를 점수/M*100
// 예를 들어, 세준이의 최고점이 70이고, 수학점수가 50이었으면 수학점수는 50/70*100이 되어 71.43점

#include <iostream>
using namespace std;

int main() 
{
	int M;
	int max = 0;
	double avg = 0.0;
	double sum = 0.0;
	
	cin >> M;
	
	double* arr = new double[M];
	
	for (int i = 0; i < M; i++) {
		cin >> arr[i];
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	
	// 점수 수정
	for (int i = 0; i < M; i++) {
		arr[i] = (double) arr[i] / max * 100;
		sum += arr[i];
	}

	avg = sum / M;

	cout << avg;

}