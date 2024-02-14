#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int num;
	cin >> num;

	vector<int> arr;

	for (int i = 0; i < num; i++) {
		int tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}

	sort(arr.begin(), arr.end());

	float max = arr.back();

	float sum = 0;

	for (int i = 0; i < num; i++) {
		sum += (arr[i] / max) * 100;
	}

	cout << sum / num;

	return 0;

}