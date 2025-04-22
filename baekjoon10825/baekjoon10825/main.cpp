#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

typedef struct student
{
	string name;
	int korean;
	int english;
	int math;
}student;

bool cmp(student a, student b)
{
	if (a.korean == b.korean && a.english == b.english && a.math == b.math)
		return a.name < b.name;
	else if (a.korean == b.korean && a.english == b.english)
		return a.math > b.math;
	else if (a.korean == b.korean)
		return a.english < b.english;
	else return a.korean > b.korean;
}

int main()
{
	ios_base::sync_with_stdio; cin.tie(0);

	vector<student> students;
	int num;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		student student;
		string name;
		int korean, english, math;
		cin >> name >> korean >> english >> math;
		student.name = name; student.korean = korean; student.english = english; student.math = math;
		students.push_back(student);
	}

	sort(students.begin(), students.end(), cmp);

	for (auto i : students)
	{
		cout << i.name << "\n";
	}

	return 0;
}