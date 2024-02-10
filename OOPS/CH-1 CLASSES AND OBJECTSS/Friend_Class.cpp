using namespace std;
#include<iostream>

class beta;
class alpha{
		int a;
	public:
		void geta()
		{
			cout<<"\nENTER A:";
			cin>>a;
		}
		
		void showa()
		{
			cout<<"\nA---->";
		}
		
		friend class beta;
};

class beta{
		int b;
	public:
		void getb()
		{
			cout<<"\nENTER B:";
			cin>>b;
		}
		
		void showb()
		{
			cout<<"\nB---->";
		}
		
		void sum()
		{
			alpha aa;
			int sum;
			
			aa.geta();
			sum=aa.a+b;
			
			cout<<"\nSUM---->"<<sum;
		}
};

int main()
{
	alpha a;
	beta b;
	
	b.getb();
	b.sum();
	
	return 0;
}
