#include<iostream>
using namespace std;

class Mother{
	public:
		void display1()
		{
			cout << "Hello...I'm Vraj Godhani's Mother..."<< endl;
		}
};

class Son : public Mother{
	public:
		void display2()
		{
			cout << "Hello...I'm Vraj Godhani..."<< endl;
		}
		
};

int main()
{
	Son A;
	
	A.display1();
	A.display2();
	
	return 0;
}
