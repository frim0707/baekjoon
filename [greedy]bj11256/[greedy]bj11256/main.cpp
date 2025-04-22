#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int box[1001];
	int t; cin >> t;

	for (int i = 0; i < t; i++) {
		int j, n; cin >> j >> n;
		int ans = 0;

		for (int k = 0; k < n; k++) {
			int r, c; cin >> r >> c;
			box[k] = r * c;
		}

		sort(box, box + n);

		for (int k = n - 1; k >= 0; k--) {
			if (j <= 0) break;
			ans++;
			j -= box[k];
		}
		cout << ans << "\n";
	}

	return 0;
}