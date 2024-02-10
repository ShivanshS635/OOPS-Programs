#include<iostream>
using namespace std;

int ctr=0;

class sample{
	public:
		sample()
		{
			cout<<ctr<<"\n";
			ctr++;
		}
		~sample()
		{
			cout<<ctr<<"\n";
			ctr--;
		}
};

int main()
{
	sample a,b;
	{
		sample c;
		{
			sample d;
		}
		{
			sample e;
		}
	}
	
	return 0;
}
