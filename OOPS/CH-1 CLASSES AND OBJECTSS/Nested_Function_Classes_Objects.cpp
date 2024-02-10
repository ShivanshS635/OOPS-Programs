using namespace std;
#include<iostream>
class maxi{
	public:
		int max_of_two(int x,int y)
		{
			if(x>y)
			{
				return x;
			}
			else
			{
				return y;
			}
		}
		int max_of_three(int x,int y,int z)
		{
			if(max_of_two(x,y)==x)
			{
				if(x>z)
					return x;
				else
					return y;
			}
			else
			{
				if(y>z)
					return y;
				else
					return z;
			}
		}
};

int main()
{
	maxi m;
	cout<<m.max_of_two(2,5);
	cout<<"\n"<<m.max_of_three(5,7,6);
	return 0;
}
