#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
	string message;
	cout << "Enter a message: ";
	getline(cin, message);
	cout << "You entered: " << message << endl;
	return 0;
}
