#include <iostream>
using namespace std;

bool check1[14];
bool check2[27];
bool check3[27];

int N, ans = 0;

void bt(int level) {
	if (level == N) { ans++; return; }
	for (int i = 0; i < N; i++) {
		if (check1[i] || check2[level + i] || check3[N - 1 + level - i]) {
			continue;
		}
		check1[i] = 1;
		check2[level + i] = 1;
		check3[N - 1 + level - i] = 1;
		bt(level + 1);
		check1[i] = 0;
		check2[level + i] = 0;
		check3[N - 1 + level - i] = 0;
	}
};

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> N;
	bt(0);
	cout << ans;
}