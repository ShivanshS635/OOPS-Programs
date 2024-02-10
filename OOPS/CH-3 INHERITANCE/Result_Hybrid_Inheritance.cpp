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

class test:public virtual student{
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

class sports:public virtual student{
	protected:
		char spnm[10];
		int spm;
	public:
		void getsm()
		{
			cout<<"\nENTER SPORTS NAME:";
			cin>>spnm;
			cout<<"\nENTER SPORTS MARKS:";
			cin>>spm;
		}
		
		void putsm()
		{
			cout<<"\nSPORTS NAME---->"<<spnm;
			cout<<"\nSPORTS MARKS---->"<<spm;
		}
};

class result:public test,public sports{
	private:
		int total=0;
	public:
		void display()
		{
			putdata();
			putsm();
			putmarks();
			cout<<"\nTOTAL MARKS---->"<<st1+st2+spm;
		}
};

int main()
{
	
	result r;
	r.getdata();
	r.getmarks();
	r.getsm();
	r.display();
	
	return 0;
}
