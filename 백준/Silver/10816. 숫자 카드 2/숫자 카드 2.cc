#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int n, m;
vector<int> v;
unordered_map<int, int> maps;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	//벡터 생성
	cin >> n;
	int temp;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
	}

	for (int value : v) {
		maps[value]++;
	}


	//탐색
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> temp;
		cout << maps[temp] << "\n";
	}
}