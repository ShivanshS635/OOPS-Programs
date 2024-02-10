using namespace std;
#include<iostream>

class alpha{
	public:
		class beta{
			public:
				void display()
				{
					cout<<"\nDISPLAY OF BETA.";
				}
		};
		void show()
		{
			beta b;
			b.display();

			cout<<"\nSHOW OF ALPHA.";
		}
};

int main()
{
	alpha aa;
	aa.show();
	
	alpha::beta bb;
	bb.display();
	
	return 0;
}
