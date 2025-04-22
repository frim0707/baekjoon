#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int S[13];
vector<int> lotto;
bool visited[13] = { 0, };

void bt(int K) {
	if (lotto.size() == 6) {
		for (int j = 0; j < lotto.size() - 1; j++) {
			if (lotto[j] > lotto[j + 1]) return;
		}
		for (auto i : lotto) cout << i << " ";
		cout << "\n";
		return;
	}
	for (int i = 1; i <= K; i++) {
		if (!visited[i]) {
			lotto.push_back(S[i]);
			visited[i] = 1;
			bt(K);
			lotto.pop_back();
			visited[i] = 0;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	while (1) {
		int k; cin >> k;
		if (k == 0) break;
		for (int i = 1; i <= k; i++) {
			cin >> S[i];
		}
		bt(k);
		cout << "\n";
	}
}