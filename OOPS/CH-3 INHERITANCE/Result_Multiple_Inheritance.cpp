#include<iostream>
using namespace std;

class student{
	private:
		int rollnum;
		char name[20];
	public:
		void getdata()
		{
			cout<<"\nENTER ROLL NUMBER:";
			cin>>rollnum;
			cout<<"\nENTER NAME:";
			cin>>name;
		}
		
		void putdata()
		{
			cout<<"\nROLL NUMBER---->"<<rollnum;
			cout<<"\nNAME---->"<<name;
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

class result:public student,public test{
	private:
		int total=0;
	public:
		void display()
		{
			putdata();
			putmarks();
			cout<<"\nTOTAL MARKS---->"<<st1+st2;
		}
};

int main()
{
	
	result r;
	r.getdata();
	r.getmarks();
	r.display();
	
	return 0;
}
