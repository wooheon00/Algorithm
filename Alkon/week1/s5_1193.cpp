#include<iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin >> num;
	int count=1;
	while (1) {

		int sum = count * (count + 1) / 2;

		if (sum < num) {
			count++;
		}
		else {
			break;
		}
	}

	int idx = num - count * (count - 1) / 2;
	int a = count - idx + 1;
	int b = idx;

	if (!(count % 2)) {
		int tmp = a;
		a = b;
		b = tmp;
	}

	cout << a << "/" << b;
	return 0;
}