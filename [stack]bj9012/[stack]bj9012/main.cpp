#include <iostream>
#include <stack>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		stack<int> vps; string n; cin >> n;
		int cnt = 0;
		for (int i = 0; i < n.length(); i++) {
			if (n[i] == '(') vps.push(n[i]);
			else {
				if (vps.empty()) { cnt = 1; break; }
				else vps.pop();
			}
		}
		if (!cnt && vps.empty()) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
	return 0;
}