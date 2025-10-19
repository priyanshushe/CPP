#include<iostream>
using namespace std;
class employee
{
    public:
        string phno;
        int eid;
        float sal;
        void setdata()
        {
            cout<<"enter the phno of employee:"<<endl;
            cin>>phno;
            cout<<"enter the eid:"<<endl;
            cin>>eid;
            cout<<"enter the salary of employee:"<<endl;
            cin>>sal;
        }
        void display();
};
void employee :: display()
{
    cout<<"the phno of emp is:"<<phno<<endl;
    cout<<"the eid of emp is:"<<eid<<endl;
    cout<<"the salary of emp is:"<<sal<<endl;
}
int main()
{
    employee aman;
    aman.setdata();
    aman.display();
    return 0;
}