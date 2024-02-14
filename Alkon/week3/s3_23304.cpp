#include <iostream>
#include <cstring>

using namespace std;
static bool akaraka = true;

void aka(string s);

int main() {

	string str;
	cin >> str;

	aka(str);

	if (akaraka) {
		cout << "AKARAKA";
	}
	else {
		cout << "IPSELENTI";
	}

	return 0;
}

void aka(string s) {

	int len = s.length();

	if (len == 1) {
		return;
	}

	string str1;
	string str2;

	for (int i = 0; i < len / 2; i++) {
		str1 += s[i];
	}
	for (int i = len-len/2; i<len ; i++) {
		str2 += s[i];
	}

	if (str1.compare(str2) != 0) {
		akaraka = false;
	}

	aka(str1);
	aka(str2);

}