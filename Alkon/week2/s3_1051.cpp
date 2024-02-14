#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

	int arr[50][50];
	fill(&arr[0][0], &arr[0][0] + sizeof(arr) / sizeof(int), -1);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		for (int j = 0; j < m; j++) {
			arr[i][j] = tmp[j]-'0';
		}
	}

	int sol = 1;

	for (int i = 0; i < 10; i++) {
		if (sol < arrfind(arr, i, n, m)) {
			sol = arrfind(arr, i, n, m);
		}
	}
	cout << sol;

	return 0;
}


int arrfind(int arr[][50], int search, int n, int m) {

	int len = 1;

	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {

			if (arr[i][j] == search) {
				int idx = j+1;
				while (idx < 50) {
					if (arr[i][idx] == search) {
						int l = idx - j;
						if ((i + l) < 50) {
							if ((arr[i + l][j] == search) && (arr[i + l][j + l] == search)) {
								if (len < l + 1) {
									len = l + 1;

								}
							}
						}						
					}
					idx++;
				}
			}
		}
	}
	return len * len;
}