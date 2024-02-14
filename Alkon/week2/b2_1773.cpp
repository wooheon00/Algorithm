#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int student, time;
	cin >> student >> time;
	int* arr = new int[time+1];
	fill_n(arr, time + 1, 0);
	int* stu = new int[student];
	for (int i = 0; i < student; i++) {
		cin >> *(stu + i);
	}
	for (int i = 0; i < student; i++) {
		int t = *(stu + i);
		int tmp = t;
		while (tmp<=time) {
			*(arr + tmp) = 1;
			tmp += t;
		}
	}
	int sol = 0;
	for (int i = 0; i < time + 1; i++) {
		if (*(arr + i) == 1) {
			sol++;
		}
	}
	cout << sol;
	return 0;
}