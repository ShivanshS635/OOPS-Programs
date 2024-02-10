#include<iostream>
using namespace std;

class student{
	private:
		int rn;
		char nm[20];
	public:
		void getdata()
		{
			cout<<"\nENTER ROLL NUMBER:";
			cin>>rn;
			cout<<"\nENTER NAME:";
			cin>>nm;
		}
		
		void putdata()
		{
			cout<<"\nROLL NUMBER---->"<<rn;
			cout<<"\nNAME---->"<<nm;
		}
};

class test{
	protected:
		int st1,st2;
	public:
		void getmarks()
		{
			cout<<"\nENTER ST1 MARKS:";
			cin>>st1;
			cout<<"\nENTER ST2 MARKS:";
			cin>>st2;
		}
		
		void putmarks()
		{
			cout<<"\nST1 MARKS---->"<<st1;
			cout<<"\nST2 MARKS---->"<<st2;
		}
};

class res:private student,private test{
	private:
		int tot;
	public:
		void display()
		{
			getdata();
			getmarks();
			putdata();
			putmarks();
			cout<<"\nTOTAL---->"<<st1+st2;
		}
};

int main()
{
	res r;
	r.display();
	return 0;
}
