using namespace std;
#include<iostream>

void swap(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}

int main()
{
	int a,b;
	cout<<"ENTER 2 NUMBERS:";
	cin>>a>>b;
	cout<<"\nVALUE OF A AND B BEFORE SWAPPING "<<a<<" "<<b;
	swap(a,b);
	cout<<"\nVALUE OF A AND B AFTER SWAPPING "<<a<<" "<<b;
	return 0;
}
