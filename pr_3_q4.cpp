#include<iostream>
using namespace std;

class PersInfo{
	public:
	    int emp_id;
	    string emp_name;
	    int emp_age;
	    double emp_phn_no;
	    string emp_city;
	    
	    setData1()
	    {
	        cout << "Enter Employee Id : ";
			cin >> emp_id;
			cout << "Enter Employee Name : ";
			cin >> emp_name;
			cout << "Enter Employee Age : ";
			cin >> emp_age;
			cout << "Enter Employee Phone no. : ";
			cin >> emp_phn_no;
			cout << "Enter Employee City : ";
			cin >> emp_city;	
		}
};

class WorkInfo{
	public:
		string emp_qual;
		int emp_experience;
		string emp_expertise;
		
		setData2()
		{
			cout << "Enter Employee Qualification : ";
			cin >> emp_qual;
			cout << "Enter Employee Experience : ";
			cin >> emp_experience;
			cout << "Enter Employee Expertise : ";
			cin >> emp_expertise;
	    }
};

class Emp_info : public PersInfo,public WorkInfo{
	public:
		getData()
		{
			cout << "Id : " << emp_id << endl;
			cout << "Name : " << emp_name << endl;
			cout << "Age : " << emp_age << endl;
			cout << "Phone no : " << emp_phn_no << endl;
			cout << "City : " << emp_city << endl;
			cout << "Qualification : " << emp_qual << endl;
			cout << "Experience : " << emp_experience << endl;
			cout << "Expertise : " << emp_expertise << endl;
		}
};

int main()
{
	Emp_info I;
	
	I.setData1();
	I.setData2();
	cout << endl;
	I.getData();
	
	return 0;
}
