using namespace std;
#include<iostream>

class rect{
	int l,b;
	public:
		rect(int x,int y)
		{
			l=x;
			b=y;
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
	rect r(10,2);
	r.area();
	r.setdata(5,6);
	r.area();
	return 0;
}
