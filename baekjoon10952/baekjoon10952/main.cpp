#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> test;

	while (1)
	{
		int a, b, sum;
		cin >> a >> b;
		if (a == 0 && b == 0)
		{
			break;
		}
		sum = a + b;
		test.push_back(sum);

	}

	for (int i = 0; i < test.size(); i++)
	{
		cout << test[i] << " ";
	}
	
	return 0;
}