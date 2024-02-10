#include<iostream>
using namespace std;

class number{
	int x,y;
	public:
		void getnumber()
		{
			cout<<"ENTER NUMBERS:";
			cin>>x>>y;
		}
		void display()
		{
			cout<<"1st NUMBER---->"<<x<<endl;
			cout<<"2nd NUMBER---->"<<y<<endl;
		}
		/*void operator ++()
		{
			x=x+1;
			y=y+1;			
		}
		void operator ++(int)//int for 0 and function overloading
		{
			x=x+1;
			y=y+1;			
		}*/
		friend void operator ++(number &);
		friend void operator ++(number &,int);
};

void operator ++(number &p)
	{
		p.x=p.x+1;
		p.y=p.y+1;			
	}
	void operator ++(number &p,int x)
	{
		p.x=p.x+1;
		p.y=p.y+1;			
	}

int main()
{
	number n;
	n.getnumber();
	n++;
	n.display();
	++n;
	n.display();
	return 0;
}
