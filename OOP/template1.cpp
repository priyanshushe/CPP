#include<iostream>
using namespace std;
template <class T1,class T2>//using multiple parameters 
class Vector{
    public:
    T1*arr;
    T2 size;
    Vector(T2 m)
    {
        size=m;
        arr=new T1[size];
    }
    T1 dotproduct(Vector &v)
    {
        T1 d=0;
        for(int i=0;i<size;i++)
        {
            //d+=arr[i]*v.arr[i]; //This will give correct output
            d+=this->arr[i]*v.arr[i];//but using this is a good practise
        }
        return d;
    }
};
int main(){
    //THIS WAS USING INTEGER VALUES

    Vector <int,int> v(2);
    v.arr[0]=1;
    v.arr[1]=3;
    Vector <int,int>v1(2);
    v1.arr[0]=4;
    v1.arr[1]=9;
    int P=v.dotproduct(v1);
    cout<<"Using integer values,The dot product is: ";
    cout<<P<<endl<<endl; //using double endl helps to skip 2lines as space 

    //THIS WAS USING FLOATING POINT VALUES
    Vector <float,int> v2(2);
    v2.arr[0]=1.3;
    v2.arr[1]=3.1;
    Vector <float,int>v3(2);
    v3.arr[0]=4.0;
    v3.arr[1]=9.98;
    float Q=v2.dotproduct(v3);
    cout<<"Using floating point values,The dot product is: ";
    cout<<Q<<endl<<endl;//using double endl helps to skip 2lines as space 
    return 0;
}