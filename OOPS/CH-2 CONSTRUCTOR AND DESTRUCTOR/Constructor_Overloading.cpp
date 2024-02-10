using namespace std;
#include<iostream>

class figure{
	int l,b;
	public:
		figure(int p)
		{
			l=p;
			b=p;
		}
		figure(int p,int q)
		{
			l=p;
			l=q;
		}
		void area()
		{
			cout<<"\nAREA---->"<<l*b;
		}
};

int main()
{
	figure sq(10);
	figure rect(5,4);
	
	sq.area();
	rect.area();
	
	return 0;
}
