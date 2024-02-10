#include<iostream>
using namespace std;

class vector
{
	
	public:
		int *arr;
		int size;
		vector(int m)
		{
			size=m;
			arr=new int[m];
		}
		int dot_product(vector &v)
		{
			int d=0;
			for(int i=0;i<size;i++)
			{
				d=d+ this->arr[i]*v.arr[i];
			}
			return d;
		}	
};


int main()
{
	vector v1(3),v2(3);
	v1.arr[0]=4;
	v1.arr[1]=3;
	v1.arr[2]=1;
	
	v2.arr[0]=1;
	v2.arr[1]=0;
	v2.arr[2]=1;
	
	int a;
	a=v1.dot_product(v2);
	cout<<a<<endl;
	
	return 0;
}
