#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin >> num;

	vector<pair<int,int>> arr;

	for (int i = 0; i < num; i++) {
		
		int a, b;
		cin >> a;
		cin >> b;
		pair<int,int> tmp;
		tmp.first = a;
		tmp.second = b;
		arr.push_back(tmp);
	}
	
	sort(arr.begin(), arr.end());

	for (int i = 0; i < num; i++) {

		cout << arr[i].first << " " << arr[i].second << "\n";
	}

	return 0;
}