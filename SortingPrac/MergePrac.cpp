#include <iostream>
#include <queue>

using namespace std;

//김성열은 신이다.

void Merge(int arr[], int n) {


	if (n == 1) {
		return;
	}

	int m = n / 2;

	Merge(arr, m);
	Merge(arr + m, n-m);

	queue<int> arr1;
	queue<int> arr2;

	for (int i = 0; i < m; i++) {
		arr1.push(arr[i]);
	}

	for (int i = m; i < n; i++) {
		arr2.push(arr[i]);
	}

	for (int i = 0; i < n; i++) {

		if (arr1.empty()) {
			arr[i] = arr2.front();
			arr2.pop();
			continue;
		}

		if (arr2.empty()) {
			arr[i] = arr1.front();
			arr1.pop();
			continue;
		}


		if (arr1.front() > arr2.front()) {
			arr[i] = arr2.front();
			arr2.pop();
		}
		else {
			arr[i] = arr1.front();
			arr1.pop();
		}
	}
}





int main() {

	int arr[20] = { 5,10,2,8,15,26,100,23,72,45,25,2723,34,2536,3432,251635,3423234,6175,3462,1 };

	Merge(arr, 20);

	for (int i = 0; i < 20; i++) {
		cout << arr[i] << " ";
	}



}