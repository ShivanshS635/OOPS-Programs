#include<iostream>
using namespace std;

int i,j;
class mat{
	private:
			int a[5];
	public:
		void getdata()
		{
			for(i=0;i<5;i++)
			{
				cin>>a[i];
			}
		}
		
		void display()
		{
			for(i=0;i<5;i++)
			{
				cout<<a[i]<<" ";
			}
		}
		
		mat operator * (int x)
		{
			mat temp;
			for(i=0;i<5;i++)
			{
				temp.a[i]=x*a[i];
			}
			return temp;
		}
};

int main()
{
	mat n,m;
	m.getdata();
	m.display();
	n=m*2;
	cout<<"\n";
	n.display();
	return 0;
}
