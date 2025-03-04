//THIS IS NOT SOLVED IT IS THE OPERATIONS IN CIRCULAR QUEUE USING C++;
#include<iostream>
#include<stdlib.h>
#include<queue>
using namespace std;
class circular
{
int size;
int r;
int f;
int*arr;
};
void enqueue(circular*a,int value)
{

    if(a->r==a->f)
    {
        cout<<"overflow"<<endl;
    }
    else
    {
        cout<<" element is:"<<value<<endl;
        a->r=(a->r+1)%a->size;
        a->arr[a->r]=value;
    }
}
int main()
{
    circular q;
    q.size=4;
    q.r=q.f=0;
    q.arr=(int*)malloc(q.size*sizeof(int));
   enqueue(arr,80);
   enqueue(arr,56);
   enqueue(arr,82);
   enqueue(arr,81);
    return 0;
}