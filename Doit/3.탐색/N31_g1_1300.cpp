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

		if (id(med) < k) { // �̷��� �ƿ� ���� �ƴ� med�� Ű���� ��.
			left = med+1;
		}
		else {				// ���� �� ������, �� ������ ���� ���� ����.
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