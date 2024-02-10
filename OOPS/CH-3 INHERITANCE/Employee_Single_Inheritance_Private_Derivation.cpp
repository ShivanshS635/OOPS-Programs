#include<iostream>
using namespace std;

class emp{
	private:
		int ecode;
		char ename[20];
	protected:
		float salary;
	public:
		void getdata()
		{
			cout<<"\nENTER EMPLOYEE CODE:";
			cin>>ecode;
			cout<<"\nENTER EMPLOYEE NAME:";
			cin>>ename;
			cout<<"\nENTER SALARY:";
			cin>>salary;
		}
		
		void putdata()
		{
			cout<<"\nEMPLOYEE CODE---->"<<ecode;
			cout<<"\nEMPLOYEE NAME---->"<<ename;
			cout<<"\nSALARY---->"<<salary;
		}
};

class salesman:private emp{
	private:
		float com,tot;
	public:
		void getcom()
		{
			getdata();
			cout<<"\nENTER COMMISION:";
			cin>>com;
		}
		
		void putcom()
		{
			putdata();
			cout<<"\nCOMMISION---->"<<com;
			cout<<"\nTOTAL---->"<<salary+com;
		}
};

int main()
{
	
	salesman s;
	s.getcom();
	s.putcom();
	
	return 0;
}
