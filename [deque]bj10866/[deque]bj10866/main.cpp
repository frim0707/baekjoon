#include <iostream>
#include <deque>
using namespace std;

int main() {
	int n; cin >> n;
	deque<int> d;
	while (n--) {
		string order; cin >> order;
		if (order == "push_front") {
			int x; cin >> x; d.push_front(x);
		}
		else if (order == "push_back") {
			int x; cin >> x; d.push_back(x);
		}
		else if (order == "pop_front") {
			if (d.empty()) cout << -1 << "\n";
			else { cout << d.front() << "\n"; d.pop_front(); }
		}
		else if (order == "pop_back") {
			if (d.empty()) cout << -1 << "\n";
			else { cout << d.back() << "\n"; d.pop_back(); }
		}
		else if (order == "size")  cout << d.size() << "\n";
		else if (order == "empty")  cout << d.empty() << "\n";
		else if (order == "front") {
			if (d.empty()) cout << -1 << "\n";
			else cout << d.front() << "\n";
		}
		else if (order == "back") {
			if (d.empty()) cout << -1 << "\n";
			else cout << d.back() << "\n";
		}
	}
	return 0;
}
