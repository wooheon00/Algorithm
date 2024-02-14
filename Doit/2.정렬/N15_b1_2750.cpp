#include<iostream>
#include<vector>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> arr;


	for (int i = 0; i < N; i++) {

		int tmp;
		cin >> tmp;
		arr.push_back(tmp);

	}

	for (int i = N-1; 0<i; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << arr[i] << "\n";
	}

	return 0;
}