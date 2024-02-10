#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int rollnm;
	char rep,name[20];
	float fee;
	cout<<"DO YOU WANT TO ADD DETAIL?(y/n):";
	cin>>rep;
	ofstream fout("Student.txt",ios::app);
	while(rep=='y')
	{
		cout<<"ENTER ROLL NUMBER,NAME,FEES:";
		cin>>rollnm>>name>>fee;
		fout<<rollnm<<" "<<name<<" "<<fee<<"\n";
		cout<<"DO YOU WANT TO ADD MORE RECORDS(y/n):";
		cin>>rep;
	}
	fout.close();
	
	cout<<"\nREADING DATA FROM STUDENT TEXT FILE......";
	
	ifstream fin("Student.txt");
	fin>>rollnm>>name>>fee;
	while(fin)
	{
		cout<<"\nROLL NUMBER:"<<rollnm;
		cout<<"\nNAME       :"<<name;
		cout<<"\nFEE        :"<<fee;
		fin>>rollnm>>name>>fee;
	}
	fin.close();
	
	return 0;
}
