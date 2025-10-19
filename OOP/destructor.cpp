#include<iostream>
#include<string>
using namespace std;
class Currency{
    float value;
    float valueindollar;
    public:
        Currency(float a)
        {
            value=a;
            valueindollar=(a/87.13);
            display();
        }
        ~Currency()
        {
            cout<<"Destructor called."<<endl;
        }
        void display();
};
void Currency::display()
{
    cout<<"The value of "<<value<<" in dolllar is "<<valueindollar<<"$"<<endl;
}
int main()
{
    int x;
    cout<<"Enter the amount:"<<endl;
    cin>>x;
    Currency c1(x);
    {
        cout<<"Creating one more object."<<endl;
        Currency c2(75);
    }
    cout<<"Final line reached"<<endl;
    return 0;

}