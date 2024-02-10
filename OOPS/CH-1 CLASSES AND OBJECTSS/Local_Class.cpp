using namespace std;
#include<iostream>

class alpha{
	public:
		void display()
		{
			class beta{
				public:
					void show()
					{
						cout<<"\nSHOW OF BETA.";
					}
			};
			beta bb;
			bb.show();
			cout<<"\nDISPLAY OF ALPHA.";
		}
};

int main()
{
	alpha aa;
	aa.display();
	
	return 0;
}
