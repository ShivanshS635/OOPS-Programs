#include<iostream>
using namespace std;

int main()
{
	char name[550];
	cout<<"ENTER YOUR NAME:";
	cin.getline(name,550);
	cout<<"\nYOUR NAME IS: ";
	cout<<name;
	return 0;
}
