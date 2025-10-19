#include <iostream>
using namespace std;
class institute
{
    int amount;

public:
    float usable;
    void setdata(float a);
    float getdata();
};
void institute::setdata(float a)
{
    amount = a;
    usable = amount - (amount * 0.5);
}
float institute::getdata()
{
    return (usable);
}

class salary : public institute
{
    int salary;

public:
    void setsalary(int n);
    void display();
};
void salary::setsalary(int n)
{
    salary = (getdata() / n);
}
void salary::display()
{
    cout << "The salary of every teacher is:" << salary << endl;
}
int main()
{
    float b;
    cout<< "Enter the total amount:";
    cin >>b;
    salary s;
    s.setdata(b);
    s.setsalary(10);
    s.display();
    
}