#include<iostream>
using namespace std;

class student{
	private:
		int rollnum;
		char name[50];
	public:
		void getdata()
		{
			cout<<"ENTER ROLLNUMBER:";
			cin>>rollnum;
			cout<<"ENTER NAME:";
			fflush(stdin);
			cin.getline(name,50);
		}
		
		void putdata()
		{
			cout<<"ROLL NUMBER---->"<<rollnum<<endl;
			cout<<"NAME       ---->"<<name<<endl;
		}
};

class test:public student{
	protected:
		int st1,st2;
	public:
		void getmarks()
		{
			cout<<"ST1 MARKS:";
			cin>>st1;
			cout<<"ST2 MARKS:";
			cin>>st2;
		}
		void putmarks()
		{
			cout<<"ST1---->"<<st1<<endl<<"ST2---->"<<st2;
		}
};

class result:public test{
	int total;
	public:
		
		void display()
		{
			total=st1+st2;
			putdata();
			putmarks();
			cout<<"\nTOTAL MARKS---->"<<total;
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
