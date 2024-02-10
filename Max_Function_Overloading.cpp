using namespace std;
#include<iostream>
	
void max(int x,int y)
{
	if(x>y)
	{
		cout<<"\n"<<x<<" IS THE MAXIMUM";
	}
	else
	{
		cout<<"\n"<<y<<" IS THE MAXIMUM";
	}
}
void max(int x,int y,int z)
{
	if(x>y)
	{
		if(x>z)
		{
			cout<<"\n"<<x<<" IS THE MAXIMUM";
		}
		else
		{
			cout<<"\n"<<z<<" IS THE MAXIMUM";
		}
	}
	else
	{
		if(y>z)
		{
			cout<<"\n"<<y<<" IS THE MAXIMUM";
		}
		else
		{
			cout<<"\n"<<z<<" IS THE MAXIMUM";
		}
	}
}
	
int main()
{
	int ch2,g,h,i,j,k,l;
	do{
		cout<<"\nMAXIMUM MENU\n1---->MAX OF 2\n2---->MAX OF THREE\n3---->EXIT";
		cout<<"\nENTER CHOICE:";
		cin>>ch2;
	
		switch(ch2)
		{
			case 1: cout<<"\nENTER TWO NUMBERS:";
					cin>>g>>h; 
					max(g,h);
					break;
			case 2: cout<<"\nENTER THREE NUMBERS:";
					cin>>i>>j>>k; 
					
					max(i,j,k);
					break;
			default:cout<<"\nINVALD CHOICE";
		}
	}while(ch2!=3);
	return 0;
}
