#include<iostream>
#include<string>
using namespace std;
class Library{
    string bookName[20];    //We are using array to store the book name of more than one book.
    int bookstd[20];        //we can use array of objects too for this situation.
    string subject[20];
    static int count;       //static variable is declared.
    public:
        void getdata();
        void display();
};

int Library::count;       //static variable should be defined outside the class too.
void Library::getdata()
{
    cout<<"Enter the name of Book "<<count+1<<" :"<<endl;
    cin>>bookName[count];    //We are storing at the count index.
    cout<<"Enter the class of which the book is:"<<endl;
    cin>>bookstd[count];
    cout<<"Enter the subject of the Book:"<<endl;
    cin>>subject[count];
    count++;
}
void Library::display()
{
    for(int i=0;i<count;i++)
    {
        cout<<bookName[i]<<" is the book for class "<<bookstd[i]<<" of subject "<<subject[i]<<endl;
    }
}
int main()
{
    // Library SMVITcse;
    // SMVITcse.getdata();
    // SMVITcse.getdata();  //We could have directly given the number of book we have to store instead of calling getdata for n times.
    // SMVITcse.display();
    // return 0;
    Library SMVITcse;
    for(int j=0;j<2;j++)
    {
        SMVITcse.getdata();
    }
    SMVITcse.display();
    return 0;
}

//we can use array of objects here too instead of array of data members.
// #include<iostream>
// #include<string>
// using namespace std;
// class Library{
//     string bookName;    //We are using array to store the book name of more than one book.
//     int bookstd;
//     string subject;
//     static int count;
//     public:
//         void getdata();
//         void display();
// };

// int Library::count;
// void Library::getdata()
// {
//     cout<<"Enter the name of Book "<<count+1<<" :"<<endl;
//     cin>>bookName;    //We are storing at the count index.
//     cout<<"Enter the class of which the book is:"<<endl;
//     cin>>bookstd;
//     cout<<"Enter the subject of the Book:"<<endl;
//     cin>>subject;
//     count++;
// }
// void Library::display()
// {
//     cout<<bookName<<" is the book for class "<<bookstd<<" of subject "<<subject<<endl;
// }
// int main()
// {
//     // Library SMVITcse;
//     // SMVITcse.getdata();
//     // SMVITcse.getdata();  //We could have directly given the number of book we have to store instead of calling getdata for n times.
//     // SMVITcse.display();
//     // return 0;
//     Library SMVITcse[2];
//     for(int j=0;j<2;j++)
//     {
//         SMVITcse[j].getdata();
//     }
//     for(int j=0;j<2;j++)
//     {
//         SMVITcse[j].display();  //we used array of objects thats why we used loop here not in function
//     }
//     return 0;
// }