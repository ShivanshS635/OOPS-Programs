using namespace std;
#include<iostream>

class rect{
	int l,b;
	public:
		rect(int x=2,int y=3);
		void area();
};

rect::rect(int x,int y)
{
	l=x;
	b=y;
}
void rect::area()
{
	cout<<"\nAREA---->"<<l*b;
}

int main()
{
	rect a,b(10),c(5,6);
	a.area();
	b.area();
	c.area();
	return 0;
}
