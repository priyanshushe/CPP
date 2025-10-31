#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int>vec1;                                               //initializes vector with 0 size
    vector<int>vec2{0,2,4};                                        //initializes vector with 3 size and resepctive elements
    vector<int>vec3(3,4);                                          //will print 4 3 times
    // cout<<vec1.size()<<endl;
    // cout<<vec2.size()<<endl;
    // cout<<vec3.size()<<endl;
    // cout<<vec1.capacity()<<endl;
    // cout<<vec2.capacity()<<endl;
    // cout<<vec3.capacity()<<endl;
    cout<<vec3.front()<<endl;
    cout<<vec3.back()<<endl;
    cout<<vec2.at(2)<<endl;
    for(int i=2;i<10;i++)
    {
        vec1.push_back(i);
    }
    for(int i=0;i<8;i++)
    {
        cout<<vec1[i]<<" ";
    }
    cout<<endl;
    vec1.pop_back();
    for(auto itr=vec1.begin();itr!=vec1.end();itr++)                 //automatically initializes iterator
    {
        cout<<*(itr)<<" ";
    }
    cout<<endl;

    cout<<*(vec1.end());                                             //vec.end() or vec.begin() is a pointer 
    //vec1.erase(vec1.begin()+3);
    vec1.erase(vec1.begin()+2,vec1.begin()+5);
    vector<int>::iterator itr;                                       //can be manually initialized like this
    for(itr=vec1.begin();itr!=vec1.end();itr++)
    {
        cout<<*(itr)<<" ";
    }
    cout<<endl;
    vec1.insert(vec1.begin()+2,100);                                 //only accepts iteratora
    cout<<vec1[2]<<endl;
    vec2.clear();
    cout<<vec2.empty();                                              //results bool
    
    for(auto iter=vec1.rbegin();iter!=vec1.rend();iter++)            //rbegin points to last element
    {
        cout<<*(iter)<<endl;
    }
}