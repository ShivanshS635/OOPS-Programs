#include<iostream>
using namespace std;

template<class T>

class vector{
	T*arr;
	int size;
	public:
		int i;
		vector(int m)
		{
			size=m;
			arr=new T[size];
			for(i=0;i<size;i++)
			{
				cin>>arr[i];
			}
		}
		T DotProduct(vector &v)
		{
			T d=0;
			for(i=0;i<size;i++)
			{
				d += arr[i] * v.arr[i];
			}
			return d;
		}
};

int main()
{
	vector<int> MyVec1(5);
	vector<int> MyVec2(5);
	
	int p;
	p=MyVec1.DotProduct(MyVec2);
	
	cout<<"Dot Product Of V1 And V2----->"<<p;
	return 0;
}
