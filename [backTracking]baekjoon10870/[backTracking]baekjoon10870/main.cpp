#include <iostream>
using namespace std;

int fibo(int a)
{
	if (a == 0) return 0;
	else if (a == 1) return 1;
	else return fibo(a - 1) + fibo(a - 2);
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int a;
	cin >> a;
	cout << fibo(a);

	return 0;
}