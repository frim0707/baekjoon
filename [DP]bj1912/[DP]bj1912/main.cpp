#include <iostream>
using namespace std;

int arr[100001];
int dp[100001];

int func(int n) {
	dp[1] = arr[1];
	int ans = dp[1];

	for (int i = 1; i <= n; i++) {
		dp[i] = max(arr[i], dp[i - 1] + arr[i]);
		ans = max(ans, dp[i]);
	}

	return ans;
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	cout << func(n);

	return 0;
}


//int func(int n) {
//	int ans = 0;
//	dp[1] = arr[1];
//
//	for (int i = 2; i <= n; i++) {
//		if (arr[i - 1] < arr[i]) {
//			dp[i] = arr[i - 1] + arr[i];
//			if (dp[i - 1] < dp[i]) {
//				ans = dp[i];
//			}
//		}
//	}
//
//	return ans;
//}