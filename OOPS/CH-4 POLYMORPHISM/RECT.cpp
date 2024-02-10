#include<iostream>
using namespace std;

class rect{
	int l,b,area;
	public:
		void getdata()
		{
			cout<<"ENTER:";
			cin>>l>>b;
			area=l*b;
		}
		
		void display()
		{
			cout<<l<<" ";
			cout<<b<<" ";
			cout<<area<<"\n";
		}
		
		rect check_area(rect r)
		{
			if(r.area>area)
				return r;
			else
				return *this;
		}
};

int main(){
	
	rect r1;
	rect r2;
	rect r3;
	
	r1.getdata();
	r2.getdata();
	
	r1.display();
	r2.display();
	
	r3=r2.check_area(r1);
	r3.display();
	
	return 0;
}
