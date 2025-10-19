#include<iostream>
using namespace std;
int area(int a)
{
    return a*a;
}
int area(int a,int b)     //overloading with different number of parameter.
{
    return a*b;
}
int main()
{
    int a,l,b;
    cout<<"Enter the side of square:"<<endl;
    cin>>a;
    cout<<"enter the length of rectange:"<<endl;
    cin>>l;
    cout<<"Enter the width of rectange:"<<endl;
    cin>>b;
    cout<<"The area of square having side "<<a<<" is:"<<area(a)<<endl;
    cout<<"The area of rectange having length "<<l<<" and width "<<b<<" is:"<<area(l,b)<<endl;
    return 0;
}