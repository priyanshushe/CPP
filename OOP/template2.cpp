#include<iostream>
using namespace std;
template<class T0=int,class T1>
class Student{
    public:
        T0 roll;
        string name;
        void setroll(T0 x,string y)
        {
            roll=x;
            
        }
};