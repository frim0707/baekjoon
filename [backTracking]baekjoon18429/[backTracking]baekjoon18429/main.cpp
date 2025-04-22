#include <iostream>
using namespace std;

int kit[9];
bool used[9];
int N, K, ans = 0;

void exer(int weight, int day) {
	if (weight < 500) return;
	else if (day == N) {
		ans++; return;
	}
	for (int i = 0; i < N; i++) {
		if (!used[i]) {
			used[i] = 1;
			exer(weight - K + kit[i], day + 1);
			used[i] = 0;
		}
	}
}

int main() {
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> kit[i];
	}

	exer(500, 0);
	cout << ans;

	return 0;
}