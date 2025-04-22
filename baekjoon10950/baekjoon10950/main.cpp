#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int count;
	vector<int> test;

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		int a, b, c;
		cin >> a >> b;
		c = a + b;
		test.push_back(c);
	}

	for (int i = 0; i < count; i++)
	{
		cout << test[i] << " ";
	}

	return 0;
}