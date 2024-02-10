using namespace std;
#include<iostream>
int main()
{
	int i;
	int ch;
	int a=1,b=1;
	do{
		cout<<"SERIES MENU\n1---->Odd\n2---->Even\n3---->Fibonacci\n4---->Exit";
		
		cout<<"\nENTER CHOICE:";
		cin>>ch;
		
		switch(ch)
		{
			case 1:for(i=1;i<=10;i++){
						if(i%2==0)
						{
							cout<<i<<"\n";
						}
					}
					break;	
			case 2:for(i=1;i<=10;i++){
						if(i%2!=0)
						{
							cout<<i<<"\n";
						}	
					}
					break;
			case 3:for(i;i<5;i++)
					{
						cout<<a<<"\n";
						int c=a+b;
						a=b;
						b=c;
					}
					break;
			default:cout<<"INVALID CHOICE\n";
		}
	}while(ch!=4);
	return 0;
}
