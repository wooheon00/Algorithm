#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> input(N, 0);
	vector<int> result(N, -1);
	stack<int> stk;

	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		input[i] = tmp;
	}

	stk.push(0);

	for (int i = 1; i < N; i++) {
		
		while (!stk.empty() && input[stk.top()] < input[i]) {

			result[stk.top()] = input[i];
			stk.pop();

		}

		stk.push(i);

	}

	for (int i = 0; i < N; i++) {
		cout << result[i] << " ";
	}

	return 0;

}