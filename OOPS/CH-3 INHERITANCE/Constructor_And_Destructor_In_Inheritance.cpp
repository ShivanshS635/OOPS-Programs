 #include<iostream>
using namespace std;

class alpha{
	int a;
	public:
		alpha(int x)
		{
			a=x;
			cout<<"\nCONSTRUCTOR OF ALPHA.";
		}
		~alpha()
		{
			cout<<"\nDESTRUCTOR OF ALPHA.";
		}
		void putalp()
		{
			cout<<"\nA------->"<<a;
		}
};

class beta:public alpha{
	int b,c;
	public:
		beta(int x,int y,int z):alpha(z)
		{
			b=x;
			c=y;
			cout<<"\nCONSTRUCTOR OF BETA.";
		}
		~beta()
		{
			cout<<"\nDESTRUCTOR OF BETA.";
		}
		void putbet()
		{
			cout<<"\nB------->"<<b;
			cout<<"\nC------->"<<c;
		}
};

class gamma:public beta{
	int d;
	public:
		gamma(int p):beta(p+5,p+10,p+15)
		{
			d=p;
			cout<<"\nCONSTRUCTOR OF GAMMA.";
		}
		~gamma()
		{
			cout<<"\nDESTRUCTOR OF GAMMA.";
		}
		void putga()
		{
			cout<<"\nD------->"<<d;
		}
};

int main()
{
	gamma g(10);
	g.putalp();
	g.putbet();
	g.putga();
	
	
	return 0;
}
