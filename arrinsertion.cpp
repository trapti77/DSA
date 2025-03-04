#include<iostream>
using namespace std;
void display(int arr[],int n)
{

for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}
int insertion(int arr[],int size,int ele,int in,int capacity)//insertion function in the array
{
    if(size>=capacity)
    {
        return -1;
    }
    else{
    for(int i=size-1;i>=in;i--)
    {
        arr[in]=ele;
    }
    return 1;
    }
}

int main()
{
    int arr[100]={1,2,3,4,5};
    int size=5,element=90,index=1;
    display(arr,size);
    cout<<endl;
    insertion(arr,size,element,index,100);
    size+=1;
    display(arr,size);
    return 0;
}