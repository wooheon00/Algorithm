#include <iostream>
#include <vector>
//왜 시간초과
using namespace std;

void Merge(int arr[], int s, int e) {

	if (e<=s) return;

	int m = e + s + 1 / 2;

	Merge(arr, s, m - 1);
	Merge(arr, m, e);


	int p1 = s;
	int p2 = m;
	
	vector<int>tmp;
	bool p1c = false;
	bool p2c = false;

	while (1) {

		if (p1 == m) {
			p1c = true;
			break;
		}

		if (p2 == e + 1) {
			p2c = true;
			break;
		}




		if (arr[p1] < arr[p2]) {
			tmp.push_back(arr[p1]);
			p1++;
		}
		else {
			tmp.push_back(arr[p2]);
			p2++;
		}
	}


	if (p1c) {
		while (p2 != e + 1) {
			tmp.push_back(arr[p2]);
			p2++;
		}
	}

	if (p2c) {
		while (p1 != m) {
			tmp.push_back(arr[p1]);
			p1++;
		}
	}

	for (int i = 0; i < e - s + 1;i++) {
		*(arr + i) = tmp[i];
	}


}

int main() {


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int* arr = new int[N];

	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		*(arr + i) = tmp;
	}

	Merge(arr, 0, N - 1);

	for (int i = 0; i < N; i++) {
		cout << *(arr + i) << "\n";
	}




	return 0;

}