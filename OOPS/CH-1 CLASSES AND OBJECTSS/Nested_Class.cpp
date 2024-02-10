using namespace std;
#include<iostream>

class alpha{
	public:
		void display()
		{
			cout<<"\nDISPLAY OF ALPHA.";
		}
};

class beta{
	//alpha x;
	public:
		alpha x;
		void show()
		{
			cout<<"\nBETA SHOW.";
			x.display();
		}
};

int main()
{
	beta bb;
	bb.show();
	
	bb.x.display();
	
	return 0;
}
