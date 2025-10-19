#include<iostream>
using namespace std;

//DECLARING CLASS
class Student{
private:     //if we don't write private then also c++ will take it as private.
    string Name,Branch;
    char Section;
public:
    int Roll_number,marks;
    void setdata(string x,string y,char z)

    //we can make function here as well as outside also by just putting prototype here.
    {
        Name=x;
        Branch=y;
        Section=z;
    }
    void displaydata()
    {
        cout<<"The value of a is:"<<Name<<endl;
        cout<<"The value of b is:"<<Branch<<endl;
        cout<<"The value of c is:"<<Section<<endl;
        cout<<"The value of d is:"<<Roll_number<<endl;
        cout<<"The value of e is:"<<marks<<endl;
    }
};

//.............we can make function using scope resolution operator outside also.
//void Student :: setdata(string x,string y,char z)    
//scope resolution operator is used because name,branch,section is not declared in this scope.
// {
//     Name=x;
//     Branch=y;
//     Section=z;
// }
int main()
{
    //DECLARING OBJECT AMAN
    Student Aman;
    Aman.Roll_number=223;
    Aman.marks=473;
    Aman.setdata("AmanKumar","CSE",'B');
    Aman.displaydata();
    return 0;
}