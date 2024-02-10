using namespace std;
#include<iostream>

class rect{
		int l,b;
	public:
		rect()
		{
			cout<<"\nDEFAULT CONSTRUCTOR";
			l=2;
			b=4;
		}
		
		rect(rect &p)
		{
			cout<<"\nCOPY CONSTRUCTOR";
			l=p.l+2;
			b=p.b+4;
		}
		
		void area()
		{
			cout<<"\nAREA---->"<<l*b;
		}
		
		void setdata(int x,int y)
		{
			l=x;
			b=y;
		}
};

int main()
{
	rect r1;
	r1.area();
	r1.setdata(5,6);
	r1.area();
	
	rect r2(r1);
	r2.area();	
	r2.setdata(5,6);
	r2.area();
	
	rect r3=r2;
	r3.area();
	r3.setdata(5,6);
	r3.area();
	
	rect r4;
	r4.area();
	r4=r3;
	r4.area();
	
	return 0;
}
