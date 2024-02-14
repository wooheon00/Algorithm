#include <iostream>

using namespace std;

// 선택정렬을 구현해봅시다. 같은 숫자는 없는걸로 하자

void selection(int arr[], int size) {

	for (int i = size; 0 < i; i--) {
		int idx = 0;
		int max = arr[0];
		for (int j = 0; j < i; j++) {
			if (max < arr[j]) {
				max = arr[j];
				idx = j;
			}
		}

		int tmp = arr[i-1];
		arr[i - 1] = max;
		arr[idx] = tmp;

	}
}


int main() {

	int arr[9] = { 1,5,10,2,8,15,26,100,23 };

	selection(arr, 9);

	for (int i = 0; i < 9; i++) {
		cout << arr[i] << " ";
	}

}