#include<iostream>
#include<string>
using namespace std;

class binary{
    string b;
    void complement(); //private function.Can be called using public function of this class only
public:
    void read();
    void chk_bin();
    void display();
};
void binary::read()
{
    cout<<"Enter the Number"<<endl;
    cin>>b;
}
void binary::chk_bin()
{
    for(int i=0;i<b.length();i++)
    {
        if(b.at(i)!='0'&& b.at(i)!='1')
        {
            cout<<"The given number is not binary number."<<endl;
            exit(0);
        }
    }
}
void binary::complement()
{
    for(int i=0;i<b.length();i++)
    {
        if(b.at(i)=='0')
        {
            b.at(i)='1';
        }
        else
        {
            b.at(i)='0';
        }
            
    }
}
void binary::display()
{
    cout<<"The number is:";
    for(int i=0;i<b.length();i++)
    {
        cout<<b.at(i);
    }
    cout<<endl;
    complement();
}
int main()
{
    binary number;
    number.read();
    number.chk_bin();
    number.display(); //first display is without complement.
    number.display();//this display is after complement.
    return 0;
}