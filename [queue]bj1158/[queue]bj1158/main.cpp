#include <iostream>
#include <queue>
using namespace std;

int arr[5001];

int main() {
	int n, k; cin >> n >> k;
	queue<int> q;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	cout << "<";

	while (!q.empty()) {
		for (int i = 0; i < k - 1; i++) {
			q.push(q.front()); q.pop();
		}
		if (!(q.size() == 1)) { cout << q.front() << ", "; q.pop(); }
		else if (q.size() == 1) { cout << q.front(); q.pop(); }
	}

	cout << ">";

	return 0;
}