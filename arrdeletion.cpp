#include<iostream>
using namespace std;
void display(int arr[],int n)
{

for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}
void deletion(int arr[],int in,int size)//deletion for the array element
{
    for(int i=in;i<size;i++)
    {
    arr[i]=arr[i+1];
    }
}
int main()
{
    int arr[100]={1,2,3,4,5};
    int size=5,index=1;
    display(arr,size);
    cout<<endl;
    deletion(arr,index,size);
    display(arr,size);
    size-=1;
    cout<<endl;
    display(arr,size);
    return 0;
}