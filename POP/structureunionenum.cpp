#include<iostream>
using namespace std;
//.............STRUCTURE...........

// struct student
// {
//     int id;
//     float percentage;
//     char gender;
//     bool good;
// };
// int main()
// {
//     struct student aman;
//     aman.id=11;
//     aman.percentage=80.2;
//     aman.gender='F';
//     aman.good=true;
//     cout<<"Aman in"<<aman.gender<<endl;
//     return 0;
// }

//.............STRUCTURE................

typedef struct employee    //if we don't write typedef,then also we call create harsh with employee
{
    int id;
    char grade;
    float salary;
}emp;
int main()
{
    emp Harsh;
    cout<<"Enter the salary of Harsh:"<<endl;
    cin>>Harsh.salary;
    Harsh.grade='D';
    cout<<"Harsh has a salary of:"<<Harsh.salary;
}

//............UNION<<only one data type at a time>>>>>>

// union organization
// {
//     int estd;
//     char name;
//     float funds;
// };
// //........CORRECT....................
// int main()
// {
//     organization RSS;
//     RSS.estd=1947;
//     cout<<RSS.estd<<endl;
//     RSS.name='d';
//     cout<<RSS.name;
// }
// ...........INCORRECT......................
// int main()
// {
//     union organization RSS;
//     RSS.estd=1947;
//     RSS.name='d';
//     cout<<RSS.name;
//     cout<<RSS.estd<<endl;
// }

///...............ENUM...............

// int main()
// {
//     enum{grooming,fitness,clearity};
//     cout<<grooming<<endl;
//     cout<<clearity;
//     return 0;
// }
// enum Status {
//     SUCCESS = 200,
//     ERROR = 400,
//     NOT_FOUND = 404
// };

// int main() {
//     Status code = NOT_FOUND;
//     cout << "HTTP Status Code: " << code << endl;  // Output: 404
//     return 0;
// }
