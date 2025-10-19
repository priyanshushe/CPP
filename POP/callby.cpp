#include<iostream>
using namespace std;

//..........CALL BY VALUE....................
// void change(int x)           //value parameter
// {
//     x=(x+10);//changing locally
// }

//..........CALL BY REFERENCE...............
// void changeref(int &x)       //reference parameter
// {
//     x=(x+10);
// }

//...........CALL BY POINTER................
// void modify(int *x)     //pointer parameter
// {
//     *x=(*x+10);
// }
int main()
{
    int a;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    //change(a);          //call by value.
    //changeref(a);       //call by reference.
    //modify(&a);           //call by pointer.
    cout<<"The changed value of a is:"<<a<<endl;
}