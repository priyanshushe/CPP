#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> li;
    li.push_back(5);
    li.push_front(8);
    li.push_back(4);
    li.push_front(9);
    li.push_back(1);
    li.push_front(2);
    for(auto it=li.begin();it!=li.end();it++)
    {
        cout<<*(it)<<" "<<endl;

    }
    cout<<"next command"<<endl;
    for(auto iter=li.rbegin();iter!=li.rend();iter++)
    {
        cout<<*(iter)<<" "<<endl;
    }
    cout<<"next command"<<endl;
    li.pop_front();
    li.pop_back();
    auto it=li.begin();
    advance(it,3);            //method in list for tracing.   li.begin()+2 won't work
    li.insert(it,5);
    auto start=li.begin();
    auto end=li.begin();
    advance(start,2);
    advance(end,5);
    li.erase(start,end);    //to erase
     while(!li.empty())
    {
        cout<<li.front()<<" "<<endl;
        li.pop_front();
    }
    li.clear();
    return 0;
}