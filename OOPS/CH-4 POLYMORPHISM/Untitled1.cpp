#include<iostream>
using namespace std;

class abstract
{
	public:
		virtual void readData()=0;
		virtual void dispData()=0;
};

class Derived:public abstract
{
	int a,b;
	
	public:
		
		void readData()
		{
			cout<<"ENTER :";
			cin>>a>>b;
		}	
		
		void dispData()
		{
			cout<<"VALUE OF A="<<a<<endl<<"VALUE OF B="<<b;
		}
};

int main()
{
	Derived d;
	d.readData();
	d.dispData();
	return 0;
}
