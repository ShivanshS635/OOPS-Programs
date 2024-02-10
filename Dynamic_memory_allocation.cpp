using namespace std;
#include<iostream>
int main()
{
	int *a;
	int i,n,sum=0;
	cout<<"\nEnter Number Of Element In An Array:";
	cin>>n;
	a=new int[n];
	cout<<"\nEnter "<<n<<" numbers:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	cout<<"Sum Of "<<n<<" Numbers:"<<sum;
	delete []a;
	
	return 0;
}
