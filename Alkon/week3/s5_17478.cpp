#include <iostream>

using namespace std;

static int abc = -1;
static int num;
void fun();

int main() {

	cin >> num;

	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << endl;

	fun();

	return 0;
}

void fun() {

	abc++;

	for (int i = 0; i < abc; i++) {
		cout << "____" ;
	}
	cout << "\"����Լ��� ������?\"" << endl;

	if (abc != num) {
		for (int i = 0; i < abc; i++) {
			cout << "____";
		}
		cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << endl;
		for (int i = 0; i < abc; i++) {
			cout << "____";
		}
		cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���." << endl;
		for (int i = 0; i < abc; i++) {
			cout << "____";
		}
		cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << endl;

		fun();
	}
	else {
		for (int i = 0; i < abc; i++) {
			cout << "____";
		}
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << endl;
	}
	
	for (int i = 0; i < abc; i++) {
		cout << "____";
	}
	cout << "��� �亯�Ͽ���." << endl;

	abc--;
}