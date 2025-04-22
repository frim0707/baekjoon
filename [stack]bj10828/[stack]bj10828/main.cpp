#include <iostream>
#include <stack>
using namespace std;

int main() {
	int cnt; cin >> cnt;

	stack<int> s;

	while (cnt--) {
		string order; cin >> order;

		if (order == "push") {
			int n; cin >> n; s.push(n); // n 입력 받고 푸시
		}

		else if (order == "pop") {
			if (s.empty()) { cout << -1 << "\n"; } // pop() 했는데 스택 비어있으면 -1 리턴 예외 처리
			else { cout << s.top() << "\n"; s.pop(); } // pop() top값 리턴하고 제거
		}

		else if (order == "top") {
			if (s.empty()) { cout << -1 << "\n"; } // top() 했는데 스택 비어있으면 -1 리턴 예외 처리 
			else { cout << s.top() << "\n"; } // top() 스택 맨 윗 값 리턴
		}

		else if (order == "size") {
			cout << s.size() << "\n"; // size() 스택에 들어있는 정수 개수 리턴
		}

		else if (order == "empty") {
			cout << s.empty() << "\n"; // empty() 비어있으면 1 아님 0 리턴
		}
	}
	return 0;
}