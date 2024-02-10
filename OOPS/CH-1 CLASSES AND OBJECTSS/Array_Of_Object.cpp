using namespace std;
#include<iostream>

class book{
	private:
		int bcode;
		char bname[20],author[20];
		float rate;
		int qoh;
	public:
		void getdata()
		{
			cout<<"-----ENTER DATA-----";//BCODE,NAME,PRICE,QUANTITY:";
			cin>>bcode>>bname>>author;//rate>>qoh;
		}
		
		void putdata() const
		{
			cout<<"\nISBN----->"<<bcode;
			cout<<"\nTITLE----->"<<bname;
			//cout<<"\nRATE----->"<<rate;
			//cout<<"\nQOHH----->"<<qoh<<"\n\n";
			cout<<"\nAUTHOR----->"<<author;
		}
		
		/*int getqoh()
		{
			return qoh;
		}*/
};

int main()
{
	int i,tot=0;
	book b;
	b.getdata();
		//tot=tot+b[i].getqoh();
	b.putdata();
	//cout<<"\nTOTAL QUANTITY OF 5  BOOK IS ----->"<<tot;
	return 0;
}
