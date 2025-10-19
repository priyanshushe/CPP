#include<iostream>
using namespace std;
class Performance{
    protected:
    char grade;
    string usn;
    public:
        Performance(char b,string c):grade(b),usn(c){
            grade=b;
            usn=c;
        }
        //virtual void display(){}//This is virtual funcion.
        virtual void display()=0;//This is pure virtual function and this makes this base class a ABSTRACT BASE CLASS.
};
class Study : public Performance{
    int marks;
    public:
        Study(char y,string z,int a):Performance(y,z){
            marks=a;
        }
        void display()
        {
            cout<<"IN STUDY"<<endl;
            cout<<"The student with USN "<<usn<<" got "<<marks<<" marks with grade point of "<<grade<<endl;
        }
};
class Sports : public Performance{
    int score;
    public:
        Sports(char y,string z,int a):Performance(y,z){
            score=a;
        }
        void display()
        {
            cout<<"IN SPORTS"<<endl;
            cout<<"The student with USN "<<usn<<" got "<<score<<" points with grade point of "<<grade<<endl;
        }
};
int main()
{
    Performance *AMAN[2];
    //Performance AMAN('a',"aman"); //This will throw error if weuse pure virtual function.
    Study s1('A',"1MV23CS120",90);
    Sports s2('B',"1MV23CS120",8);
    AMAN[0]=&s1; /*This pointer of base class Performance is pointing to derived object.but by default will call the function
    of base class if we wouldn't have used virtual function*/
    AMAN[1]=&s2;/*This pointer of base class Performance is pointing to derived object.but by default will call the function
    of base class if we wouldn't have used virtual function*/
    AMAN[0]->display();
    AMAN[1]->display();
    return 0;
}