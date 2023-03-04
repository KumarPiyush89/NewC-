/* C++ program to demonstrate constructor*/
#include<iostream>
using namespace std;
class Point
{
	private:
		//int x=0;//In C++ class member can't be initialized this way
		int x;
		int y;
	public:
		//default constructor
		Point()
		{
			x=0;
			y=0;
		}
		//overloading Constructor
		//Parateterized constructor
		Point(int a,int b)
		{
			x=a;
			y=b;
		}
		Point(int a)
		{
			x=a;
			y=a;
		}
		
		//Copy constructor
		Point(Point &p)
		{
			x=p.x;
			y=p.y;
			
		}
		void show(char *name)
		{
			cout<<endl<<name<<"="<<x<<","<<y;
		}
		int getX()
		{
			return x;
		}
		int getY()
		{
			return y;
		}
	
};
int main()
{
	Point p1,p2,p3,p4,p5;
	p1.show("p1");
	p2.show("p2");
	p3.show("p3");
	p4.show("p4");
	p5.show("p5");
	Point p6(16,18);
	p6.show("p6");
	Point p7(10,10);
	p7.show("p7");
	Point p8(20);
	p8.show("p8");
	
	Point p9(p6.getX(),p6.getY());
	p9.show("p9");
	Point p10(p6);
	p10.show("p10");
	
	Point p11;//default constructor will be called
	Point p12(12,23);//constructor with two integer argument will be called
	Point P13(10);//constructor with one integer argument will be called
	Point p14(p12);//Copy constructor will be called
	
	//Point p15=20;//constructor with one ineger argument will be called
	
	
	
	return 0;
}
