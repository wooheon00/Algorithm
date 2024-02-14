#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

int main() {

	int num;
	cin >> num;
	vector<string> arr;

	for (int i = 0; i < num; i++) {
		string tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}

	for (int i = 0; i < num; i++) {
		string tmp = arr[i];
		char ary[80];
		memset(ary, 0, sizeof(ary));
		memcpy(ary, tmp.c_str(), tmp.length());

		int point=0;
		int sum = 0;
		for (int j = 0; j < 80; j++) {

			if (ary[j] == 'O') {
				point++;
				sum += point;
			}
			else {
				point = 0;
			}

		}
		cout << sum << endl;
	}
	return 0;
}