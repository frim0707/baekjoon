#include <iostream>
using namespace std;

int x, n;

void underbar(int n) {
	for (int i = 0; i < x - n; i++) {
		cout << "____";
	}
}

void bt(int n) {
	underbar(n);
	cout << "\"����Լ��� ������?\"" << "\n";
	if (!n) {
		underbar(n);
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << "\n";
		underbar(n);
		cout << "��� �亯�Ͽ���." << "\n";
		return;
	}
	else {
		underbar(n);
		cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << "\n";
		underbar(n);
		cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���." << "\n";
		underbar(n);
		cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << "\n";
		bt(n - 1);
	}
	underbar(n);
	cout << "��� �亯�Ͽ���." << "\n";
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n; x = n;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << "\n";
	bt(n);

	return 0;
}