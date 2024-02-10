 #include<iostream>
#include<malloc.h>
#include<strings.h>
using namespace std;

void checkpalindrome(char *,int);
int findminnum(char *,int);

int main()
{
	char *s;
	int n,num;
	cout<<"ENTER NUMBER OF ELEMENTS:";
	cin>>n;
	s=new char[n];  
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
//	if(checkpalindrome(s,n))
//	{
//		cout<<"THIS IS A PALINDROME";	
//	}  
//	else if(!checkpalindrome(s,n))
//	{
//		num=findminnum(s,n);
//		cout<<num;
//	}
	checkpalindrome(s,n);
	num=findminnum(s,n);
	cout<<num;
	delete [] s;
	return 0;
}

void checkpalindrome(char *s,int n)
{
	char *c;
	c=new char[n];
	strcpy(c,s);
	strrev(c);
	if(strcmp(s,c)==0)
	{
		cout<<"PALIDROME";
	}
	else
	{
		cout<<"NOT PALIDROME";
 }
	delete []c;
}
int findminnum(char *s,int n)
{
	char *p,*temp;
	p=new char[n];
	temp=new char[n];
	strcpy(temp,s);
	strcpy(p,strrev(temp));
	char *p1=s;
	char *p2=p;
	int i,num=0;
	for(i=1;i<=n && *p1!='\0';i++)
	{
		if(*p1==*p2)
		{
			p1=&s[i];
			p2=&p[i];
			break;
		}
		else
		{
			p1=&s[i];
			num++;
		}
	}
	delete []p;
	delete []temp;
	return num;
}
