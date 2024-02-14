#include<iostream>
#include<string>
#include<vector>

// 선택정렬을 이용한 알고리즘으로 풀어보자
using namespace std;

int main() {

	string input;
	cin >> input;

	int len = input.length();

	vector<int>A(len, 0);

	for (int i = 0; i < len; i++) {
		A[i] = input[i] - '0';
	}


	for (int i = 0; i < len; i++) {

		int idx = i;
		int max = -1;
		for (int j = i; j < len; j++) {

			

			if (A[j] > max) {
				max = A[j];
				idx = j;
			}
		}

		int tmp = A[i];
		A[i] = A[idx];
		A[idx] = tmp;

	}


	for (int i = 0; i < len; i++) {
		cout << A[i];
	}

}