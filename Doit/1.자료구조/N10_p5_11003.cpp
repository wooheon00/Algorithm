#include<iostream>
#include<vector>
#include<deque>

using namespace std;

int main() {

	// 우선순위 queue와 deque, pair을 사용할 줄 알아야 한다...

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	deque<pair<int, long>> deq;

	int N, L;
	cin >> N >> L;

	vector<long> longarr(N, 0);

	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		longarr[i] = tmp;
	}

	pair<int, long> fp;
	fp.first = 0;
	fp.second = longarr[0];
	deq.push_back(fp);
	cout << longarr[0] << " ";

	for (int i = 1; i < N; i++) {

		while (deq.back().second > longarr[i]) {
			deq.pop_back();
			if (deq.empty()) {
				break;
			}
		}

		pair<int, long> tmp;
		tmp.first = i;
		tmp.second = longarr[i];
		deq.push_back(tmp);

		if (deq.front().first <= i - L) {
			deq.pop_front();
		}
		
		cout << deq.front().second << " ";
	}

	return 0;

}