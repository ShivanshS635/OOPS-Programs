using namespace std;
#include<iostream>

class arr{
	int ar[5];
	public:
		void getarr();
		void sum_arr();
		void search(int x);
};

void arr::getarr()
{
	int i;
	cout<<"ENTER ARRAY ELEMENTS:";
	for(i=0;i<5;i++)
	{
		cin>>ar[i];
	}
}

void arr::sum_arr()
{
	int i,sum=0;
	cout<<"ARRAY ELEMENTS ARE:";
	for(i=0;i<5;i++)
	{
		cout<<" "<<ar[i];
		sum=sum+ar[i];
	}
	cout<<"\nSUM OF ELEMENTS IS----->"<<sum;
}

void arr::search(int x)
{
	int i,flag=0;
	for(i=0;i<5;i++)
	{
		if(ar[i]==x)
		{
			flag=1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==1)
	{
		cout<<"\n"<<x<<" FOUND AT "<<i+1;
	}
	else
	{
		cout<<"\n"<<x<<" NOT FOUND";
	}
}

int main()
{
	arr a;
	a.getarr();
	a.sum_arr();
	cout<<"\nENTER ELEMENT TO SEARCH:";
	int el;
	cin>>el;
	a.search(el);
	cout<<"\nENTER ELEMENT TO SEARCH:";
	cin>>el;
	a.search(el);
	return 0;
}
