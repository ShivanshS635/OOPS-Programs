using namespace std;
#include<iostream>

class room{
	private:int l,b,h;
	public:
		void getdata();
	friend void volume(room);
};

void room::getdata()
{
	cout<<"\nENTER L,B,H OF A ROOM:";
	cin>>l>>b>>h;
}
void volume(room r)
{
	cout<<"\nVOLUMNE OF A ROOM IS---->"<<r.l*r.b*r.h;
}

int main()
{
	room r;
	r.getdata();
	volume(r);
	return 0;
}
