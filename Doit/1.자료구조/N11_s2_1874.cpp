#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	stack<int> stk;
	vector<char> output;

	int* intarr = new int[N];


	for (int i = 0; i < N; i++) {

		int tmp;
		cin >> tmp;
		*(intarr + i) = tmp;

	}

	int count = 1;
	int popcount = 0;

	for (int i = 0; i < N; i++) {


		while (count <= *(intarr + i)) {
			stk.push(count);
			count++;
			output.push_back('+');
		}

		if (*(intarr + popcount) != stk.top()) {
			cout << "NO";
			return 0;
		}
		stk.pop();
		popcount++;
		output.push_back('-');

	}

	for (int i = 0; i < 2 * N; i++) {
		cout << output[i] << "\n";
	}


	return 0;

}