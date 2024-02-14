#include<iostream>
#include<queue>
#include<cmath>

using namespace std;

struct myabs
{
	bool operator()(int n1, int n2) {

		if (abs(n1) > abs(n2)) {
			return true;
		}
		else if (abs(n1) == abs(n2)) {
			if (n1 > n2) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
};

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	priority_queue<int, vector<int>, myabs> pq;
	vector<int> result;
	for (int i = 0; i < N; i++) {

		int tmp;
		cin >> tmp;
		

		if (tmp == 0) {

			if (pq.empty()) {
				result.push_back(0);
			}
			else {
				result.push_back(pq.top());
				pq.pop();
			}
		}
		else {
			pq.push(tmp);
		}
	}

	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << "\n";
	}


	return 0;

}