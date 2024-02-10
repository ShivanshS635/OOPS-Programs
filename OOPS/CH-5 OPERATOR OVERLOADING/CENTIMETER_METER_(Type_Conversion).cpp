#include<iostream>
using namespace std;

class centimeter{
	int cmx;
	public:
		void getdata()
		{
			cout<<"ENTER VALUE IN CM:";
			cin>>cmx;
		}
		void display()
		{
			cout<<"VALUE IN CM---->"<<cmx;
		}
		centimeter()
		{
			cmx=0;
		}
		centimeter(meter m)
		{
			cmx=m.mx*100;
		}
};

class meter{
	int mx;
	public:
		void getdata()
		{
			cout<<"\nENTER VALUE IN M:";
			cin>>mx;
		}
		void display()
		{
			cout<<"\nVALUE IN M---->"<<mx;
		}
		meter()
		{
			x=0;
		}
		meter(centimeter cm)
		{
			mx=cm.cmx/100;
		}
};

int main()
{
	centimeter cm;
	meter m;
	
	cm.getdata();
	m.getdata();
	
	cm=m;
	cm.display();
	m.display();
	
	m=cm;
	cm.display();
	m.display();
	
	return 0;
}
