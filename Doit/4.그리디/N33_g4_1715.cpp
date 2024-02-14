#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int main() {


	int n;
	cin >> n;

	int sol = 0;

	priority_queue<int, vector<int>, greater<int>> pq;

	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		pq.push(tmp);
	}

	while(pq.size() > 1) {

		int a, b;
		a = pq.top();
		pq.pop();
		b = pq.top();
		pq.pop();
		int c = a + b;
		pq.push(c);
		
		sol += c;
	}

	cout << sol;

	return 0;

}