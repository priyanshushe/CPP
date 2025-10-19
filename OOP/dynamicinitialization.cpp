#include <iostream>
using namespace std;
class Bank
{
    int principal;
    int years;
    float Rate; // Rate is always in fraction only we take input as integer.
    // After that,before storing in rate we are conveting it into float.
    float returned;

public:
    Bank() {}
    Bank(int p, int y, int r);
    Bank(int p, int y, float R);
    void show()
    {
        cout << "Your principal was: " << principal << endl
             << "The final amount after "
             << years << " years is:" << returned << endl;
    }
};
Bank::Bank(int p, int y, int r)
{
    principal = p;
    years = y;
    Rate = float(r) / 100; // float(r/100)=0 because r is int till its division i.e 0.03=0.
    // we had to conver r into float first.
    returned = principal;
    for (int i = 0; i < y; i++)
    {
        returned = (returned + returned * Rate);
    }
}
Bank::Bank(int p, int y, float R)
{
    principal = p;
    years = y;
    Rate = R;
    returned = principal;
    for (int i = 0; i < y; i++)
    {
        returned = returned + returned * Rate;
    }
}
int main()
{
    Bank b1;
    int P, Y, M;
    float m;
    int ch;
    cout << "Enter the Principal amount:";
    cin >> P;
    cout << "Enter the no of years for which amount should be fixed:";
    cin >> Y;
    cout << "Enter the choice of interest:\n 1.Percentage.\n 2.Fraction.";
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "Enter the interest rates to be givern per year:";
        cin >> M;
        b1 = Bank(P, Y, M);
        b1.show();
        break;
    case 2:
        cout << "Enter the interest rates to be givern per year:";
        cin >> m;
        Bank b2(P, Y, m);
        b2.show();
        break;
    }
    return 0;
}