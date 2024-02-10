using namespace std;
#include<iostream>

class rect{
	int l,b;
	public:
		rect()
		{
			l=2;
			b=4;
			cout<<"\nDEFAULT CONSTRUCTOR EXECUTED";
		}
		
		void setdata(int x,int y)
		{
			l=x;
			b=y;
		}
		
		void area()
		{
			cout<<"\nAREA---->"<<l*b;
		}
		
};

int main()
{
	rect r;
	r.area();
	r.setdata(5,6);
	r.area();
	return 0;
}
