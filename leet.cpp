#include<iostream>
#include<vector>
using namespace std;
/*class solution
{
public :

int consecutive(vector<int>&nums)
{
    int size=0;
for(int i=0;i<nums.size();i++)
{
if(nums[i]==1)
{
    size=size+1;
}
if(size==2)
{
size=size+1;
}

}
if(size%2!=0)
{
    size=size+1;
}
int max;
max=size/2;
return max;
}

};*/
class solution {
public:
    int consecutive(vector<int>& nums) {
     
    int count=0;
    int ans=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==1)
        {
            count++;
            ans=max(count,ans);
        }
        else
            count=0;
    }
    return ans;
        
        
    }
};
int main()
{
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++)
    {
        int e;
        cin>>e;
        if(e==1||e==0)
        {
        nums.push_back(e);
        }
    }
    
    solution s;
    cout<<s.consecutive(nums);
   /* for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }*/
    
    return 0;
}

