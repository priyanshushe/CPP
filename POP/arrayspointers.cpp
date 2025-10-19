#include<iostream>
using namespace std;
int main()
{
    int Percentage[5]={80,82,88,90,84};
    cout<<Percentage[2];
    for(int i=0;i<5;i++)
    {
        cout<<"The percentage of student "<<i<<"is:"<<Percentage[i]<<endl;
    }
    cout<<"\n";
    int Totalmarks[5];
    Totalmarks[0]=400;
    Totalmarks[1]=410;
    Totalmarks[2]=440;
    Totalmarks[3]=450;
    Totalmarks[4]=420;
    int i=0;
    while(i<5)
    {
        cout<<"THE Total marks of student"<<i<<"is:"<<Totalmarks[i]<<endl;
        i++;
    }
    cout<<"\n";
    int Mathsmarks[]={95,95,90,83,89};
    int j=0;
    do
    {
        cout<<"Maths marks of Student"<<j<<"is:"<<Mathsmarks[j]<<endl;
        j++;
    } while(j<5);
    int* p=Mathsmarks;
    cout<<"The address of first element in array is"<<p<<endl;
    p++;
    cout<<"The address of 2nd element in array"<<p;

}