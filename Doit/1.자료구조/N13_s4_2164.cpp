#include<iostream>
#include<deque>

using namespace std;

int main() {

	int N;
	cin >> N;
	deque<int> arr;

	for (int i = 1; i <= N; i++) {
		arr.push_back(i);
	}

	while (arr.size() != 1) {

		arr.pop_front();
		int tmp = arr.front();
		arr.pop_front();
		arr.push_back(tmp);
	}


	cout << arr.front();


	return 0;
}