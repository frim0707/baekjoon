#include <iostream>
using namespace std;

long long dp[36];

long long func(int n) {

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			dp[i] += dp[j] * dp[i - j - 1];
		}
	}

	return dp[n];
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int n; cin >> n;
	fill(dp, dp + n + 1, 0);
	dp[0] = 1;
	cout << func(n);

	return 0;
}