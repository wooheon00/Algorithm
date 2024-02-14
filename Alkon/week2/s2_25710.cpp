#include<iostream>

using namespace std;

int point(int a, int b);

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int arr[1000] = { 0 };

	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		arr[tmp]++;
	}

	int sol = 0;

	for (int i = 0; i < 1000; i++) {
		for (int j = 0; j < 1000; j++) {
			if (arr[i] * arr[j] != 0) {
				if (sol < point(i, j)) {
					if (i == j && arr[i] < 2) continue;
					sol = point(i, j);
				}
			}
		}
	}

	cout << sol;
	
	return 0;
}

int point(int a, int b) {

	int tmp = a * b;
	int sum = 0;

	while (tmp > 0) {
		sum += tmp % 10;
		tmp /= 10;
	}

	return sum;
}