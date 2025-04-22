#include <iostream>
#include <algorithm>
using namespace std;

int L, C, ans = 0;
char alpha[16];
char pw[16];
bool check[16] = { 0, };

char cmp(char a, char b) { return a < b; }

void bt(int level, int next) {
	if (level == L) {
		int a = 0; int b = 0;
		for (int i = 0; i < L; i++) {
			if (pw[i] == 'a' || pw[i] == 'e' || pw[i] == 'i' || pw[i] == 'o' || pw[i] == 'u') a++;
			else b++;
		}
		if (a > 0 && b > 1) {
			for (int i = 0; i < L; i++) {
				cout << pw[i];
			}
			cout << "\n";
			return;
		}
		else return;
	}

	for (int i = next; i < C; i++) {
		pw[level] = alpha[i];
		bt(level + 1, i + 1);
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	cin >> L >> C;
	for (int i = 0; i < C; i++) {
		cin >> alpha[i];
	}

	sort(alpha, alpha + C, cmp);
	bt(0, 0);

	return 0;
}