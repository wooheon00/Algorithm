#include<iostream>

using namespace std;

long long n, k;
long long med;

long long id(int x);

int main() {

	cin >> n >> k;
	long long left = 1;
	long long right = min(long long(1000000000), n*n);
	while (1) {

		
		long long med = (left + right) / 2;
		// cout << left << " " << med << " " << right << endl;

		if (id(med) < k) { // 이러면 아예 답이 아님 med를 키워야 함.
			left = med+1;
		}
		else {				// 답일 수 있지만, 더 작은게 답일 수도 있음.
			right = med;
		}

		if (left == right) { 
			cout << left;
			break;
		}
	}


	return 0;

}


long long id(int x) {

	long long ans = 0;

	for (long long i = 1; i <= n; i++) {

		long long pivot = (x / i) * i;

		if (pivot > n * i) {
			ans += n;
		}
		else {
			ans += pivot / i;
		}
	}

	return ans;
}