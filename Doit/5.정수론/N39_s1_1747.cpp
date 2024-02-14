#include<iostream>
#include<queue>

using namespace std;

bool isPal(int x);

int main() {


	isPal(1521415);


	return 0;
}

bool isPal(int x) {

	deque<char> string;

	int a = x;

	while (1) {

		int tmp = a % 10;

		string.push_back((char)tmp);

		a = a / 10;

		if (a < 10) {
			cout << tmp;
			string.push_back((char)tmp);
			break;
		}
	}

	for (int i = 0; i < string.size(); i++) {
		
		char tmp = string.back();
		cout << tmp << endl;
		string.pop_back();
	}

	return 1;

}