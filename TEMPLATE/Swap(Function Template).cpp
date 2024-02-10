#include<iostream>
using namespace std;

template<class T>

void Swap(T &x,T &y)
{
	T temp;
	temp=x;
	x=y;
	y=temp;
}

int main()
{
	
	float x=10.1,y=20.2;
	cout<<"Before Swap"<<x<<" "<<y<<endl;
	swap(x,y);
	cout<<"After Swap"<<x<<" "<<y;
	return 0;
}
