#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	int sum = 0;
	vector<int> arr;

	for (int i = 0; i < 9; i++) {
		int tmp;
		cin >> tmp;
		arr.push_back(tmp);
		sum += arr[i];
	}

	int find = sum - 100;

	sort(arr.begin(), arr.end());

	int start, end;
	start = 0;
	end = 8;

	while (1) {

		int sum = arr[start] + arr[end];

		if (sum < find) {
			start++;
		}
		else if (sum > find) {
			end--;
		}
		else {
			break;
		}
	}
	
	arr.erase(arr.begin() + start);
	arr.erase(arr.begin() + end - 1);

	for (int i = 0; i < 7; i++) {
		cout << arr[i] << "\n";
	}

	return 0;
}