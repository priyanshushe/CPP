#include<iostream>
//data types example
using namespace std;
int result=30;
bool is_true;
int main()
{
    int a=14,b=16;
    char d='w';
    cout<< "the value of d is:"<<d;
    cout<<"\nThe value of a is:"<<a;
    cout<<"\nthe value of b is:"<<b;
    cout<<"\nThe sum is:"<<(a+b);
    if((a+b)==result)
    {
        is_true=true;
        cout<<"\nthe sum is verified"<<is_true;
    }
    else
    {
        is_true=false;
        cout<<"\nthe result is not verified"<<is_true;
    }
}