#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int n,i,sum=0;
    float avg;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    ptr=(int *)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        cout<<"memory is not available\n"<<endl;
        exit(0);
    }
    else
    {
        cout<<"enter the elements:"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>ptr+i;
        }
        for(i=0;i<n;i++)
        {
            sum=sum+(*(ptr+i));
        }
        cout<<sum<<endl;
        avg=sum/n;
        cout<<avg<<endl;
    }
return 0;

}