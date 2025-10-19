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
        // constructor()  //Default constructor.
        // {
        //     a=10;
        //     b=3;
        // }
        void display()
        {
            cout<<"The point is at:("<<a<<","<<b<<")";
        }
};
int main()
{
    constructor C(10,3);  //Implicit call.
    C.display();
    constructor D=constructor(5,9);  //Explicit call.
    D.display();
    return 0;
}