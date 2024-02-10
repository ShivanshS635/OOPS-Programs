using namespace std;
#include<iostream>

class bank{
	private : int accno;
			char *name;
			float bal;
	public :
		void getdata(int x,char *n,float b);
		friend void transfer(bank b1,bank b2);
		//void deposit(float);
		//void withdraw(float);
		void display();
};

void bank::getdata(int x,char *n,float b)
{
	accno=x;
	name=n;
	bal=b;
}

/*void bank::deposit(float x)
{
	bal=bal+x;
}

void bank::withdraw(float x)
{
	bal=bal-x;
}*/

void transfer(bank b1,bank b2)
{
	int amt;
	cout<<"\nENTER AMOUNT:";
	cin>>amt;
	b1.bal=b1.bal-amt;
	b2.bal=b2.bal+amt;
}

void bank::display()
{
	cout<<"\nACCOUNT NUMBER---->"<<accno;
	cout<<"\nNAME---->"<<name;
	cout<<"\nBALANCE---->"<<bal;
}

int main()
{
	bank b1;
	bank b2;
	int a;
	char n[20];
	float d,w,bal;
	cout<<"\nENTER ACOOUNT NUMBER:";
	cin>>a;
	cout<<"ENTER NAME:";
	cin>>n;
	cout<<"ENTER BALANCE:";
	cin>>bal;
	b1.getdata(a,n,bal);
	
	cout<<"\nENTER ACOOUNT NUMBER:";
	cin>>a;
	cout<<"ENTER NAME:";
	cin>>n;
	cout<<"ENTER BALANCE:";
	cin>>bal;
	b2.getdata(a,n,bal);
	
	b1.display();
	b2.display();
	
	/*b.display();
	
	cout<<"\nENTER AMOUNT TO DEPOSIT";
	cin>>d;
	b.deposit(d);
	b.display();
	
	cout<<"\nENTER AMOUNT TO WITHDRAW";
	cin>>w;
	b.withdraw(w);
	b.display();*/
	
	transfer(b1,b2);
	
	b1.display();
	b2.display();
	
	return 0;
}
