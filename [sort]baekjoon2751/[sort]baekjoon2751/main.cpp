#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int count;
	cin >> count;

	vector<int> v;
	for (int i = 0; i < count; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.begin() + count);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << "\n"; // endl; ���� �������� �̰Ŷ��� �ð��ʰ�������̿�
	}

	return 0;
}