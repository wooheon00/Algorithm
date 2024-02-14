#include<iostream>

using namespace std;

__int64 get_value(__int64 a);
__int64 get_jaritsu(__int64 a);

int main() {

	__int64 n;
	cin >> n;

	if (n == -1) {
		exit(0);
	}

	__int64 count = n;
	__int64 sol = 0;
	__int64 jaritsu = get_jaritsu(n);

	for (int i = 0; i < 9 * jaritsu; i++) {

		if (count <= 0) {
			break;
		}
		if (get_value(count) == n) {
			sol = count;
		}
		count--;
	}

	cout << sol << endl;




	
	return 0;
}

__int64 get_value(__int64 a) {

	__int64 sum = 0;
	sum += a;
	
	while (a > 0) {
		sum += a % 10;
		a /= 10;
	}

	return sum;
}

__int64 get_jaritsu(__int64 a) {

	__int64 count = 0;

	while (a > 0) {
		count++;
		a /= 10;
	}

	return count;
}