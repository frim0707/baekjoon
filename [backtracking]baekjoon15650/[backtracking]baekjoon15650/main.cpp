#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<int> v;

void bt(int num)
{
	if (v.size() == M)
	{
		for (auto& i : v)
		{
			cout << i << " ";
		}
			cout << "\n";
			return;
	}

	for (int i = num; i <= N; i++)
	{
		v.push_back(i);
		bt(i + 1);
		v.pop_back();
	}
}

int main()
{
	cin >> N >> M;
	bt(1);

	return 0;
}