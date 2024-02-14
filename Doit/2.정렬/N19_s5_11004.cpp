#include<iostream>
//시간초과뭐임? 그냥 merge
using namespace std;

void Quick(int arr[], int s, int e) {


	if (s >= e) return;
	if (s + 1 == e) {
		if (arr[s] > arr[e]) {
			int tmp = arr[e];
			arr[e] = arr[s];
			arr[s] = tmp;
		}
		return;
	}

	int pivot = arr[e];

	int start = s;
	int end = e - 1;
	bool st = false;
	bool en = false;


	while (start < end) {

		if (arr[start] < pivot) {
			start++;
		}
		else {
			st = true;
		}

		if (start == end) break;

		if (arr[end] > pivot) {
			end--;
		}
		else {
			en = true;
		}

		if (st && en) {
			int tmp = arr[end];
			arr[end] = arr[start];
			arr[start] = tmp;
			st = false;
			en = false;
		}
	}

	
	if (arr[start] < pivot) {
		for (int i = e - 1; start < i; i--) {
			arr[i + 1] = arr[i];
		}
		arr[start + 1] = pivot;
		Quick(arr, s, start);
		Quick(arr, start + 2, e);
	}
	else {
		for (int i = e - 1; start <= i; i--) {
			arr[i + 1] = arr[i];
		}
		arr[start] = pivot;
		Quick(arr, s, start - 1);
		Quick(arr, start + 1, e);
	}

	return;
}


int main() {

	int N, k;
	cin >> N >> k;

	int* arr = new int[N];


	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		*(arr + i) = tmp;
	}

	Quick(arr,0,N-1);

	cout << *(arr + k - 1);

	return 0;

}