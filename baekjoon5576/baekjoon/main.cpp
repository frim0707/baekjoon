#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> W, K;
	for(int i = 0; i < 10; i++)
	{
		int score;
		cin >> score;
		W.push_back(score);
	}
	for (int i = 0; i < 10; i++)
	{
		int score;
		cin >> score;
		K.push_back(score);
	}
	sort(W.begin(), W.end());
	reverse(W.begin(), W.end());
	sort(K.begin(), K.end());
	reverse(K.begin(), K.end());

	cout << W[0] + W[1] + W[2] << " " << K[0] + K[1] + K[2];
}