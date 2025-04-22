#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct human
{
	int num;
	int age;
	string name;
}human;

bool cmp(human person1, human person2)
{
	if (person1.age != person2.age) return person1.age < person2.age;
	else return person1.num < person2.num;
}

int main()
{
	int cnt;
	vector<human> people;
	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		human person;
		int age;
		string name;

		cin >> age >> name;
		person.num = i;
		person.age = age;
		person.name = name;

		people.push_back(person);
	}

	sort(people.begin(), people.end(), cmp);

	for (auto i : people) cout << i.age << " " << i.name << "\n";

	return 0;
}