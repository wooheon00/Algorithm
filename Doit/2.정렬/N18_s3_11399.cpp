#include<iostream>
#include<vector>

using namespace std;

// 삽입정렬을 이용해서 풀어보자
int main() {

	int N;
	cin >> N;

	vector<int> arr(N, 0);

	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		arr[i] = tmp;
	}

	for (int i = 0; i < N; i++) {
		int idx = 0;
		for (int j = 0; j < i; j++) {

			if (arr[i] < arr[j]) {

				int t = arr[i];
				for (int k = i; k > j; k--) {
					arr[k] = arr[k - 1];
				}

				arr[j] = t;

			}
		}

		int tmp = arr[idx];
	}

	int sum = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			sum += arr[j];
		}
	}

	cout << sum;

	return 0;
}