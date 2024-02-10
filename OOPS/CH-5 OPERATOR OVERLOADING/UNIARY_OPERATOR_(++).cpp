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
		
		num operator ++()
		{
			num temp;
			temp.x=x+1;
			temp.y=y+1;
			return temp;
		}
		
		num operator ++(int)
		{
			num temp;
			return *this;
			temp.x=x+1;
			temp.y=y+1;
		}
};

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
