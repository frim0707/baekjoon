#include <iostream>
using namespace std;

int arr[46];

int fibo(int N) {
	if (N == 0) return 0;
	if (N == 1) return 1;
	if (arr[N] != -1) return arr[N];

	return arr[N] = fibo(N - 1) + fibo(N - 2);
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int n; cin >> n;
	fill(arr, arr + n + 1, -1);

	cout << fibo(n);
	return 0;
}