#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<int> v;
bool visited[9];

void bt()
{
	if (v.size() == M)
	{
		for (auto &i : v) cout << i <<" ";
		cout << "\n";
		return;
	}

	for (int i = 1; i <= N; i++)
	{
		if (!visited[i])
		{
			visited[i] = 1;
			v.push_back(i);
			bt();
			visited[i] = 0;
			v.pop_back();
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);

	cin >> N >> M;
	bt();

	return 0;
}