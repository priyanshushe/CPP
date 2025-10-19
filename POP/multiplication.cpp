#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    if(n==0)
    {
        cout<<"multiplication table of 0 is not feasible"<<endl;

    }
    else
    {
        cout<<"The table of"<<n<<"is:"<<endl;
        int i;
        for(i=1;i<=10;i++)
        {
            cout<<n<<"x"<<i<<"is:"<<setw(2)<<(n*i)<<endl; //setw expects integer value.
        }
    }
    return 0;
}