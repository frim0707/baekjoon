#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> img(41, vector<int>(41, 0));

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int r, c, t, ans = 0; cin >> r >> c;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> img[i][j];
		}
	}

	cin >> t;

	for (int i = 0; i < r - 2; i++) {
		for (int j = 0; j < c - 2; j++) {

			vector<int> fil;

			for (int x = 0; x < 3; x++) {
				for (int y = 0; y < 3; y++) {
					fil.push_back(img[i + x][j + y]);
				}
			}

			sort(fil.begin(), fil.end());
			if (t <= fil[4]) ans++;

		}
	}

	cout << ans;

	return 0;
}


