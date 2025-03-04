#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void move(vector<int>&v)
{
    int j=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]!=0)
        {
            v[j++]=v[i];
        }
    }
    for(;j<v.size();j++)
    {
        v[j]=0;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    move(v);

    return 0;
}