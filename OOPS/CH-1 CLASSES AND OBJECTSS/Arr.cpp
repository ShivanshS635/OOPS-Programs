using namespace std;
#include<iostream>

class book{
	int bcode;
	char bname[20];
	float rate;
	int qoh;
	
	public:
		void getdata()
		{
			cout<<"\nENTER bcode,bname,rate,qoh:";;
			cin>>bcode>>bname>>rate>>qoh;
		}
		
		void putdata()
		{
			cout<<"\nCODE----->"<<bcode;
			cout<<"\nNAME----->"<<bname;
			cout<<"\nRATE----->"<<rate;
			cout<<"\nQUANTITY----->"<<qoh;
		}
		
		int giveqoh()
		{
			return qoh;
		}
};

int main()
{
	book b[3];
	int i,tot=0;
	cout<<"\n-----ENTER 3 BOOK DETAILS-----";
	for(i=0;i<3;i++)
	{
		b[i].getdata();
		tot=tot+b[i].giveqoh();
	}
	
	cout<<"\n-----BOOK DETAILS-----";
	for(i=0;i<3;i++)
	{
		b[i].putdata();
	}
	
	cout<<"\nTOTAL QUANTITY OF BOOKS:"<<tot;
	return 0;
}
