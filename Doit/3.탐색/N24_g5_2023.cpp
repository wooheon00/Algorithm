#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int x;
int n;
vector<int> ans;

bool Prime(int a);
void go();
int jari(int a);


int main() {

	cin >> n;

	x = 2;
	go();

	x = 3;
	go();

	x = 5;
	go();

	x = 7;
	go();


	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}


	return 0;

}

bool Prime(int a) {

	if (a == 1) return false;
	if (a == 2) return true;
	if (a == 3) return true;

	int b = a / 2;

	for (int i = 2; i <= b; i++) {
		if ((a % i) == 0) {return false;}
	}

	return true;

}

void go() {

	if (jari(x) == n) {
		ans.push_back(x);
		return;
	}

	for (int i = 1; i < 10; i++) {

		int pre = x;
		x = x * 10 + i;

		if (Prime(x)) {
			go();
		}
		x = pre;
	}
}

int jari(int a) {
	int ja = 1;

	while (a/10 != 0) {
		a = a / 10;
		ja++;
	}
	return ja;
}