#include<iostream>
using namespace std;

int main()
{
	int input;
	cout<<"ENTER INPUT:";
	cin>>input;
	try
	{
		if(input<0)
		{
			throw "EXCEPTION:NEGATIVE NUMBER.";
		}
		if(input>=0)
		{
			throw "EXCEPTION:POSITIVE NUMBER.";
		}
	}
	catch(const char *msg1)
	{
		cout<<"CAUGHT EXPRESSION1 IN CATCH1\n"<<msg1;
	}
	catch(const char *msg2)
	{
		cout<<"CAUGHT EXPRESSION2 IN CATCH2\n"<<msg2;
	}
	return 0;
}
