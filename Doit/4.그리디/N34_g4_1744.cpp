#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main() {

	int sol = 0;
	int n;
	cin >> n;

	if (n == 1) {
		int tmp;
		cin >> tmp;
		cout << tmp;
		return 0;
	}

	deque<int> arr;

	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}

	sort(arr.begin(), arr.end());

	while (arr.size()>1) {
		if (arr[0] < 1 && arr[1] < 1) {
			sol += arr[0] * arr[1];
			arr.pop_front();
			arr.pop_front();
		}
		else {
			break;
		}
	}

	while (!arr.empty()) {

		if (arr.front() < 2) {
			sol += arr.front();
			arr.pop_front();
		}
		else {
			break;
		}
	}

	reverse(arr.begin(), arr.end());

	while (arr.size()>1) {

		sol += arr[0] * arr[1];
		arr.pop_front();
		arr.pop_front();
		
	}

	if (!arr.empty()) {
		sol += arr[0];
	}

	cout << sol;







}