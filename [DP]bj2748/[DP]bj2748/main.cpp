#include <iostream>
using namespace std;

long long dp[91];

long long fibo(int n) {
	if (n == 0) return 0;
	else if (n == 1) return 1;
	if (dp[n] != -1) return dp[n];

	dp[n] = fibo(n - 1) + fibo(n - 2);
	return dp[n];
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int n; cin >> n;
	fill(dp, dp + n + 1, -1);
	dp[0] = 0;
	cout << fibo(n);
	return 0;
}