#include<iostream>
using namespace std;

int sum(int* a,int* b);
int main()
{
    int a,b;
    a=2,b=3;

    cout<<"Before function call\n";
    cout<<a<<" "<<b<<endl;

    sum(&a,&b);
    cout<<"After function call\n";
    cout<<a<<" "<<b<<endl;
}

int sum(int* a,int* b)
{
    *a=10;
    *b=20;
    return 0;
}

