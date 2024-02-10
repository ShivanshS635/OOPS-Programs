#include<iostream>
#include<string.h>
using namespace std;

class str{
	private:
			char s[20];
	public:
		void getdata()
		{
			cout<<"ENTER STRING:";
			cin>>s;
		}
		
		void display()
		{
			cout<<"STRING---->"<<s<<"\n";
		}
	friend str operator +(str,str);
};

str operator +(str p1,str p2)
	{
		str p3;
		p3.s=strcat(p1.s,p2.s);
		return p3;
	}

int main()
{
	str n1;
	str n2;
	
	n1.getdata();
	n2.getdata();
	
	n1.display();
	n2.display();
	
	str n3;
	n3=n1+n2;
	
	n3.display();
		
	return 0;
}
