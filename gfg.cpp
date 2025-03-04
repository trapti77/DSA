#include<iostream>
#include<vector>
using namespace std;
void sorted(vector<int>&v)
{
    int l=0;
    int r=v.size()-1;
    while(l<r)
    {
        if(v[l]%2==0&&v[r]%2!=0)
        {
            swap(v[l],v[r]);
            l++;
            r--;
        }
    }
    if(v[l]%2==0)
    {
        l++;
    }
    if(v[r]%2!=0)
    {
        r--;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int e;
        cin>>e;
        v.push_back(e);
    }
    sorted(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}