#include<iostream>
using namespace std;
int sorted(int a[],int n)
{
     int t=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                  t=a[i];
                  a[i]=a[j];
                  a[j]=t;
            }
        }
    }
    }
    int maxele(int a[],int n)
    {
        int maxe=a[0];
        for(int i=1;i<n;i++) 
        {
         if(a[i]>maxe)
         {
            maxe=a[i];
            return maxe;
         }
        }
    }
int main()
{
    int a[]={29,49,70,47,24,68,35,56,90};
    int n=sizeof(a)/sizeof(a[0]);
     sorted(a,n);
     int m=maxele(a,n);
     cout<<m<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"second:"<<a[n-2]<<endl;
    cout<<"thirdlargest:"<<a[n-3]<<endl;
    return 0;
}