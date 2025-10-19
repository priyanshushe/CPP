#include<iostream>
using namespace std;
class toggle;
class Swap
{
    public:
        void swapfun(toggle &);
};
class toggle
{
    int payment;
    int bonus;
    public:
    void read()
    {
        cout<<"Enter the payment:"<<endl;
        cin>>payment;
        cout<<"Enter the bonus:"<<endl;
        cin>>bonus;
    }
    void display()
    {
        cout<<"The payment is:"<<payment<<" and the bonus is:"<<bonus<<endl;
    }
    friend void Swap::swapfun(toggle &o1);
};
void Swap::swapfun(toggle &o1)
{
    int temp=o1.payment;
    o1.payment=o1.bonus;
    o1.bonus=temp;
    cout<<"After swapping the new payment and bonus is"<<endl;
}
int main()
{
    toggle A;
    A.read();
    A.display();
    Swap S;
    S.swapfun(A);
    A.display();
}