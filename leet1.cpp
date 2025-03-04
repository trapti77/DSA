#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int  c=0;
    vector<int>nums(n);
    vector<int>r;
    for(int i=0;i<3;i++)
    {
        cin>>nums[i];
    }
         for(int i=0;i<nums.size();i++)
         {
            for(int j=1;j<nums.size();j++)
            {
                if(nums[i]<nums[j])
                {
                    c++;
                }
                
            }
            r[i]=c;
         }
          c=0;
          for(int i=0;i<r.size();i++)
          {
            cout<<r[i]<<" ";
          }
    return 0;
}