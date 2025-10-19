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

class salary : private institute
{
    int salary;

public:
    void setsalary(int n);
    void display();
};
void salary::setsalary(int n)
{
    setdata(1000000);
    salary = (getdata() / n);
}
void salary::display()
{
    cout << "The salary of every teacher is:" << salary << endl;
}
int main()
{
    salary s;
    s.setsalary(10);
    s.display();
    
}