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

}