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
	int count;
	vector<int> v;

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < count; i++)
	{
		cout << v[i] << "\n";
	}

	return 0;
}