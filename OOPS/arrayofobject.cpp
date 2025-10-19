#include<iostream>
#include<string>
using namespace std;
class Library{
    string bookName;    //We are using array to store the book name of more than one book.
    int bookstd;
    string subject;
    static int count;
    public:
        void getdata();
        void display();
};

int Library::count;
void Library::getdata()
{
    cout<<"Enter the name of Book "<<count+1<<" :"<<endl;
    cin>>bookName;    //We are storing at the count index.
    cout<<"Enter the class of which the book is:"<<endl;
    cin>>bookstd;
    cout<<"Enter the subject of the Book:"<<endl;
    cin>>subject;
    count++;
}
void Library::display()
{
    cout<<bookName<<" is the book for class "<<bookstd<<" of subject "<<subject<<endl;
}
int main()
{
    // Library SMVITcse;
    // SMVITcse.getdata();
    // SMVITcse.getdata();  //We could have directly given the number of book we have to store instead of calling getdata for n times.
    // SMVITcse.display();
    // return 0;
    Library SMVITcse[2];
    for(int j=0;j<2;j++)
    {
        SMVITcse[j].getdata();
    }
    for(int j=0;j<2;j++)
    {
        SMVITcse[j].display();
    }
    return 0;
}