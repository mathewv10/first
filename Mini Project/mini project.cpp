#include<iostream>
#include<string.h>
using namespace std;

char q,k,j;

character(double x, double y)
{
try
{
	if((!(('a'>=y)||(y<='z')))||(!(('a'>=x)||(x<='z'))))
	{
	throw k;
	}
}
catch(char c)
{
cout<<endl<<"No proper data entered"<<endl;
return 0;
exit;
}

};

int main()
{
	double x,y;
	cout<<"Enter two numbers to be divided "<<endl;
	cin>>x;
	cin>>y;
	character(x,y);
	try
	{
		if((x>y)&&(x>=0)&&(y!=0))
		{
		cout<<"x/y = "<<x/y<<endl;
		}		
		else if((x<y)&&(y!=0)&&(x!=0))
		{
		throw 0;
		}
		else if(y==0)
		{
		throw 1.0; 
		}
		else if((x==0)&&(y>=0))
		{
		cout<<"the result of given value is Zero "<<endl;	
		}
	cout<<endl<<"End of try block"<<endl;
	}		
	catch(int i)
	{
	cout<<"Value of second number greater than first number "<<endl;
	}
	catch(double y)
	{
	cout<<"Cannot divide by 0"<<endl;
	}
	cout<<endl<<"Enter Character to end"<<endl;
	cin>>j;
	
	return 0;
}
