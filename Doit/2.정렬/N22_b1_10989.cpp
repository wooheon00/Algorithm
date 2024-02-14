#include <iostream>

using namespace std;

int main() {


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int count[10001] = { 0 };

	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		count[tmp]++;
	}


	for (int i = 1; i < 10001; i++) {

		int value = count[i];

		for (int j = 0; j < value; j++) {
			cout << i << "\n";
		}
	}


}