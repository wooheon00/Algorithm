#include <iostream>
#include <vector>
// 왜 long은 안되고 long long은 되냐 시~~~~빨
long long sol = 0;
using namespace std;

void Merge(long long arr[], int s, int e);

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	long long* arr = new long long[N];
	
	for (int i = 0; i < N; i++) {
		long long tmp;
		cin >> tmp;
		arr[i] = tmp;
	}

	Merge(arr, 0, N-1);

	cout << sol;

	return 0;
}


void Merge(long long arr[], int s, int e) {

	int m = (s + e + 1) / 2;
	if (s == e) return;

	Merge(arr, s, m - 1);
	Merge(arr, m, e);

	int p1 = s;
	int p2 = m;
	vector<long> tmp;

	bool p1c = false;
	bool p2c = false;

	while (1) {

		if (arr[p1] <= arr[p2]) {
			tmp.push_back(arr[p1]);
			p1++;
		}
		else if (arr[p1] > arr[p2]) {
			tmp.push_back(arr[p2]);
			p2++;
			sol += m - p1;
		}

		if (p1 == m) {
			p1c = true;
			break;
		}
		else if (p2 == e + 1) {
			p2c = true;
			break;
		}
	}

	if (p1c) {
		while (p2 != e + 1) {
			tmp.push_back(arr[p2]);
			p2++;
		}
	}
	else if (p2c) {
		while (p1 != m) {
			tmp.push_back(arr[p1]);
			p1++;
		}
	}

	for (int i = 0; i < e - s + 1; i++) {
		arr[s + i] = tmp[i];
	}

	return;
}