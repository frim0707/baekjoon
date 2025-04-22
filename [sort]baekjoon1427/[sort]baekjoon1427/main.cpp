#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
	return a > b;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);

	int num;
	cin >> num;
	int temp = num;
	vector<int> N;

	while (temp != 0)
	{
		N.push_back(temp % 10);
		temp /= 10;
	}

	sort(N.begin(), N.end(), compare);

	for (auto i : N)
	{
		cout << i;
	}

	return 0;
}