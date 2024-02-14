#include<iostream>
#include<vector>
#include<queue>
#include<stack>

using namespace std;

int BMark[1001];
int DMark[1001];

vector<priority_queue<int, vector<int>, greater<int>>> Bedge(1001);
vector<priority_queue<int, vector<int>, greater<int>>> Dedge(1001);
vector<int> dfsSol;
vector<int> bfsSol;
stack<int> dfsStack;
queue<int> bfsQueue;

void DFS();
void BFS();

int main() {

	int n, m, s;
	cin >> n >> m >> s;


	for (int i = 0; i < m; i++) {

		int a, b;
		cin >> a >> b;

		Bedge[a].push(b);
		Dedge[a].push(b);
		Bedge[b].push(a);
		Dedge[b].push(a);
	}


	dfsStack.push(s);
	bfsQueue.push(s);
	BMark[s] = 1;
	DMark[s] = 1;
	DFS();
	BFS();

	for (int i = 0; i < dfsSol.size(); i++) {
		cout << dfsSol[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < bfsSol.size(); i++) {
		cout << bfsSol[i] << " ";
	}



	return 0;

}

void DFS() {

	if (dfsStack.empty()) {
		return;
	}

	int now = dfsStack.top();
	dfsSol.push_back(now);
	dfsStack.pop();

	int size = Dedge[now].size();
	for (int i = 0; i < size; i++) {
		int a = Dedge[now].top();
		if (DMark[a] == 0) {
			dfsStack.push(a);
			DMark[a] = 1;
			DFS();
		}
		Dedge[now].pop();
	}



}

void BFS() {

	if (bfsQueue.empty()) {
		return;
	}

	int now = bfsQueue.front();
	bfsSol.push_back(now);
	bfsQueue.pop();

	int size = Bedge[now].size();
	for (int i = 0; i < size; i++) {
		int a = Bedge[now].top();
		if (BMark[a] == 0) {
			bfsQueue.push(a);
			BMark[a] = 1;
		}
		Bedge[now].pop();
	}

	BFS();

}
