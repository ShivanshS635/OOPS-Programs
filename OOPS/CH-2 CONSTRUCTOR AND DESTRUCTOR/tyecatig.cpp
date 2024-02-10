#include<iostream>
using namespace std;
 class mynumber{
	int value;
	public:
		mynumber(int v)
		{
			value=v;
		}
		void display()
		{
			cout<<"VALUE:"<<value;
		}
		operator int()
		{
			return value;
		}
 };
 
 int main()
 {
	mynumber numb(10);
	int x=numb;
	cout<<"THE VALUE:"<<x;
	return 0;
 }
