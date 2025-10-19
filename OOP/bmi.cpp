#include<iostream>
#include<cmath>
#include<iomanip>  //formatting output.
using namespace std;
int main()
{
    int height;
    float weight;
    float BMI;
    float y;
    char gender;
    cout<<"Enter the height of person in cm:"<<endl;
    cin>>height;
    cout<<"Enter the gender (M/F):"<<endl;
    cin>>gender;
    cout<<"Enter the current weight:"<<endl;
    cin>>weight;
    BMI=(weight)/(pow((float(height)/100),2));
    y=BMI;
    cout<<fixed << setprecision(2)<<endl;   //used for floating point values.while setw expects integer.
    cout<<"Your BMI is calculated i.e "<<y<<endl;
    if(BMI<18.5)
    {
        cout<<"Your are underwight.Please gain weight."<<endl;
    }
    else if(18.5<=BMI<=24.9)
    {
        cout<<"You are normal weighted person.Carry on."<<endl;
    }
    else{
        cout<<"You are obese.Loose some weight."<<endl;
    }
    return 0;
}