using namespace std;
#include<iostream>

class timm{
	int hrs,min;
	public:
		void gettm()
		{
			cout<<"\nENTER HOURS:";
			cin>>hrs;
			cout<<"\nENTER MINS:";
			cin>>min;
		}
		
		void puttm()
		{
			cout<<"\n"<<hrs<<":"<<min;
		}
		
		timm sum(timm t1,timm t2)
		{
			timm t3;
			t3.hrs=t1.hrs+t2.hrs;
			t3.min=t1.min+t2.min;
			if(t3.min>=60)
			{
				t3.hrs+=1;
				t3.min-=60;
			}
			return t3;
		}
};

int main()
{
	timm t1;
	timm t2;
	timm t3;
	
	t1.gettm();
	t2.gettm();
	
	t1.puttm();
	t2.puttm();
	
	t3=t3.sum(t1,t2);
	t1=t3.sum(t1,t2);
	t2=t3.sum(t1,t2);
	
	t3.puttm();
	t1.puttm();
	t2.puttm();
	
	return 0;
}
