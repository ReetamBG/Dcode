#include<iostream>
using namespace std;

/*
Function declaration syntax
 
 [datatype] [function name] ([arguments])
{ insert code and return the value} 
*/

/*Function can be fruitful or non fruitful (which doesnt return any value) (eg. a print something function)*/


int sum(int a,int b)
{
    int c;
    c=a+b;
    cout<<c<<endl;

    return c;
}

int main()
{
    sum(3,5);

}