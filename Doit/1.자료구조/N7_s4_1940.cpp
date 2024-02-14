#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> intarr;

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		intarr.push_back(tmp);
	}

	sort(intarr.begin(), intarr.end());

	int start, end;
	start = 0;
	end = N - 1;
	int sol = 0;

	while (start < end) {

		int test = intarr[start] + intarr[end];

		if (test == M) {
			sol++;
			
			start++;
			end --;

		}
		else if (test > M) {
			end--;
		}
		else {
			start++;
		}

	}


	cout << sol;

	return 0;

}