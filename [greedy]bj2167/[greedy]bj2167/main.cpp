#include <iostream>
using namespace std;

int arr[301][301];

int main() {
	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++)
			cin >> arr[i][j];
	}

	int cnt; cin >> cnt;
	for (int k = 1; k <= cnt; k++) {
		int i, j, x, y, ans = 0; cin >> i >> j >> x >> y;
		for (int q = i; q <= x; q++) {
			for (int w = j; w <= y; w++) {
				ans += arr[q][w];
			}
		}
		cout << ans << "\n";
	}

	return 0;
}