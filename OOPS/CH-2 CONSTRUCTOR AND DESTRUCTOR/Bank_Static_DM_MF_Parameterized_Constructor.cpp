using namespace std;
#include<iostream>
#include<string.h>

class bank{
		int accn;
		char nm[20];
		float bal;
		static float bbal;
	public:
		bank(int x,char y[20],float z)
		{
			accn=x;
			strcpy(nm,y);
			bal=z;
			bbal+=bal;
		}
		void disp()
		{
			cout<<"\nACCOUNT NUMBER  ---->"<<accn;
			cout<<"\nNAME            ---->"<<nm;
			cout<<"\nCUSTOMER BALANCE---->"<<bal;
		}
		static void bankbal()
		{
			cout<<"\nBANK BALANCE    ---->"<<bbal;
		}
		void deposit(int d)
		{
			bal+=d;
			bbal+=d;
		}
		void withdraw(int w)
		{
			bal-=w;
			bbal-=w;
		}
};
float bank::bbal=0;

int main()
{
	int x1,x2;
	char y1[20],y2[20];
	float z1,z2;
	cout<<"\nENTER 1ST ACCOUNT NUMBER,NAME,BALANCE:";
	cin>>x1>>y1>>z1;
	cout<<"\nENTER 2ND ACCOUNT NUMBER,NAME,BALANCE:";
	cin>>x2>>y2>>z2;
	bank b[2]={bank(x1,y1,z1),bank(x2,y2,z2)};
	int i;
	for(i=0;i<2;i++)
	{
		b[i].disp();	
	} 
	bank::bankbal();
	for(i=0;i<2;i++)
	{
		b[i].deposit(5000);	
	} 
	for(i=0;i<2;i++)
	{
		b[i].disp();	
	}
	bank::bankbal();
	for(i=0;i<2;i++)
	{
		b[i].withdraw(5000);	
	}
	for(i=0;i<2;i++)
	{
		b[i].disp();	
	}
	bank::bankbal();
	return 0;
}
