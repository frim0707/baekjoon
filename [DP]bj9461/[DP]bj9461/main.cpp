#include <iostream>
using namespace std;

long long dp[101] = { 0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9, 12, 16, 21, 28, 37, };

long long func(int n) {
	if (n < 10) return dp[n];
	else {
		for (int i = 10; i <= n; i++) {
			dp[i] = dp[i - 1] + dp[i - 5];
		}
	return dp[n];
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int t; cin >> t;

	for (int i = 0; i < t; i++) {
		int n; cin >> n;
		cout << func(n) << "\n";
	}

	return 0;
}