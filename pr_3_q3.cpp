#include<iostream>
using namespace std;

class Animal{
	public:
		string name;
    	int age;
		void setData(string name,int age)
		{
			this->name = name;
			this->age = age;
		}
};

class Zebra : public Animal{
	public:
		set2()
		{
			cout << "My name is " << name << endl;
			cout << "I'm " << age << " years old"<< endl;
		}
};

class Dolphin : public Animal{
	public:
		set3()
		{
			cout << "My name is " << name << endl;
			cout << "I'm " << age << " years old"<< endl;
		}
};

int main()
{
	string name1,name2;
	int age1,age2;
	
	cout<< "1st animal name : ";
	cin >> name1;
	cout << "1st animal age : ";
	cin >> age1;
	cout<< "2nd animal name : ";
	cin >> name2;
	cout << "2nd animal age : ";
	cin >> age2;
	
	Zebra A;
	Dolphin B;
	
	cout << endl;
	A.Animal::setData( name1, age1);
	A.set2();
	cout << endl;
	B.Animal::setData( name2, age2);
	B.set3();
	
	return 0;
}
