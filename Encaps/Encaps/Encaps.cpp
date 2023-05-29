#include <iostream>
using namespace std;

class LampRemote
{
private:
	string FuseNo[10];

public:
	void setFuseNo(int i, string value)
	{
		FuseNo[i] = value;
	}

	string getFuseno(int i)
	{
		return FuseNo[i];
	}
};

int main()
{
	LampRemote HouseLamp;

	HouseLamp.setFuseNo(0, "Terrace");
	HouseLamp.setFuseNo(1, "Living Room");
	HouseLamp.setFuseNo(2, "Bedroom");
	HouseLamp.setFuseNo(3, "Kitchen");

	cout << HouseLamp.getFuseno(0) << endl;
	cout << HouseLamp.getFuseno(1) << endl;
	cout << HouseLamp.getFuseno(2) << endl;
	cout << HouseLamp.getFuseno(3) << endl;

	return 0;
}