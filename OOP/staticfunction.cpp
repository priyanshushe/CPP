#include<iostream>
#include<string>
using namespace std;
class Vegetable
{
    string name[10];
    static int count;
    int price_per_kg[10];
public:
    void read();
    void display();
    static void no_of_variety();  //can access only static data.
    // {
    //     cout<<"There are "<<count<<" variety of vegetables in the shop.";
    // }
};
int Vegetable::count;
// void Vegetable::no_of_variety()
// {
//     cout<<"There are "<<count<<" variety of vegetables in the shop.";
// }
void Vegetable::read()
{
    cout<<"Enter the name of vegetable "<<count+1<<":"<<endl;
    cin>>name[count];
    cout<<"Enter the price per kg"<<endl;
    cin>>price_per_kg[count];
    count++;
}
void Vegetable::display()
{
    for(int i=0;i<count;i++)
    {
        cout<<name[i] <<" is "<< price_per_kg[i]<<" rupees per kg"<<endl;
    }
}
int main()
{
    Vegetable sabji;
    sabji.read();
    sabji.read();
    sabji.display();
    Vegetable::no_of_variety();
    return 0;
}