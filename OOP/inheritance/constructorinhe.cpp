#include <iostream>
using namespace std;
class base1
{
    int a,b;
public:
    base1(int i,int j):a(i),b(j){//initializing value here(works only with constructors)
        cout<<"constructor of base1"<<endl;
        cout<<"The value of a is "<<a<<" and b is "<<b<<endl;
    }
};
class base2
{
    int c,d;
    public:
        base2(int i,int j):c(i*2),d(c*j){  //under initialization secton simple operations can be done.
            cout<<"constructor of base2"<<endl;
            cout<<"The value of c is "<<c<<" and d is "<<d<<endl;
        }
};
class derived : public base2,public base1{  //constructor of bases are callled in order of their declaration
    int e,f;
    public:
        derived(int a,int b,int c,int d,int e,int f):base1(a,b),base2(d,e){ /*special syntax used in C++ for base 
            constructors having arguments*/
            e=e;
            f=f;
            cout<<"The value of e is"<<e<<" and f is "<<f<<endl;
        }
};
int main()
{
    derived d(2,3,4,5,6,1);
    return 0;
}