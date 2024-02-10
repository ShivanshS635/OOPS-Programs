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
		num operator -(num p)
		{
			num temp;
			temp.x=x-p.x;
			temp.y=y-p.y;
			return temp;
		}
};

int main()
{
	num n1;
	num n2;
	
	n1.getdata();
	n2.getdata();
	
	n1.display();
	n2.display();
	
	num n3=n1-n2;
	
	n3.display();
		
	return 0;
}
