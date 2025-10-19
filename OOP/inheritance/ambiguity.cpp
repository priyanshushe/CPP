#include<iostream>
using namespace std;
class student1{
    public:
        void result()
        {
            cout<<"The student1 is pass."<<endl;
        }
};
class student2{
    public:
        void result()
        {
            cout<<"The student2 is fail."<<endl;
        }
};
class ressult : public student1,public student2{
    public:
    void result(){
        student1 :: result();
    }
};
int main()
{
    student1 Preeti;
    Preeti.result();
    student2 Priyanshu;
    Priyanshu.result();
    ressult Aman;
    Aman.result();
    return 0;
}