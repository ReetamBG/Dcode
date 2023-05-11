#include <iostream>
using namespace std;

int main()
{
	float a,b;

	cout<<"Enter your cgpa"<<endl;
	cin>>a;

	if(a>=7)
	{	
		cout<<"Enter your HS percentage"<<endl;
		cin>>b;
		if(b>=80)
		{
			cout<<"You are eligible to join the club"<<endl;
		}
	}
	else
	{
		cout<<"You are not eligible to join the club"<<endl;
	}
	
	return 0;
}
