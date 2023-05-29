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

class Coki : public Worker, public Student
{
	public:

		Coki(int pAge) :
			Worker(pAge),
			Student(pAge)
		{
			cout << "Coki Maked\n" << endl;
		}
};

int main()
{
	Coki a(12);

	return 0;
}