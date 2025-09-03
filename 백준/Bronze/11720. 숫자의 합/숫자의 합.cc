//N개의 숫자가 공백 없이 쓰여있다.이 숫자를 모두 합해서 출력하는 프로그램

#include <iostream>
#pragma warning (disable:4996)
using namespace std;

int main()
{
	int n;
	int a = 0;
	int sum = 0;

	scanf("%d", &n);

	int* arr = new int[n];

	for (int i = 0; i < n + 1; i++) {
		a = getchar();
		a -= 48;
		sum += a;
	}
	cout << sum + 38;
}