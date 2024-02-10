using namespace std;
#include<iostream>

class tarr{
	private:
		int arr1[10][10];
		int arr2[10][10];
		int m,n,p;
	public:
		void getarr();
		void showarr();
		void mult();
		void add();
};

void tarr::getarr()
{
	int i,j,k;
	cout<<"\nENTER THE NUMBER OF ROWS AND COLUMN IN A MATRIX 1:";
	cin>>m>>p;
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			cout<<"\nENTER ("<<i+1<<","<<j+1<<")"<<" ELEMENT OF A MATRIX:";
			cin>>arr1[i][j];
		}
	}
	
	cout<<"\nENTER THE NUMBER OF ROWS AND COLUMN IN A MATRIX 2:";
	cin>>p>>n;
	
	for(i=0;i<p;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\nENTER ("<<i+1<<","<<j+1<<")"<<" ELEMENT OF A MATRIX:";
			cin>>arr2[i][j];
		}
	}
}

void tarr::showarr()
{
	int i,j,k;
	cout<<"\n-----MATRIX-----\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			cout<<arr1[i][j]<<"  ";
		}
		cout<<"\n";
	}
	
	cout<<"\n-----MATRIX-----\n";
	for(i=0;i<p;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<arr2[i][j]<<"  ";
		}
		cout<<"\n";
	}
}

void tarr::mult()
{
	int i,j,k,arr3[10][10];

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			arr3[i][j]=0;
			for(k=0;k<p;k++)
			{
				arr3[i][j]=arr3[i][j]+(arr1[i][k]*arr2[k][j]);
			}
		}
	}
	cout<<"\n-----MATRIX AFTER MULTIPLICATION-----\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<arr3[i][j]<<"  ";
		}
		cout<<"\n";
	}
}

void tarr::add()
{
	int i,j,k,arr3[10][10];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<p;k++)
			{
				arr3[i][j]=arr3[i][j]+(arr1[i][k]+arr2[k][j]);
			}
		}
	}
	cout<<"\n-----MATRIX AFTER MULTIPLICATION-----\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<arr3[i][j]<<"  ";
		}
		cout<<"\n";
	}
}
		
int main()
{
	tarr arr;
	
	arr.getarr();
	arr.showarr();
	arr.mult();
	arr.add();
	
	return 0;
}
