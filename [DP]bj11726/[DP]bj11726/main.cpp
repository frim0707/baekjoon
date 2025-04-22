#include <iostream>
using namespace std;

long long dp[1001];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	
	int n; cin >> n;
	
	dp[1] = 1; dp[2] = 2;
	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
	}
	cout << dp[n];

	return 0;
}




//int func(int n) {
//	int total = 0;
//
//	if (total == n) { ans++; return; }
//	else if (total > n) { return; }
//
//	for (int i = 0; i < n; i++) {
//		if (!used[i]) {
//			used[i] = 1; used[i + 1] = 1;
//			dp[i] = 1; dp[i + 1] = 1;
//			func(i);
//			for (int j = 0; j < i; j++)
//			{
//				func(j);
//			}
//			used[i] = 0; used[i + 1] = 0;
//			dp[i] = 0; dp[i + 1] = 0;
//		}
//	}
//	return ans / 10007;
//}
// 이게 뭔 삽질이냐.... '귀납 -> 점화식 세우기' 잘 기억하자 