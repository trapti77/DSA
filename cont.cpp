#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxc(vector<int>&v)
{
    int n=v.size();
    int n1=0;
    int maxe=0;
for(int i=1;i<n-1;i+2)
{
    for(int j=i+1;j<n;j+2)
    {
      n1=v[i]+v[j];
      maxe=max(maxe,n1); 
    }
}
return maxe;
}
int main()
{
    int n;
    cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
cout<<maxc(v);
    return 0;
}