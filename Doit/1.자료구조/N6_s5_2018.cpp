#include<iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int N;
	cin >> N;

	int sol = 1;
	int sum = 1;
	int start = 1;
	int end = 1;

	while (end != N) {

		if (sum == N) {
			sol++;
			end++;
			sum += end;
		}
		else if(sum < N) {
			end++;
			sum += end;
		}
		else {
			start++;
			sum -= (start - 1);
		}
	}

	cout << sol;

	return 0;
}