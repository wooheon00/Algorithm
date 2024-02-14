#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;

	cin >> m >> n;

	vector<bool> arr;

	for (int i = 0; i <= n + 1; i++) {
		arr.push_back(true);
	}

	arr[0] = false;
	arr[1] = false;

	for (int i = 2; i <= n/2; i++) {

		if (arr[i]) {
			for (int j = 2; j * i <= n; j++) {
				arr[i * j] = false;
			}
		}
	}

	for (int i = m; i <= n; i++) {

		if (arr[i]) {
			cout << i << "\n";
		}
	}


	return 0;

}
