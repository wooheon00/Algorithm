#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {


	int n, m;

	vector<int> nvec;
	vector<int> mvec;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		nvec.push_back(a);
	}

	cin >> m;

	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		mvec.push_back(a);
	}

	sort(nvec.begin(), nvec.end());
	

	for (int i = 0; i < n; i++) {

		if (binary_search(nvec.begin(), nvec.end(), mvec[i])) {
			cout << "1" << "\n";
		}
		else {
			cout << "0" << "\n";
		}
			

	}



	return 0;
}