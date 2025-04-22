#include <iostream>
using namespace std;

int main() {
	int yen[6] = {500, 100, 50, 10, 5, 1};
	int n, ans = 0, change = 1000; cin >> n;
	change -= n;

	for (int i = 0; i < 6; i++) {
		ans += change / yen[i];
		change %= yen[i];
	}

	cout << ans;

	return 0;
}