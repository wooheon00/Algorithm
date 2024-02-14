#include <iostream>

using namespace std;

// 버블정렬을 구현해봅시다. 같은 숫자는 없는걸로 하자

void bubble(int arr[], int size){

	for (int i = size; i > 1 ; i--) {
		for (int j = 0; j < i-1; j++) {
			if (arr[j] > arr[j + 1]) {

				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;

			}
		}
	}
}


int main() {

	int arr[5] = { 1,5,10,2,8 };

	bubble(arr, 5);

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}

}