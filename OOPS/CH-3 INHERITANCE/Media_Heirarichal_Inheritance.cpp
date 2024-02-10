#include<iostream>
using namespace std;

class media{
	char title[20];
	float rate;
	public:
		void getmedia()
		{
			cout<<"\nENTER TITLE:";
			cin>>title;
			cout<<"\nENTER RATE:";
			cin>>rate;
		}
		
		void putmedia()
		{
			cout<<"\nTITLE---->"<<title;
			cout<<"\nRATE ---->"<<rate;
		}
};

class book:public media{
	int nop;
	public:
		void getpage()
		{
			cout<<"\nENTER NUMBER OF PAGES:";
			cin>>nop;
		}
		
		void putpage()
		{
			cout<<"\nNUMBER OF PAGES---->"<<nop;
		}
};

class tape:public media{
	int time;
	public:
		void gettm()
		{
			cout<<"\nENTER TIME:";
			cin>>time;
		}
		
		void puttm()
		{
			cout<<"\nTIME---->"<<time;
		}
};

int main()
{
	book b;
	b.getmedia();
	b.getpage();
	b.putmedia();
	b.putpage();
	
	tape t;
	t.getmedia();
	t.gettm();
	t.putmedia();
	t.puttm();
	
	return 0;
}
