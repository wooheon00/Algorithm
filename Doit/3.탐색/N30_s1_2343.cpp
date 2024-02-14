#include<iostream>
#include<vector>

using namespace std;

int pre;

int main() {


	int n, m;

	cin >> n >> m;

	vector<int> arr;

	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}


	int s = 1;
	int e = 1000000000;
	int med;


	while (1) {
		int sum = 0;
		int idx = 0;
		int count = 1;
		med = (s + e) / 2;

		while (idx < n) {

			sum += arr[idx];

			if (arr[idx] > med) {
				count = m + 1;
				break;
			}


			if (sum > med) {

				idx--;
				count++;
				sum = 0;
			}
			idx++;
		}

		if (count <= m) {
			e = med;
		}
		else {
			s = med+1;
		}

		if (pre == med) {
			break;
		}

		pre = med;

	}

	cout << med;

}