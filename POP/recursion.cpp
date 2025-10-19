#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return (n*factorial(n-1));
}
int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
    return fib(n-2)+fib(n-1);     //nth term = (n-1)th term + (n-2)th term.
}
int main()
{
    int n;
    cout<<"Enter the number of which you want the operation on:"<<endl;
    cin>>n;
    //cout<<"The "<<n<<"th term of fibonaci sequence is:"<<fib(n)<<endl;
    cout<<"The factorial of "<<n<<" is:"<<factorial(n);
    return 0;
}