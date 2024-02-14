#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int adding(const string& expression) {
    stringstream ss(expression); // 문자열 스트림으로 변환
    int sum = 0;
    int num;
    char op;

    while (ss >> num) {
        sum += num;
        ss >> op; // 연산자를 읽음
    }

    return sum;
}

pair<string, string> splitByFirstDash(const string& input) {
    size_t dashPos = input.find("-");
    if (dashPos != string::npos) {
        string firstPart = input.substr(0, dashPos);
        string secondPart = input.substr(dashPos + 1);
        return make_pair(firstPart, secondPart);
    }
    // "-"가 없을 경우 전체 문자열을 반환
    return make_pair(input, "");
}

int main() {
    string input;
    cin >> input;

    auto result = splitByFirstDash(input);


    string first = result.first;
    string second = result.second;

    cout << adding(first) - adding(second);


    return 0;
}