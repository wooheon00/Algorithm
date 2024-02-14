#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	if (N < 3) {
		cout << 0;
		return 0;
	}

	vector<long long> longarr(N, 0);

	for (int i = 0; i < N; i++) {
		long long tmp;
		cin >> tmp;
		longarr[i] = tmp;
	}

	sort(longarr.begin(), longarr.end());

	int good = 0;

	int checkidx = N - 1;

	while (checkidx >= 0) {

		long long checkgood = longarr[checkidx];

		int end = N - 1;
		int start = 0;


		while (start < end) {

			if (start == checkidx) start++;
			if (end == checkidx) end--;


			if (longarr[start] + longarr[end] == checkgood) {
				good++;
				break;
			}
			else if (longarr[start] + longarr[end] < checkgood) {
				start++;
			}
			else {
				end--;
			}

			if (start == checkidx) start++;
			if (end == checkidx) end--;

		}

		checkidx--;
	}

	cout << good;
	

	return 0;
}