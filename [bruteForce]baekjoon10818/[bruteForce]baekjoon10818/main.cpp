#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int count;
	vector<int> v;

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		int n;
		cin >> n;
		v.push_back(n);
	}

	int min = 1000000, max = -1000000;

	for (int i = 0; i < count; i++)
	{
		if (v[i] < min)
			min = v[i];
		if (v[i] > max)
			max = v[i];
	}

	cout << min << " " << max;

	return 0;
}