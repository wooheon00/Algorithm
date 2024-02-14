#include <iostream>
#include <vector>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<vector<int>> intarr(N + 1, vector<int>(N + 1,0));
	//vector 선언하는 법 알아두기
	

	for (int i = 1; i < N + 1; i++) {
		for (int j = 1; j < N + 1; j++) {
			int tmp;
			cin >> tmp;
			intarr[i][j] = intarr[i - 1][j] + intarr[i][j - 1] - intarr[i - 1][j - 1] + tmp;
		}
	}

	for (int i = 0; i < M; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int a, b, c, d;
		a = intarr[x2][y2];
		b = intarr[x1-1][y1-1];
		c = intarr[x2][y1-1];
		d = intarr[x1-1][y2];
		cout << a + b - (c + d) << endl;
	}

	return 0;
}