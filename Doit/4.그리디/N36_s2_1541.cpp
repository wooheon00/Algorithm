#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int adding(const string& expression) {
    stringstream ss(expression); // ���ڿ� ��Ʈ������ ��ȯ
    int sum = 0;
    int num;
    char op;

    while (ss >> num) {
        sum += num;
        ss >> op; // �����ڸ� ����
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
    // "-"�� ���� ��� ��ü ���ڿ��� ��ȯ
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