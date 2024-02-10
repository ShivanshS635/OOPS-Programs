using namespace std;
#include<iostream>
class Emp
{
	int exp;
	float sal;
	public:
		Emp(int exp,float sal)
		{
			this->exp=exp;
			this->sal=sal;
		}
		Emp(Emp &e1)
		{
			this->exp=e1.exp;
			this->sal=e1.sal;
		}
		void disp()
		{
			cout<<"Emp exp="<<exp<<" sal= "<<sal<<endl;
		}
};
int main()
{
	Emp e1(4,90000.0);
	Emp e2=e1;
	cout<<"Emp1 Details: \n";
	e1.disp();
	cout<<"Emp2 Details: \n";
	e2.disp();
	return 0;
}
