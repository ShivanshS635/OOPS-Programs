using namespace std;
#include<iostream>
#include<math.h>
#include<string.h>

float area(float x)
{
	float result=3.14*x*x;
	return result;
}

float area(float x,float y)
{
	float result=x*y;
	return result;
}

float area(float x,float y,float z)
{
	float s=(x+y+z)/2;
	float result=sqrt(s*(s-x)*(s-y)*(s-z));
	return result;
}

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

void reverse(int x)
{
	int num=x,rev;
	while(x!=0)
	{
		int d=x%10;
		rev=rev*10+d;
		x=x/10;
	}
	cout<<"\nREVERSE OF "<<num<<" IS "<<rev;
}

void reverse(char *y)
{
	strrev(y);
	cout<<"\nREVERSE OF STRING IS "<<y<<"\n";
}

void is_palindrome(int x)
{
	int num=x,rev;
	while(x!=0)
	{
		int d=x%10;
		rev=rev*10+d;
		x=x/10;
	}
	if(num==rev)
	{
		cout<<"\nENTERED NUMBER IS A PALIDROME :)";
	}
	else
	{
		cout<<"\nENTERED NUMBER IS NOT A PALIDROME :(";
	}
}

void is_palindrome(char *y)
{
	
	char z[20];
	strcpy(z,y);
	strrev(y);
	if(strcmp(z,y)==0)
	{
		cout<<"\nENTERED STRING IS A PALIDROME :)";
	}
	else
	{
		cout<<"\nENTERED STRING IS NOT A PALIDROME :(";
	}
}

int main()
{
	float a,b,c,d,e,f,g,h,i,j,k;
	float res;
	int ch;
	do{
		cout<<"\nSERIES MENU\n1---->FIND AREA\n2---->FIND MAX\n3---->DO REVERSE\n4---->CHECK PALINDROME\n5---->Exit";
		
		cout<<"\nENTER CHOICE:";
		cin>>ch;
		
		switch(ch)
		{
			case 1:	int ch1;
					do{
						cout<<"\nAREA MENU\n1---->AREA OF CIRCLE\n2---->AREA OF RECTANGLE\n3---->AREA OF TRIANGLE\n4---->EXIT";
		
						cout<<"\nENTER CHOICE:";
						cin>>ch1;
						switch(ch1)
						{
							case 1: cout<<"\nENTER RADIUS:";
									cin>>a;
									res=area(a);
									cout<<"\nAREA OF CICLE:"<<res;
									break;
									
							case 2: cout<<"\nENTER LENGTH AND BREADTH:";
									cin>>b>>c;
									res=area(b,c);
									cout<<"\nAREA OF RECTANGLE:"<<res;
									break;
									
							case 3: cout<<"\nENTER 3 SIDES:";
									cin>>d>>e>>f;
									res=area(d,e,f);
									cout<<"\nAREA OF TRIANGLE:"<<res;
									break;
									
							default:cout<<"INVALID CHOICE";
						}
						
				}while(ch1!=4);
				break;
			case 2:	int ch2;
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
									//max(i,j,k);
									break;
							default:cout<<"\nINVALD CHOICE";
						}
				}while(ch2!=3);
				break;
			case 3: int ch3;
				do{
					cout<<"\nREVERSE MENU\n1---->REVERSE OF A NUMBER\n2---->REVERSE OF A STRING\n3---->EXIT";
		
						cout<<"\nENTER CHOICE:";
						cin>>ch3;
						
						switch(ch3)
						{
							case 1:
								int x;
								cout<<"\nENTER ANY NUMBER:";
								cin>>x;
								reverse(x);
								break;
							case 2:
								int n,i;
								char *y;
								cout<<"\nENTER NUMBER OF CHARACTERS IN A STRING:";
								cin>>n;
								y=new char[n];
								cout<<"\nENTER YOUR STRING:";
								for(i=0;i<n;i++)
								{
									cin>>y[i];
								}
								reverse(y);
								delete []y;
								break;
						}
				}while(ch!=3);
				break;
			case 4:
				int ch4;
				do{
					cout<<"\nPALINDROME MENU\n1---->PALINDROME OF A NUMBER\n2---->PALINDROME OF A STRING\n3---->EXIT";
		
						cout<<"\nENTER CHOICE:";
						cin>>ch4;
						
						switch(ch4)
						{
							case 1:{
								int x;
								cout<<"\nENTER ANY NUMBER:";
								cin>>x;
								is_palindrome(x);
								break;
							}
							case 2:{
								int n,i;
								char *y;
								cout<<"\nENTER NUMBER OF CHARACTERS IN A STRING:";
								cin>>n;
								y=new char[n];
								cout<<"\nENTER YOUR STRING:";
								for(i=0;i<n;i++)
								{
									cin>>y[i];
								}
								is_palindrome(y);
								delete []y;
								break;
							}
							default:cout<<"\nINVALID CHOICE";
						}
				}while(ch4!=3);
				break;
			default:cout<<"INVALID CHOICE";
		}
	}while(ch!=5);
	return 0;
}
