#include<iostream>
using namespace std;
class Student{
    string name;
    string subject;
    int marks;
    public:
        Student(string a,string b,int c)
        {
            name=a;
            subject=b;
            marks=c;
        }
        Student(string x,Student &y,int z) ///Copy constructor.
        {
            name=x;
            subject=y.subject;
            marks=z;
        }
        void display();
};
void Student::display()
{
    cout<<name<<" has got "<<marks<<" marks in "<<subject<<endl;
}
int main()
{
    string i,j;
    int k;
    cout<<"Enter the name of student:"<<endl;
    getline(cin,i);                            //Used to get full name with ttile.
    cout<<"Enter the subject:"<<endl;
    cin>>j;
    cout<<"Enter the marks:"<<endl;
    cin>>k;
    Student s1(i,j,k);
    cout<<"Enter the name of student:"<<endl;
    cin.ignore();                             //used before reuse of getline function.
    getline(cin,i);
    cout<<"Enter the marks:"<<endl;
    cin>>k;
    Student s2(i,s1,k);             //Copy constructor invoked.
    s1.display();
    s2.display();
    // Student s3=s1;                  //Copy constructor invoked.
    // s3.display();
    return 0;
}