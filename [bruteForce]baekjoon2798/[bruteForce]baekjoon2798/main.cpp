#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int ans = 0;
	int N, M;
	int sum;
	vector<int> cards;

	cin >> N >> M;

	if (3 <= N <= 100)
	{
		for (int i = 0; i < N; i++)
		{
			int j;
			cin >> j;
			if (10 <= j <= 300000)
				cards.push_back(j);
			else cout << "10 부터 300,000의 정수의 카드만 선택 가능";
		}
	}
	else cout << "3부터 100의 정수에서만 개수 선택 가능";

	for (int i = 0; i < N - 2; i++)
	{
		for (int j = i + 1; j < N - 1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				sum = cards[i] + cards[j] + cards[k];
				
				if (sum <= M && sum > ans)
					ans = sum;
			}
		}
	}

	cout << ans;

	return 0;
}