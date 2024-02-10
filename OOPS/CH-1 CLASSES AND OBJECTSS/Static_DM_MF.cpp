using namespace std;
#include<iostream>

class mmath{
	public:
		static int add(int a,int b)
		{
			return a+b;
		}
		static int sub(int a,int b)
		{
			return a-b;
		}
};

int main()
{
	mmath m;
	int a,b,c;
	cout<<"\nENTER TWO NUMBERS:";
	cin>>a>>b;
	
	c=mmath::add(a,b);
	cout<<c<<"\n";
	
	c=mmath::sub(a,b);
	cout<<c<<"\n";
	
	return 0;
}
