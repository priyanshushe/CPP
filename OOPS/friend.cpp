#include<iostream>
using namespace std;
class Myclass;
class friendclass
{
public:
    void addvalue( Myclass,Myclass,Myclass &);
};
class Myclass{
    int data;
    static int count;
    public:
        void read()
        {
            cout<<"enter the data "<<count+1<<" :";
            cin>>data;
        }
        void display()
        {
            cout<<"the data value of"<<count<<"is:"<<data<<endl;
            count++;
        }
        friend void editvalue(Myclass &o,Myclass &o2);  //friend function.
        friend class friendclass;    //here we declared whole friendclass as friend,we could have mentioned only addvalue.
        //friend void friendclass::addvalue(Myclass,Myclass);  //did when we dont want to give access to whole class.
};
int Myclass::count;
void editvalue(Myclass &o,Myclass &o2)    //call by reference Otherwise it won't be edited at original place.
{
    o2.data=o.data+34;  // we can store the value in new object as well as edit that object also
    o.data=o.data+23;   //we edited that object here.
    cout<<"Edited the value"<<endl;
}
void friendclass::addvalue(Myclass o1,Myclass o2,Myclass &o3)
{
    o3.data=o1.data+o2.data;  //..............................IMPORTANT................................
    cout<<"The sum of data is"<<o3.data<<endl;
}

int main()
{
    Myclass A,B,C,E;
    A.read();
    A.display();

    editvalue(A,E);
    A.display();
    E.display();

    B.read();
    B.display();

    friendclass D;
    D.addvalue(A,B,C);
    C.display();
    return 0;
}
