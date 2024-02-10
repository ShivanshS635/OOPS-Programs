#include<iostream>
using namespace std;

class emp{
	int *dp;
	public:
		emp()
		{
			*dp=0;
		}
		emp(int dp)
		{
			int dp1=new int;
			*dp1=dp;
		}
		void disp()
		{
			cout<<"PENDING PROJECTS---->"<<*dp;
		}
};

int main()
{
	emp e1;
	emp e2;
	e1.disp();
	e2.disp();
	return 0;
}
