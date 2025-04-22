#include <iostream>
using namespace std;

int coin[11];
int n;

int func(int k) {
	int ans = 0;

	for (int i = n - 1; i >= 0; i--) {
		ans += k / coin[i];
		k %= coin[i];

		if (k == 0) return ans;
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int k;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> coin[i];
	}

	cout << func(k);

	return 0;
}