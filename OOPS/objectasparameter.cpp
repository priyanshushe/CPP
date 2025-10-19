#include<iostream>
using namespace std;
class Factory
{
    int empid;
    int salary;
    static int count;
    public:
    void read();
    void print();
    void totalsalary(Factory a,Factory b);   //Factory is the new datatype/class.
};
int Factory::count;
void Factory::read()
{
    cout<<"Enter the employee id:"<<endl;
    cin>>empid;
    salary=12000;
    count++;
}
void Factory::print()
{
    for(int i=0;i<count;i++)
    {
        cout<<"The employee id is:"<<empid;
    }
}
void Factory::totalsalary(Factory o1,Factory o2)
{
    salary= o1.salary + o2.salary;     //we are using salary of two objects for total.
    cout<<"total salary is:"<<salary;
}
int main()
{
    Factory c1,c2,c3;
    c1.read();
    c2.read();
    c1.print();
    c3.totalsalary(c1,c2);   //arguments
}