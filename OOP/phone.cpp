#include<iostream>
using namespace std;
class CP
{
    public:
    string b;
    int a;
        void setData()
        {
            cout<<"Enter the vehicle name"<<endl;
            cin>>b;
            cout<<"Enter the Ex-Showroom price of vehicle:"<<endl;
            cin>>a;
            cout<<"The total tax to be applied for KARNATAKA is 30%"<<endl;
        }
        void getData()
        {
            int costprice=a;
            cout<<"The Ex-showroom price of "<<b<<" is:"<<a<<endl;
        }
        friend class SP;
};
class SP
{
    public:
    void finalprice(CP &a);
};
void SP::finalprice(CP &x)
{
    int ffinal= int(x.a+x.a*(0.3));
    cout<<"final price is:"<<ffinal;

}
int main()
{
    CP car;
    SP vehicle;
    car.setData();
    car.getData();
    vehicle.finalprice(car);
    return 0;
}