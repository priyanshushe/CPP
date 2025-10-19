#include<iostream>
using namespace std;
inline int operation(int a,int b)
{
    static int c=0;
    cout<<"The value of(a*b+c) is:"<<(a*b+c)<<endl;
    c++;
}
int main()
{
    int num1,num2;
    cout<<"Enter the value of num1:";
    cin>>num1;
    cout<<"Enter the value of num2:";
    cin>>num2;
    operation(num1,num2);   //value of c=0 as static int c=0.
    operation(num1,num2);   //value of c is 1.retained from previos function call.
    operation(num1,num2);   //value of c is 2.retained from previos function call.
    operation(num1,num2);   //value of c is 3.retained from previos function call.
    return 0;
}