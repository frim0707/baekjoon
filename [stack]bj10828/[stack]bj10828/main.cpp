#include <iostream>
#include <stack>
using namespace std;

int main() {
	int cnt; cin >> cnt;

	stack<int> s;

	while (cnt--) {
		string order; cin >> order;

		if (order == "push") {
			int n; cin >> n; s.push(n); // n �Է� �ް� Ǫ��
		}

		else if (order == "pop") {
			if (s.empty()) { cout << -1 << "\n"; } // pop() �ߴµ� ���� ��������� -1 ���� ���� ó��
			else { cout << s.top() << "\n"; s.pop(); } // pop() top�� �����ϰ� ����
		}

		else if (order == "top") {
			if (s.empty()) { cout << -1 << "\n"; } // top() �ߴµ� ���� ��������� -1 ���� ���� ó�� 
			else { cout << s.top() << "\n"; } // top() ���� �� �� �� ����
		}

		else if (order == "size") {
			cout << s.size() << "\n"; // size() ���ÿ� ����ִ� ���� ���� ����
		}

		else if (order == "empty") {
			cout << s.empty() << "\n"; // empty() ��������� 1 �ƴ� 0 ����
		}
	}
	return 0;
}