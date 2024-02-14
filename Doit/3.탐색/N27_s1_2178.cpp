#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int sol = 2;
vector<vector<char>> miro;
int n, m;
queue<pair<int, int>> miroQ;

void BFS();

int main() {


	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			miro[i].push_back('2');
		}
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char a;
			cin >> a;
			miro[i][j] = a;
		}
	}


	pair<int, int> a;
	a.first = 0;
	a.second = 0;
	miroQ.push(a);

	BFS();

	cout << sol;

	return 0;

}


void BFS() {

	int size = miroQ.size();
	if (size == 0) return;

	for (int i = 0; i < size; i++) {

		pair<int, int> tmp;
		tmp = miroQ.front();
		int a, b;
		a = tmp.first;
		b = tmp.second;
		a -= 1;
		b -= 1;


		if (miro[a+1][b] == '1') {
			miro[a + 1][b] = 'X';
			pair<int, int> tmp1;
			tmp1.first = a + 1;
			tmp1.second = b;
			miroQ.push(tmp1);
			if (a + 1 == n && b == m) {
				return;
			}
		}
		if (miro[a][b+1] == '1') {
			miro[a][b+1] = 'X';
			pair<int, int> tmp2;
			tmp2.first = a;
			tmp2.second = b+1;
			miroQ.push(tmp2);
			if (a == n && b+1 == m) {
				return;
			}
		}
		if (miro[a-1][b] == '1') {
			miro[a - 1][b] = 'X';
			pair<int, int> tmp3;
			tmp3.first = a-1;
			tmp3.second = b;
			miroQ.push(tmp3);
			if (a-1 == n && b == m) {
				return;
			}
		}
		if (miro[a][b-1] == '1') {
			miro[a][b-1] = 'X';
			pair<int, int> tmp4;
			tmp4.first = a;
			tmp4.second = b-1;
			miroQ.push(tmp4);
			if (a == n && b-1 == m) {
				return;
			}
		}

		miroQ.pop();
	}


	sol++;
	BFS();

}

