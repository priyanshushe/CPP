#include<iostream>
using namespace std;
class constructor
{
    int a,b;
    public:
        constructor(int x,int y)
        {
            a=x;
            b=y;
        }
        constructor()  //Default constructor.
        {
            a=10;
            b=3;
        }
        // constructor(int x) //constructor overloading.
        // {
        //     a=x;
        //     b=10;
        // }
        constructor(int x,float y=9.3) ///default parameter.
        {
            a=x;
            b=y;
        }
        void display()
        {
            cout<<"The point is at:("<<a<<","<<b<<")"<<endl;
        }
};
int main()
{
    constructor C(10,3);  //Implicit call.
    C.display();
    // constructor D=constructor(5,9);  //Explicit call.
    constructor D(5);
    D.display();
    constructor E;
    E.display();
    constructor F();
    return 0;
}