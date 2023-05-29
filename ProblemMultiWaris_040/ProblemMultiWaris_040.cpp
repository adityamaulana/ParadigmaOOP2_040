#include <iostream>
using namespace std;

class People
{
public:
	int Age;

	People (int pAge) :
		Age(pAge)
	{
		cout << "People 12 years old maked" << Age << "\n" << endl;
	}
};

class Worker : public People
{
public:
	Worker(int pAge) :
		People(pAge)
	{
		cout << "Worker Maked\n" << endl;
	}
};

class Student : public People
{
	public:

		Student(int pAge) :
			People(pAge)
		{
			cout << "Student Maked\n" << endl;
		}
};