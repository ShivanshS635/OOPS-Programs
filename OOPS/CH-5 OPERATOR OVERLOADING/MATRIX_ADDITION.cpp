#include<iostream>
using namespace std;

int i,j;
class mat{
	private:
			int m[3][3];
	public:
		void getdata()
		{
			cout<<"ENTER MATRIX:";
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cin>>m[i][j];
				}
			}
		}
		
		void display()
		{
			cout<<"ENTERED MATRIX:";
			for(i=0;i<3;i++)
			{
				cout<<"\n";
				for(j=0;j<3;j++)
				{
					cout<<m[i][j]<<" ";
				}
			}
		}
		
		mat operator +(mat p)
		{
			mat temp;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					temp.m[i][j]=m[i][j]+p.m[i][j];
				}
			}
			return temp;
		}
};

int main()
{
	mat m1,m2;
	m1.getdata();
	m2.getdata();
	m1.display();
	m2.display();
	mat n;
	n=m1+m2;
	n.display();	
	return 0;
}
