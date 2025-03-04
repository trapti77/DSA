#include<iostream>
using namespace std;
int linear(int arr[],int size,int ele)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==ele)
        {
            return i;
        }
    }
    return -1;
}
int binary(int arr[],int size,int ele)
{
    int mid,low,high;
    low=0;
    high=size-1;
    while(low<=high)
    {
    mid=(low+high)/2;
    if(arr[mid]==ele)
    {
        return mid;
    }
    if(arr[mid]<ele)
    {
        low=mid+1;
    }
    else 
    {
        high=mid-1;
    }
    }
    return -1;
}
int main()
{
    int arr[]={2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(int);
    int element=3;
    //int search=linear(arr,size,element);
    int search=binary(arr,size,element);
    cout<<"elemrnt "<<element<<" is found at index "<<search<<endl;
    return 0;
}