#include <iostream>
using namespace std;

class People{
	public:
		int Age;

		People(int pAge) :
			Age(pAge)
		{
			cout <<"People 12 years old maked" << Age << "\n" << endl;
		}

};

class Worker : virtual public People
{
	public:

		Worker(int pAge) :
			People(pAge)
		{
			cout << "Worker maked\n" << endl;
		}
};

class Student : virtual public People
{
	public:

		Student(int pAge) :
			People(pAge)
		{
			cout << "Student maked\n" << endl;
		}
};

