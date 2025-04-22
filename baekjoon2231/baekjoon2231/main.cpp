#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int res = 0;

	for (int i = 1; i < N; i++)
	{
		int sum = i;
		int temp = i;
		while (1)
		{
			sum += temp % 10;
			temp /= 10;
			if (temp == 0)
			{
				break;
			}
		}
		if (sum == N)
		{
			res = i;
			break;
		}
	}

	cout << res << endl;

	return 0;
}