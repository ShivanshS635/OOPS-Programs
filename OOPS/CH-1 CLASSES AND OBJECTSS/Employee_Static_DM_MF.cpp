using namespace std;
#include<iostream>

class employee{
	int ecode;
	char ename[20];
	float sal;
	static float bonus;
	public:
		void getdat()
		{
			cout<<"\nEnter CODE,NAME,SALAY:";
			cin>>ecode;
			cin>>ename;
			cin>>sal;
		}
		
		void display()
		{
			cout<<"\nCODE---->"<<ecode;
			cout<<"\nNAME---->"<<ename;
			cout<<"\nSALARY---->"<<sal;
			cout<<"\nBONUS---->"<<bonus;
			cout<<"\nTOTAL---->"<<sal+(bonus*sal);
		}
		
		static void raise_bonus(float x)
		{
			bonus=x;
		}
};
float employee::bonus=0.04;

int main()
{
	employee emp;
	
	emp.getdat();
	emp.display();
	
	emp.raise_bonus(0.05);
	emp.display();
	
	return 0;
}
