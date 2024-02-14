#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int n;
	cin >> n;

	vector<pair<int, int>> arr;


	for (int i = 0; i < n; i++) {

		int a, b;
		cin >> a >> b;

		pair<int, int> tmp;
		tmp.first = b;
		tmp.second = a;

		arr.push_back(tmp);
	}

	sort(arr.begin(), arr.end());

	int idx = 0;
	int sol = 0;
	int e = -1;

	while (idx < n) {

		if (arr[idx].second >= e) {
			e = arr[idx].first;
			sol++;
		}

		idx++;
	}

	cout << sol;
	return 0;

}