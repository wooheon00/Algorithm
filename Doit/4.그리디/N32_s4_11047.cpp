#include<iostream>
#include<stack>

using namespace std;

int main() {

	int n, k;

	cin >> n >> k;

	stack<int> coin;

	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		coin.push(tmp);
	}

	int sol = 0;

	while (!coin.empty()) {
		int now = coin.top();
		int a = k / now;
		sol += a;
		k -= a * now;
		coin.pop();
	}

	cout << sol;


	return 0;

}