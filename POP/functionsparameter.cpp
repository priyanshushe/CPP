#include<iostream>
using namespace std;
int sum(int x,int y)      //formal parameter
{
    cout<<"The sum of given two numbers is:"<<(x+y)<<endl;
    return 0;
}
int main()
{
    int num1,num2;
    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"\n";
    cout<<"Enter the second number:";
    cin>>num2;
    cout<<"\n";
    sum(num1,num2);         //actual parameter(arguments)
    return 0;
}