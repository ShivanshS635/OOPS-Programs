#include<iostream>
using namespace std;

class user{
	private:
		char name[20];
		static int count;
	public:
		void getdata()
		{
			cout<<"-----ENTER DATA-----\n";
			cout<<"ENTER NAME:";
			cin>>name;
		}
		void start()
		{
			user::count++;
			cout<<"\n"<<name<<" STARTED USING SOFTWARE.....";
		}
		void stop()
		{
			user::count--;
			cout<<"\n"<<name<<" STOPPED USING SOFTWARE.....";
		}
		static void totuser()
		{
			cout<<"\nTOTAL NUMBER OF USER IS---->"<<count;
		}
};int user::count=0;

int main()
{
	user u1,u2,u3;
	
	u1.getdata();
	u2.getdata();
	u3.getdata();
	
	user::totuser();
	
	u1.start();
	user::totuser();
	u2.start();
	user::totuser();
	u3.start();
	user::totuser();
	
	u1.stop();
	user::totuser();
	u2.stop();
	user::totuser();
	u3.stop();
	user::totuser();
	
	return 0;
}
