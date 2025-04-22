#include <iostream>
using namespace std;

long long dis[100001];
long long cost[100001];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n - 1; i++) {
		cin >> dis[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> cost[i];
	}

	long long ans = cost[0]*dis[0], lowest = cost[0];

	for (int i = 1; i < n; i++) {
		if (cost[i] < lowest) { ans += cost[i] * dis[i]; lowest = cost[i]; }
		else ans += lowest * dis[i];
	}
	cout << ans;

	return 0;
}