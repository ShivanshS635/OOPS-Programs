#include<iostream>
using namespace std;

class num{
	private:
		int x,y;
	public:
		void getdata()
		{
			cout<<"ENTER TWO NUMBERS:";
			cin>>x>>y;
		}
		
		void display()
		{
			cout<<"X---->"<<x<<"\n";
			cout<<"Y---->"<<y<<"\n";
		}
		friend num operator ++(num &);
		friend num operator ++(num &,int);
};
num operator ++(num &p)
	{
		num temp;
		temp.x=p.x+1;
		temp.y=p.y+1;
		return temp;
	}
		
	num operator ++(num &p,int  x)
	{
		num temp;
		temp.x=p.x;
		temp.y=p.y;
		return temp;
		temp.x=p.x+1;
		temp.y=p.y+1;
	}

int main()
{
	num m,n;
	n.getdata();
	n.display();
	
	m= n++;
	m.display();
	n.display();
	
	m= ++n;
	m.display();
	n.display();
	return 0;
}
