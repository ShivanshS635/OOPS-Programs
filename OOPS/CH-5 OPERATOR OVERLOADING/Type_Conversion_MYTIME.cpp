#include<iostream>
using namespace std;

class mytm{
	private:
		int hrs,mins;
	public:
		mytm()
		{
			hrs=0;
			mins=0;
		}
		mytm(int p)
		{
			hrs=p/60;
			mins=p%60;
		}
		void display()
		{
			cout<<"\nTIME----->"<<hrs<<":"<<mins;
		}
		operator int()
		{
			return hrs*60+mins;
		}
};

int main()
{
	mytm t;
	int x=80;
	t.display();
	t=x;
	t.display();
	int y=t;
	cout<<"\ny is ---->"<<y;	
	return 0;
}
