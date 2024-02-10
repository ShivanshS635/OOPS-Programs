#include<iostream>
using namespace std;

class num{
	private:
		int x,y;
	public:
		void getdata()
		{
			cout<<"ENTER TWO NUMBERS---->";
			cin>>x>>y;
		}
		
		void display()
		{
			cout<<"X---->"<<x<<"\n";
			cout<<"Y---->"<<y<<"\n";
		}
		
		void operator -()
		{
			x=-x;
			y=-y;
		}
};

int main()
{
	num n;
	
	n.getdata();
	n.display();
	-n;
	n.display();
	
	return 0;
}
