#include<iostream>
#include<string>
using namespace std;
class Employee{
    string companyName;
    public:
        int id;
        float salary;
        void getdata()
            {
                companyName="GOOGLE";
                cout<<"Enter the employee id:";
                cin>>id;
                cout<<"Enter the employee salary:";
                cin>>salary;
            }
        void display()
        {
            cout<<"The employee with id-"<<id<<" is working in "<<companyName
            <<" and has a salary of Rs."<<salary<<endl;;
        }
        Employee(){}
};
class Developer : public Employee{
    public:
        Developer(int a,float b)
        {
            id=a;
            salary=b;
        }
};
int main()
{
    Employee E1;
    E1.getdata();
    E1.display();
    Developer D1(35,120000);
    D1.display();
    return 0;
}
