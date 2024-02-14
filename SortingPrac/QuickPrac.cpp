#include <iostream>

static int count = 0;

using namespace std;

// 퀵정렬을 구현해봅시다. 같은 숫자는 없는걸로 하자
// 나중에 다시 다듬어 보자.

void Quick(int arr[], int s, int e) {

	int pivot = arr[e];

	int start, end;
	start = s;
	end = e - 1;


	if (s == e) {
		return;
	}
	else if (s + 1 == e) {
		if (arr[s] > arr[e]) {
			int tmp = arr[s];
			arr[s] = arr[e];
			arr[e] = tmp;
		}
		return;
	}
	else if(s-1 ==e) {
		return;
	}

	bool ss = false;
	bool ee = false;

	while (end > start) {

		if (arr[start] < pivot) {
			start++;
		}
		else {
			ss = true;
		}

		if (arr[end] > pivot) {
			end--;
		}
		else {
			ee = true;
		}

		if (ee && ss) {
			int tmp = arr[end];
			arr[end] = arr[start];
			arr[start] = tmp;

			ee = false; ss = false;
		}

	}


	if (end == start) {
		if (pivot < arr[end]) {
			end--;
		}
		else {
			start++;
		}
	}

	for (int i = e; start < i; i--) {
		arr[i] = arr[i - 1];
	}

	arr[start] = pivot;

	Quick(arr, s, end);
	Quick(arr, start+1, e);
	

}


int main() {

	int arr[20] = { 5,10,2,8,15,26,100,23,72,45,25,2723,34,2536,3432,251635,3423234,6175,3462,1 };

	Quick(arr, 0, 19);

	for (int i = 0; i < 20; i++) {
		cout << arr[i] << " ";
	}

}