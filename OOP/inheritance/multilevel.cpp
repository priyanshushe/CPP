#include<iostream>
using namespace std;
class Student{
    protected:
        string name;
        string USN;
    public:
        void setData(string a,string b)
        {
            name=a;
            USN=b;
        }
        void getdata()
        {
            cout<<name<<"("<<USN<<") ";
        }
};
class Exam : public Student{
    protected:
        int maths;
        int physics;
    public:
        void setMarks(int c,int d)
        {
            maths=c;
            physics=d;
        }
        void getMarks()
        {
            //getdata();
            cout<<"has "<<maths<<" marks in maths and "<<physics<<" marks in physics"<<endl;
        }
};
class Result : public Exam{
    int percentage;
    public:
        void setpercentage()
        {
            percentage=(maths+physics)/2;
        }
        void getpercentage()
        {
            cout<<"The result is:"<<percentage<<"%"<<endl;
        }
};
int main()
{
    Result R;
    R.setData("Aman","1MV23CS011");
    R.getdata();
    R.setMarks(80,76);
    R.getMarks();
    R.setpercentage();
    R.getpercentage();
    return 0;
}