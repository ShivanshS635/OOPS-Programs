#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i,n1,n2;
    cin>>n1>>n2;
    for(i=n1;i<=9;i++)
    {
        if(i<=9)
        {
            switch(i)
            {
                case 1:cout<<"one\n";
                    break;
                case 2:cout<<"two\n";
                        break;
                case 3:cout<<"three\n";
                    break;
                case 4:cout<<"four\n";
                    break;
                case 5:cout<<"five\n";
                    break;
                case 6:cout<<"six\n";
                    break;
                case 7:cout<<"seven\n";
                    break;
                case 8:cout<<"eight\n";
                    break;
                case 9:cout<<"nine\n";
                    break;       
            }
        }
    }	
	if(n1>9)
	{
    	if(n1%2==0)
    	{
    	    cout<<"even\n";
    	}
	}
    else
    {
        cout<<"odd\n";
    }
for(i=n2;i<=9;i++)
    {
        if(i<=9)
        {
            switch(i)
            {
                case 1:cout<<"one\n";
                    break;
                case 2:cout<<"two\n";
                        break;
                case 3:cout<<"three\n";
                    break;
                case 4:cout<<"four\n";
                    break;
                case 5:cout<<"five\n";
                    break;
                case 6:cout<<"six\n";
                    break;
                case 7:cout<<"seven\n";
                    break;
                case 8:cout<<"eight\n";
                    break;
                case 9:cout<<"nine\n";
                    break;       
            }
        }
    }
	if(n2>9)
	{
    	if(n2%2==0)
    	{
    	    cout<<"even";
    	}
	}
	else
    {
        cout<<"odd";
    }
return 0;
}

