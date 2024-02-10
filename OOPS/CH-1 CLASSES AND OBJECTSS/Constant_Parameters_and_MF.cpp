using namespace std;
#include<iostream>

class rect{
		int l,b;
	public:
		void setdata(const int x,const int y)
		{
			//x=x+2;
			//y=y+2;
			
			l=x;
			b=y;
		}
		
		void area() const
		{
			//l=l+5;
			//b=b+4;
			
			cout<<"\nAREA IS ---->"<<l*b;
		}
};

int main()
{
	rect r;
	int a,b;
	
	cout<<"\nENTER LENGTH AND BREADTH:";
	cin>>a>>b;
	
	r.setdata(a,b);
	r.area();
	
	return 0;
}
