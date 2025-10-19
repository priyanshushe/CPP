#include<iostream>
using namespace std;

int main()
{
    int a=689;
    int* b=&a;
    cout<<"The address of a is:"<<b<<endl;
    cout<<"The conventional way to display address:"<<&a<<endl;
    cout<<"The value of address stored at b is:"<<*b<<endl;
    int** c=&b;
    cout<<"The address of pointer b is:"<<c<<endl;
    cout<<"The value stored in address b is:"<<**c<<endl;
    return 0;
}
