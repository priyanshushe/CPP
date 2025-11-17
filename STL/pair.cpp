#include<iostream>
using namespace std;
#include<vector>
int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);   //helps to give output faster
    vector<pair<int,int>> vec;
    int n;
    cout<<"Enter the number of pairs you want to insert:"<<endl;
    cin>>n;
    int a,b;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter The pair to be inserted at position "<<i<<":"<<endl;
        cin>>a>>b;
        vec.emplace_back(a,b);
    }
    for(auto p:vec)
    {
        cout<<"{"<<p.first<<","<<p.second<<"} "<<endl;
    }
    return 0;
}