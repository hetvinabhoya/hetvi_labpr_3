#include<iostream>
using namespace std;

class A{
	public:
	int a,b;
	int c1,c2;
	int d1,d2;
	
	void set(int a,int b)
	{
		this->a=a;
		this->b=b;
	}
};

class B : public A{
	public:
		
		Square()
		{
			c1 = a*a;
			c2 = b*b;
			
			cout << "Square of A : " << c1 << endl;
			cout << "Square of B : " << c2 << endl;
		}
};

class C : public A{
	public:
		
		Cube()
		{
			d1 = a*a*a;
			d2 = b*b*b;
			
			cout << "Cube of A : " << d1 << endl;
			cout << "Cube of B : " << d2 << endl;
		}
};

int main()
{
	int a,b;
	int c1,c2;
	int d1,d2;
	
	    cout << "Enter value of A : ";
		cin >> a;
		cout << "Enter value of B : ";
		cin >> b;
    
	cout << endl;

	B sq;
	C cu;
	
	sq.set(a,b);
	sq.Square();
	
	cout << endl;
	
	cu.set(a,b);
	cu.Cube();
	
	return 0;
}
