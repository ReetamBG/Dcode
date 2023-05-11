#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
	float a,b,c; int n;
	
	cout<<"Enter the two numbers"<<endl;
	cin>>a>>b;

	cout<<"Enter the operation 1.Add 2.Subtract 3.Multiply 4.Divide"<<endl;
	cin>>n;

	switch(n)
	{
		case 1:
		cout<<a+b;
		break;

		case 2:
		cout<<a-b;
		break;

		case 3:
		cout<<a*b;
		break;

		case 4:
		cout<<a/b;
		break;

		default:
		cout<<"Invalid Input";
	}

	return 0;
}
