#include <iostream>
#include <cstring>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num, index;
	int arr[21] = { 0, };
	string case_ex;

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> case_ex;
		if (case_ex == "all") {
			for (int i = 0; i < 20; i++) {
				arr[i+1] = 1;
			}
		}
		else if (case_ex == "empty") {
			memset(arr, 0, sizeof(arr));
		}


		else if (case_ex == "add") {
			cin >> index;
			if (arr[index] == 0) {
				arr[index] = 1;
			}
		}
		else if (case_ex == "remove") {

			cin >> index;
			if (arr[index] == 1) {
				arr[index] = 0;
			}
		}
		else if (case_ex == "check") {

			cin >> index;
			if (arr[index] == 1) {
				cout << 1 <<'\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (case_ex == "toggle") {

			cin >> index;
			if (arr[index] == 1) {
				arr[index] = 0;
			}
			else {
				arr[index] = 1;
			}
		}
		
	}
}