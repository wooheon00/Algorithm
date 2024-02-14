#include<iostream>
#include<cstring>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int sol = 0;
	int S, P;
	cin >> S >> P;

	string input;
	cin >> input;

	int need[4] = {0};

	cin >> need[0];
	cin >> need[1];
	cin >> need[2];
	cin >> need[3];

	int inputarr[4] = {0,0,0,0};
	
	for (int i = 0; i < P; i++) {
		switch (input[i]) {
		case 'A':
			inputarr[0] += 1;
			break;
		case 'C':
			inputarr[1] += 1;
			break;
		case 'G':
			inputarr[2] += 1;
			break;
		case 'T':
			inputarr[3] += 1;
			break;
		}
	}

	bool ok = true;
	for (int j = 0; j < 4; j++) {
		if (need[j] > inputarr[j]) ok = false;
	}

	if (ok) {
		sol++;
	}


	for (int i = P; i < S; i++) {

		switch (input[i]) {
		case 'A':
			inputarr[0]++;
			break;
		case 'C':
			inputarr[1]++;
			break;
		case 'G':
			inputarr[2]++;
			break;
		case 'T':
			inputarr[3]++;
			break;
		}

		switch (input[i-P]) {
		case 'A':
			inputarr[0]--;
			break;
		case 'C':
			inputarr[1]--;
			break;
		case 'G':
			inputarr[2]--;
			break;
		case 'T':
			inputarr[3]--;
			break;
		}

		bool ok = true;
		for (int j = 0; j < 4; j++) {
			if (need[j] > inputarr[j]) ok = false;
		}

		if (ok) {
			sol++;
		}
	}


	
	cout << sol;
	return 0;
}