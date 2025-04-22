#include <iostream>
#include <algorithm>

using namespace std;

typedef struct meeting {
	int start;
	int end;
}meeting;

meeting arr[100001];

bool cmp(meeting& a, meeting& b) {
	if (a.end != b.end) return a.end < b.end;
	else return a.start < b.start;
}

int greedy(int n) {
	int t = 0, ans = 0;
	for (int i = 0; i < n; i++) {
		if (t <= arr[i].start) {
			ans++;
			t = arr[i].end;
		}
	}

	return ans;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i].start >> arr[i].end;
	}

	sort(arr, arr + n, cmp);
	
	cout << greedy(n);

	return 0;
}