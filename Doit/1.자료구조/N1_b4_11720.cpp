#include<iostream>

using namespace std;

int main() {

	int num;
	string numstr;
	cin >> num;
	cin >> numstr;
	int sum = 0;
	for (int i = 0; i < num; i++) {
		
		sum += numstr[i] - '0';

	}
	
	cout << sum;
	return 0;
}