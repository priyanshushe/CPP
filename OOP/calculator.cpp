#include <iostream>
#include <math.h>
using namespace std;
class Simple
{
protected:
    int num1, num2;

public:
    void sum(int a, int b)
    {
        cout << "The sum is:" << a + b << endl;
    }
    void diff(int a, int b)
    {
        cout << "The difference is:" << a - b << endl;
    }
    void multiply(int a, int b)
    {
        cout << "The product is:" << a * b << endl;
    }
    void div(int a, int b)
    {
        if (b == 0)
        {
            cout << "Divisor can't be zero" << endl;
        }
        else
        {
            int res;
            res = a / b;
            cout << "The division result is:" << res << endl;
        }
    }
};
class Scientific
{
protected:
    float x, y;

public:
    void sine(int a)
    {
        cout << "The sine function of" << a << "radian is:" << sin(a) << endl;
    }
    void cosec(int a)
    {
        cout << "The cosec function of " << a << " radian is:" << cos(a) << endl;
    }
};
class Calculator : public Simple, public Scientific
{
};
int main()
{
    Calculator C;
    int ch, i, j;
    while (1)
    {
        cout << "Enter your choice:\n1.ADDITION\n2.SUNTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.SINE\n6.COSEC.\n"
             << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the two number for addition" << endl;
            cin >> i >> j;
            C.sum(i, j);
            break;
        case 2:
            cout << "Enter the two number for subtraction" << endl;
            cin >> i >> j;
            C.diff(i, j);
            break;
        case 3:
            cout << "Enter the two number for multiplication" << endl;
            cin >> i >> j;
            C.multiply(i, j);
            break;
        case 4:
            cout << "Enter the two number for division" << endl;
            cin >> i >> j;
            C.div(i, j);
            break;
        case 5:
            cout << "Enter the angle in radian." << endl;
            cin >> i;
            C.sine(i);
            break;
        case 6:
            cout << "Enter the angle in radian." << endl;
            cin >> i;
            C.cosec(i);
            break;
        default:
            cout << "INVALID CHOICE";
            break;
        }
    }
    return 0;
}