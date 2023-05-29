#include <iostream>
using namespace std;

class baseClass final
{
public:
	virtual void Intro()
	{
		cout << "This is Function from base class";
	}
};

class derivedClass : public baseClass
{
public:
	void Intro()
	{
		cout << "This is Function from base class";
	}
};

int main()
{
	derivedClass a;
	a.Intro();

	return 0;
}