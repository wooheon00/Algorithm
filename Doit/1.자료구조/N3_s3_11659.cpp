#include<iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	int* intarr = new int[N + 1];
	int* solarr = new int[M];
	
	*(intarr) = 0;

	for (int i = 1; i < N+1; i++) {
		
		int tmp;
		cin >> tmp;
		*(intarr+i) = tmp + *(intarr+i-1);
	}

	for (int i = 0; i < M; i++) {
		int begin, end;
		cin >> begin >> end;
		*(solarr + i) = *(intarr + end) - *(intarr + begin - 1);
	}

	for (int i = 0; i < M; i++) {
		cout << *(solarr + i) << endl;
	}

	return 0;
}