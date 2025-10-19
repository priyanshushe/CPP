#include<iostream>
using namespace std;
class complex{
    int real;
    float imaginary;
    public:
        complex& setdata(int a,float b){ //this will return reference to object.
            real=a;
            imaginary=b;
            return *this;  //here this operator return full object not a single variable
        }
        void display()
        {
            cout<<"The complex number is "<<real<<"+i"<<imaginary<<endl;
        }
};
int main()
{
    //THIS IS A METHOD USEDTO INITIALIZE OBJECTS
    complex (*ptr)=new complex[2];
    complex *tempptr=ptr;
    int m;
    float n;
    for(int i=0;i<2;i++)
    {
        cout<<"Enter the values to set"<<endl;
        cin>>m>>n;
        ptr->setdata(m,n).display();
        ptr++;
    }
    // for(int i=0;i<2;i++)
    // {
    //     tempptr->display();
    //     tempptr++;
    // }
    // ptr->setdata(2,4);
    // ptr->display();
    // delete ptr;
    //ptr->display();   this will show garbage value as ptr is deleted
    // complex C;
    // C.setdata(1,4);
    // C.display();
}