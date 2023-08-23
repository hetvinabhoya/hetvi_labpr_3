#include<iostream>
using namespace std;

class Shapes{
	public:
		float height;
		float width;
		float area;
		
		setData(float height,float width)
		{
			this->height=height;
			this->width=width;
			this->area=area;
		}
};

class Rectangle : public Shapes{
	public:
		area1()
		{
			area = height * width;
			cout << "Total area of Rectangle : " << area;
		}
};

class Triangle : public Shapes{
	public:
		area2()
		{
			area = (height * width) / 2;
			cout << "Total area of Triangle : " << area;
		}
};

int main()
{	
    	float height;
		float width;
		float area;	
    
        cout << "Enter the value of Height : ";
	    cin >> height;
        cout << "Enter the value of Width : ";
        cin >> width;   
        
        cout << "=============================================" << endl;
	
	
	Rectangle A;
	Triangle B;
	
	A.setData(height,width);
	A.area1();
	
	cout << endl;
	
	B.setData(height,width);
	B.area2();
	
	return 0;
}
