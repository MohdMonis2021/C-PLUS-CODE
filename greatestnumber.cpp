#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"enter the number";
	cin>>x>>y>>z;
	if( x<y )
	{
		if(y<z)
		{
		cout<<"y is greater";	
		}
		else
		{
		cout<<"z is greater";	
		}
	}
	else
	{
	cout<<"x is greater";
	}
	
	return 0;

}
