using namespace std;
#include<iostream>

float si(float p,int t,int r=2)
{
	float s;
	s=(p*r*t)/100;
	return s;
}

int main()
{
	cout<<"ENTER PRINCIPLE AMOUNT:";
	float p;
	cin>>p;
	cout<<"ENTER RATE:";
	int r;
	cin>>r;
	cout<<"ENTER TIME:";
	int t;
	cin>>t;
	float res,x;
	x=si(p,t,r);
	cout<<"\nSIMPLE INTEREST WITH "<<r<<"% RATE---->"<<res;
	res=si(55000,5);
	cout<<"\nSIMPLE INTEREST WITH 2% RATE---->"<<res;
	return 0;
}
