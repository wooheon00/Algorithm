#include<iostream>
#include<cmath>
#include<vector>
#include <climits>

using namespace std;

int main() {

	long long a, b;
	cin >> a >> b;

	long long n = sqrt(b);

	vector<bool> arr;

	for (int i = 0; i <= n; i++) {
		arr.push_back(true);
	}

	arr[0] = false;
	arr[1] = false;

	for (long long i = 2; i <= sqrt(n); i++) {
		if (arr[i]) {
			for (long long j = 2; j * i <= n; j++) {
				arr[i * j] = false;
			}
		}
	}

	long long sol = 0;

	for (long long i = 0; i <= n; i++) {

		if (!arr[i]) continue;

		long long tmp = i;
		tmp *= i;

		while (tmp <= b) {
			if (tmp >= a) sol++;

			if (tmp> 9223372036854775807/i) break;

			tmp *= i;
		}
	}

	cout << sol;

	return 0;
}