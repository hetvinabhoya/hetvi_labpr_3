#include<iostream>
using namespace std;

class A{
	public:
		int id;
		string name;
		string role;
		
		set1()
		{
			cout << "Enter Id : ";
			cin >> id;
			cout << "Enter Name : ";
			cin >> name;
			cout << "Enter Role : ";
			cin >> role;
		}
};

class B : public A{
	public:
		double salary;
		string experience;
		
		set2()
		{
			cout << "Enter Salary : ";
			cin >> salary;
			cout << "Enter Experience : ";
			cin >> experience;
		}
};

class C : public B{
	public:
		string comp_name;
		string address;
		
		set3()
		{
			cout << "Enter Company Name : ";
			cin >> comp_name;
			cout << "Enter Address : ";
			cin >> address;
		}
};

class D : public C{
	public:
		string email;
		double contact;
		
		set4()
		{
			cout << "Enter E-mail : ";
			cin >> email;
			cout << "Enter Contact no.: ";
			cin >> contact;
			
			cout << "=====================================" << endl;
			
		}
		
		get()
		{
			cout << "Id : " << id << endl;
			cout << "Name : " << name << endl;
			cout << "Role : " << role << endl;
			cout << "Salary : " << salary << endl;
			cout << "Experience : " << experience << endl;
			cout << "Company Name : " << comp_name << endl;
			cout << "Address : " << address << endl;
			cout << "E-mail : " << email << endl;
			cout << "Contact : " << contact << endl;
		}
};

int main()
{
	D I;
	
	I.set1();
	I.set2();
	I.set3();
	I.set4();
	I.get();
	
	return 0;
}
