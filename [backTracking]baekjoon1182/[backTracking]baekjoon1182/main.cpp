#include <iostream>
#include <vector>
using namespace std;

int N, S, ans = 0;
vector<int> v;

void bt(int num, int sum) {
	if (num == N) return;
	if (sum + v[num] == S) ans++;

	bt(num + 1, sum + v[num]);
	bt(num + 1, sum);
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> N >> S;
	for (int i = 0; i < N; i++) {
		int a; cin >> a;
		v.push_back(a);
	}

	bt(0, 0);
	cout << ans;

	return 0;
}

