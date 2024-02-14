#include<iostream>
#include<vector>
#include<cstring>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main() {

	int n;
	cin >> n;
	
	int* arr = new int[n];
	int* intarr = new int[n];

	int change = 0;

	for (int i = 0; i < n; i++) {
		
		string tmp;
		cin >> tmp;

		int idx = 0;
		int a, b;

		while (tmp[idx + 1] != NULL) {

			a = tmp[idx] - '0';
			b = tmp[idx + 1] - '0';
			if (a != b) {
				change++;
			}
			idx++;

			if (tmp[idx + 1] == NULL) {
				int kk=0;
				if (tmp[idx] == '1') kk++;
				if (tmp[0] == '1') kk += 2;
				*(intarr+i) = kk;
			}
		}
	}

	int a00 = 0;
	int a01 = 0;
	int a10 = 0;
	int a11 = 0;

	for (int i = 0; i < n; i++) {
		int tmp = *(intarr + i);
		if (tmp == 0) {
			a00++;
		}
		else if (tmp == 1) {
			a01++;
		}
		else if (tmp == 2) {
			a10++;
		}
		else if (tmp == 3) {
			a11++;
		}
	}

	int ar=0;

	if (a01 + a10 == 0 && a00 * a11 != 0) {
		ar = 1;
		goto sd;
	}

	while (a01 * a10 != 0) {
		a01--; a10--;
	}
	
	if (a01 + a10 == 0) {
		ar = 0;
	}
	else {
		ar += a01 + a10 - 1;
	}

sd: change += ar;

	cout << change;

	return 0;
}