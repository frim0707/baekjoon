#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#pragma warning (disable: 4996)

using namespace std;

bool cmp(const string& str1, const string& str2)
{
	if (str1.length() != str2.length())
		return str1.length() < str2.length();
	else return str1 < str2;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);

	int cnt;
	vector<string> words;
	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		string str;
		cin >> str;
		words.push_back(str);
	}
	puts("");

	sort(words.begin(), words.end(), cmp);

	for (int i = 0; i < words.size(); i++)
	{
		if (words[i] != words[i + 1])
		{
			cout << words[i] << "\n";
		}
	}
	return 0;
}