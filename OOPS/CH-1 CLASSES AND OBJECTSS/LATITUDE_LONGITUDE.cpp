#include<iostream>
using namespace std;

class geomag{
	int const log=37749;
	int const lag=12355;
	public:
		void getlog(int)
		{
			cout<<"ENTER LOGITUDE:";
			cin>>log;
		}
		void getlag(int)
		{
			cout<<"ENTER LATITUDE:";
			cin>>lag;
		}
		void display()
		{
			cout<<"LONGITUDE---->"<<log;
			cout<<"\LATITUDE---->"<<lag;
		}
};

int main()
{
	geomag g1,g2;
	g1.getlog(222321);
	g1.getlag(444561);
	g2.getlog(652322);
	g2.getlag(654565);
	g1.display();
	g2.display();
	return 0;
}
