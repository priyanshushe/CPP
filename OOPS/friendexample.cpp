#include<iostream>
using namespace std;
class number;
class Complex
{
    public:
        void makingcomplex(number,number);
};
class number
{
    int num;
    public:
        void setnumber()
        {
            cout<<"Enter the value of number:"<<endl;
            cin>>num;
        }
        friend class Complex;
};
void Complex::makingcomplex(number o1,number o2)
{
    cout<<"The complex number from data is:"<<o1.num<<" + "<<o2.num<<"i"<<endl;
}
int main()
{
    number data1,data2;
    data1.setnumber();
    data2.setnumber();
    Complex complexdata;
    complexdata.makingcomplex(data1,data2);
    return 0;
}