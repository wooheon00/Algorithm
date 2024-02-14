#include <iostream>

using namespace std;

// 삽입정렬을 구현해봅시다. 같은 숫자는 없는걸로 하자

void Insertion(int arr[], int size) {

	for (int i = 1; i < size; i++) {
		int idx=i;
		for (int j = 0; j < i; j++) {

			int select = arr[i];

			if (arr[j] > select) {
				idx = j;

				for (int k = i; j < k; k--) {
					arr[k] = arr[k-1];
				}

				arr[j] = select;
				break;

			}
		}
	}
}


int main() {

	int arr[9] = { 1,5,10,2,8,15,26,100,23 };

	Insertion(arr, 9);

	for (int i = 0; i < 9; i++) {
		cout << arr[i] << " ";
	}

}