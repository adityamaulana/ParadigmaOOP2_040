#include <iostream>

using namespace std;

class baseClass
{
public:
	virtual void Intro() final
	{
		cout << "This is Function from Base Class";
	}
};

class derivedClass : public baseClass
{
public:
	void Intro()
	{
		cout << "This is Function from derived Class";
	}
};

int main()
{
	derivedClass a;
	a.Intro();

	return 0;
}