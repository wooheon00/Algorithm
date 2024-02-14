#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<vector<pair<int, int>>> edge(100001);
vector<priority_queue<int>> dis(100001);

int Mark[100001];
int sol = 0;
void DFS(int x, int p, int c);


int main() {

	int n;
	cin >> n;

	int num = 1;
	while (num <= n) {

		int a;
		cin >> a;

		while (1) {
			int b, c;
			cin >> b;
			if (b == -1) break;

			cin >> c;
			pair<int, int> tmp; tmp.first = b; tmp.second = c;
			edge[a].push_back(tmp);
		}
		num++;
	}

	Mark[1] = 1;
	Mark[0] = 1;
	DFS(1,0,0);

	cout << sol;

	return 0;
}

void DFS(int x, int p, int c) {

	Mark[x] = 1;

	int size = edge[x].size();
	for (int i = 0; i < size; i++) {
		if (Mark[edge[x][i].first] == 0) {
			DFS(edge[x][i].first, x, edge[x][i].second);
		}
	}

	if (dis[x].empty()) {
		dis[p].push(c);
		return;
	}

	dis[p].push(dis[x].top() + c);

	if (dis[x].size() > 1) {

		int a = dis[x].top();
		dis[x].pop();
		int b = dis[x].top();

		if (a + b > sol) sol = a + b;
	}

	if (dis[x].top() > sol) sol = dis[x].top();
}

//그냥 DFS 2번하면 풀리는 문제였습니다.