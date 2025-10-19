#include<iostream>
using namespace std;
class student{
    protected:
        int roll;
    public:
        void setroll(int a)
        {
            roll=a;
        }
        void printroll()
        {
            cout<<"The roll number is "<<roll<<endl;
        }
};
class test : virtual public student{
    protected:
        int maths,physics;
    public:
        void setmarks(int a,int b)
        {
            maths=a;
            physics=b;
        }
        void printmarks(){
            cout<<"the marks in maths is "
                <<maths<<endl
                <<"and in physics is "
                <<physics<<endl;
        }
};
class sports : virtual public student{
    protected:
        int score;
    public:
        void getscore(int v){
            score=v;
        }
        void displayscore(){
            cout<<"The PT score is:"<<score<<endl;
        }
};
class total :public test,public sports{
    protected:
        int full;
    public:
        void display()
        {
            full=maths+physics+score;
            cout<<"The total marks of the student is:"<<full<<endl;
        }
};
int main()
{
    total Aman;
    Aman.setroll(011);/*if we hadn't used virtual base class then thi setroll function
                        would have confused between the setroll inherited to test and sport*/
    Aman.setmarks(12,11);
    Aman.getscore(9);
    Aman.display();
    return 0;
}