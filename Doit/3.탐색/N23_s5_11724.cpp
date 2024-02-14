#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>

using namespace std;

void DFS(int T, vector<pair<int, int>> l, vector<bool>& v, int& re);


int main() {

	int N, M;
	cin >> N >> M;
	int result = 0;

	vector<pair<int, int>> link;
	vector<bool> visited(N + 1, false);

	for (int i = 0; i < M; i++) {

		int a, b;
		cin >> a >> b;

		pair<int, int> tmp1;
		pair<int, int> tmp2;

		tmp1.first = a;
		tmp2.first = b;
		tmp1.second = b;
		tmp2.second = a;
		
		link.push_back(tmp1);
		link.push_back(tmp2);
	}

	for (int i = 1; i < N + 1; i++) {
		DFS(i,link,visited,result);
	}


	cout << result;

	return 0;


}


void DFS(int T, vector<pair<int,int>> l, vector<bool>& v, int& re) {
	
	stack<int> stk;

	if (v[T]) return;

	stk.push(T);
	v[T] = true;
	re++;

	while (!stk.empty()) {

		int tam = stk.top();
		stk.pop();

		for (int i = 0; i < l.size(); i++) {

			if (l[i].first == tam) {
				if (!v[l[i].second]) {
					stk.push(l[i].second);
					v[l[i].second] = true;
				}
			}
		}
	}
}