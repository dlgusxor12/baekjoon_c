#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, T, P, size_num;
	int cnt = 0;
	int arr[6] = { 0, };

	cin >> N;
	for (int i = 0; i < 6; i++) {
		cin >> size_num;
		arr[i] = size_num;
	}
	cin >> T >> P;

	for (int i = 0; i < 6;i++) {
		cnt += (arr[i] / T + (arr[i] % T > 0));
	}
	cout << cnt << '\n';
	cout << N / P << " " << N % P;

}