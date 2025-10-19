#include<iostream>
using namespace std;
void display(const int d);
float selling_price(int CP,int discount=30)    //SYNTAX(return_type fn_name(type parameter=value))
{
    return (CP*discount/100);
}
int main()
{
    int costprice;
    float discount;
    cout<<"Enter the costprice of product:"<<endl;
    cin>>costprice;
    cout<<"Enter the discount to be given:"<<endl;
    cin>>discount;
    cout<<selling_price(costprice)<<endl;      //discount will be 30 by default.
    cout<<selling_price(costprice,discount)<<endl;
    cout<<selling_price(2000,14.5)<<endl;      //both arguments are constant.
    int d=4;
    display(4);
    return 0;
}
void display(const int d)
{
    // d=d+2;        //this will create compile time error as d is passed as constant parameter.
    cout<<d<<endl;
}