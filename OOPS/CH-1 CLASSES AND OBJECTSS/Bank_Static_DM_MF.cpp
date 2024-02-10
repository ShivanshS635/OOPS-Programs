using namespace std;
#include<iostream>

class bank{
	int accno,bal;
	static int bbal;
	char nm[20];
	public:
		void getdat()
		{
			cout<<"\nENTER ACCOUNT NNUBER,NAME,BALANCE:";
			cin>>accno>>nm>>bal;
			bbal+=bal;
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
		void display()
		{
			cout<<"\nACCOUNT NUMBER---->"<<accno;
			cout<<"\nNAME---->"<<nm;
			cout<<"\nCUSTOMER BALANCE---->"<<bal;
		}
		static void bankbal()
		{
			cout<<"\nBANK BALANCE"<<bbal;
		}
};
int bank::bbal=0;

int main()
{
	int i;
	bank b[2];
	for(i=0;i<2;i++)
	{
		b[i].getdat();
		b[i].deposit(500);
		b[i].display();
		bank::bankbal();
		b[i].withdraw(500);
		b[i].display();
		bank::bankbal();
	}
	return 0;
}
