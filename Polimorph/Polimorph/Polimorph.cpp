#include <iostream>

using namespace std;

class Someone
{
	public:
		virtual void Message()= 0;
		//virtual void Message()
		//{
		//	cout << "Message from Someone" << endl;
		//}
};

class Vincent : public Someone
{
	public:
		void Message()
		{
			cout << "Message from Vincent" << endl;
		}
};

class Enzy : public Someone
{
	public:
		void Message()
		{
			cout << "Message from Vincent" << endl;
		}
};