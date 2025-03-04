#include<iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   int count=0;
   while(t--)
   {
    int n,i,j;
    cin>>n;
    int x[n],y[n];
    for(i=0,j=0;i<n,j<n;i++,j++)
    {
        cin>>x[i]>>y[j];
    }
     for(i=0,j=0;i<n,j<n;i++,j++)
    {
       if(x[i]==y[j]||(2*x[i]>y[j])||(2*y[j]>x[i]))
       {
        count++;
       }
    }
    cout<<count<<endl;
    
   }
   
    return 0;

}