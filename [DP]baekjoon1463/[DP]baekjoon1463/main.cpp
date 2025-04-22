#include <iostream>
using namespace std;

int dp[1000001];

int func(int x) {
	if (x == 1) return 0;
	else if (dp[x] != -1) return dp[x];

	int res = func(x - 1) + 1;
	if (x % 3 == 0) res = min(res, func(x / 3) + 1);
	if (x % 2 == 0) res = min(res, func(x / 2) + 1);

	return dp[x] = res;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int N; cin >> N;
	fill(dp, dp + N + 1, -1);

	cout << func(N);
}