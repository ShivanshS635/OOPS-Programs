#include<iostream>
using namespace std;

template<typename T1,typename T2>

void myadd(T1 a,T2 b)
{
	cout<<a+b<<endl;
}

int main()
{
	int a,b,res;
	double x,y;
	cout<<"ENTER INTEGER A AND B:";
	cin>>a>>b;
	cout<<"ENTER DOUBLE X AND Y:";
	cin>>x>>y;
	myadd(a,x);
	myadd(b,y);
	return 0;
}

/*template<typename T>

T myadd(T a,T b)
{
	return a+b;
}

int main()
{
	int a,b,res;
	cout<<"ENTER INTEGER A AND B:";
	cin>>a>>b;
	cout<<myadd(a,b)<<endl;
	double x,y;
	cout<<"ENTER DOUBLE X AND Y:";
	cin>>x>>y;
	cout<<myadd(x,y);
	return 0;
}*/
