#include<iostream>
#include<cmath>
using namespace std;
class Point
{
    int a,b;
    static int count;
    public:
        void display()
        {
            cout<<"The "<<count+1<<"point is:("<<a<<","<<b<<")"<<endl;
            count++;
        }
        Point(int x,int y);
        friend void distance(Point,Point);
};
int Point::count;
Point::Point(int x,int y)
{
    a=x;
    b=y;

}
void distance(Point m ,Point n)
{
    double c=sqrt(pow((n.a-m.a),2)+pow((n.b-m.b),2));  //Dsitance formula.
    cout<<"The distance between the two point is:"<<c<<" unit"<<endl;
}
int main()
{
    Point P(1,1);
    P.display();
    Point q(5,9);
    q.display();
    distance(P,q);
    return 0;
}