using namespace std;
#include<iostream>

int stair(int);

int main()
{
	int n;
	cout<<"ENTER NUMBER:";
	cin>>n;
	cout<<stair(n);
	return 0;
}

int stair(int n)
{
	if(n<0)
	{
		return 0;
	}
	if(n==0)
	{
		return 1;
	}
	int ans=stair(n-1)+stair(n-2);
	return ans;
}
