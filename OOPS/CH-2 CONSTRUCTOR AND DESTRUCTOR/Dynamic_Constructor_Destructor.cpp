#include<iostream>
using namespace std;

class arr{
	int *a;
	int n;
	public:
		arr(int);
		~arr();
		void getarr();
		void sumarr();
};

arr::arr(int size)
{
	n=size;
	a=new int[n];
}

arr::~arr()
{
	delete []a;
}

void arr::getarr()
{
	int i;
	cout<<"\nENTER DATA:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
}

void arr::sumarr()
{
	int i,s=0;
	cout<<"\nARRAY ELEMENT----->";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
		s+=a[i];
	}
	cout<<"\nSUM----->"<<s;
}

int main()
{
	{
		arr a(5);
		a.getarr();
		a.sumarr();
	}
	{
		arr b(5);
		b.getarr();
		b.sumarr();
	}
	
	
	return 0;
}
