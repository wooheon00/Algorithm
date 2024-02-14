#include <iostream>
#include <vector>

using namespace std;

int sol = 0;
void DFS(int x, int n);
int count = 1;
int Mark[2000];

vector<vector<int>> v(2000);

int main() {


	int n, m;
	cin >> n >> m;
	

	int a, b;

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	for (int i = 0; i < n; i++) {
		DFS(i, 1);
	}

	cout << sol;

	return 0;
}

void DFS(int x, int n) {

	

	if (n == 5) {
		sol = 1;
		return;
	}

	Mark[x] = 1;
	for (int i = 0; i < v[x].size(); i++) {
		if (Mark[v[x][i]] == 0) {
			DFS(v[x][i], n + 1);
		}
	}
	Mark[x] = 0;
}