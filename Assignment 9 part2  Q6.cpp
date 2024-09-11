#include<iostream>
using namespace std;


int main()
{
	double x,y;
	cout<<"Enter two numbers to be divided "<<endl;
	cin>>x>>y;
	try
	{
		if(y!=0)
		{
			cout<<"x/y ="<<x/y;
		}
		else
		{
			throw(y); 
		}
	}
	catch (double i)
		{
			cout<<"Cannot divide by 0"<<endl;
		}

	return 0;
	
}
