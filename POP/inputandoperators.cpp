#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"\n";
    cout<<"enter the value of b:";
    cin>>b;
    cout<<"\n";
    // arithmetic operators
    cout<<"the value of (a+b) is:"<<(a+b)<<endl;
    cout<<"the value of (a-b) is:"<<(a-b)<<endl;
    cout<<"the value of (a*b) is:"<<(a*b)<<endl;
    cout<<"the value of (a/b) is:"<<(a/b)<<endl;
    cout<<"the value of (a%b) is:"<<(a%b)<<endl;
    cout<<"the value of (a^b) is:"<<(a^b)<<endl;
    cout<<"\n";
    // comparision operator
    cout<<"Is (a=b):"<<(a==b)<<endl;
    cout<<"Is (a>b):"<<(a>b)<<endl;
    cout<<"Is (a<b):"<<(a<b)<<endl;
    cout<<"Is (a!=b):"<<(a!=b)<<endl;
    cout<<"Is (a>=b):"<<(a>=b)<<endl;
    cout<<"Is (a<=b:"<<(a<=b)<<endl;
    cout<<"\n";
    //logical operator
    cout<<"the value of (a==b)&&(a>b) is:"<<((a==b)&&(a>b))<<endl;
    cout<<"the value of (a==b) or (a>b) is:"<<((a==b)||(a>b))<<endl;
    cout<<"The value of (!(a>b)) is:"<<(!(a>b))<<endl;
    cout<<"\n";
    return 0;
}