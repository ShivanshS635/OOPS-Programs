using namespace std;
#include<iostream>

class number{
	int x,y;
	public:
		void setdata(int p,int q)
		{
			x=p;
			y=q;
		}
		void display()
		{
			cout<<"\nX IS:"<<x;
			cout<<"\nY IS:"<<y;
		}
		
		number sum(number p)
		{
			number temp;
			temp.x=temp.x+p.x;
			temp.y=temp.y+p.y;
			return temp;
		}
};

int main()
{
	number a;
	number b;
	number c;
	a.setdata(10,20);
	b.setdata(2,4);
	a.display();
	b.display();
	c=a.sum(b);
	c.display();
	c=b.sum(a);
	c.display();
	return 0;
}
