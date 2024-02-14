#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// sort 후 가장 이동을 많이 한 것


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<pair<int, int>>A;
    vector<pair<int, int>>sA;

    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;

        pair<int, int>ptmp;
        ptmp.first = tmp;
        ptmp.second = i;

        A.push_back(ptmp);
        sA.push_back(ptmp);
    }

    sort(sA.begin(), sA.end());

    int max = 0;

    for (int i = 0; i < N; i++) {
        if (sA[i].second-i>max) {
            max = sA[i].second - i;
        }
    }

    cout << max+1;

	return 0;
}