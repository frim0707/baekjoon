#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	// "a" == 97 in ASCII
	vector<int> v(26, 0);
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++)
	{
		v[(int)a[i]-97]++;
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

	return 0;
}