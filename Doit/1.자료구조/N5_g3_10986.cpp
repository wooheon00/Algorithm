#include<iostream>
#include<vector>

using namespace std;
long sig(long a);

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long result_arr[1000] = { 0 };
	long N, M;
	cin >> N >> M;

	long* intarr = new long[N];

	long first_tmp;
	cin >> first_tmp;
	*(intarr) = first_tmp % M;
	
	
	for (int i = 1; i < N; i++) {
		long tmp;
		cin >> tmp;
		long ins = (tmp + *(intarr + i - 1)) % M;
		*(intarr + i) = ins;
	}


	for (int i = 0; i < N; i++) {
		result_arr[*(intarr+i)]++;
	}

	long sol = 0;

	sol += sig(result_arr[0] + 1);

	for (int i = 1; i < 1000; i++) {
		sol += sig(result_arr[i]);
	}

	cout << sol;

	return 0;

}

long sig(long a) {

	if (a == 0) return 0;

	return (a * (a - 1)) / 2;
}