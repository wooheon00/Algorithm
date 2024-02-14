#include<iostream>

using namespace std;

int main() {

	int num;
	int count = 0;
	cin >> num;
	int ord = num;
	int newint;

	while (1) {
		
		count++;

		int tmp;
		if (num < 10) {
			num = num * 10;
			newint = num + ((num % 10 + num / 10) % 10);
		}
		else {
			newint = (num % 10) * 10 + ((num % 10 + num / 10) % 10);
		}
		
		if (newint == ord) {
			break;
		}

		num = newint;
	}

	cout << count;
	return 0;
	
}