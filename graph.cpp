#include<stdio.h>
#include<queue>
#include<stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isFull(struct queue*q)
{
    if(q->r==q->size-1)
    {
       return 1;
    }
    return 0;
}
int isEmpty(struct queue*q)
{
    if(q->r==q->f)
    {
      return -1;  
    }
return 0;
}
int  dequeue(struct queue*q)
{
    int a=-1;
    if(isEmpty(q))
    {
        printf("underflow\n");
    }
    else{
        q->f++;
    a=q->arr[q->f];
  }
  return a;
}
void enqueue(struct queue*q,int val)
{
if(isFull(q))
{
    printf("overflow\n");
}
else{
    q->r++;
    q->arr[q->r]=val;
}
}
int main()
{
    struct queue q;
    q.size=400;
    q.f=q.r=0;
    q.arr=(int*)malloc(q.size*sizeof(int));
    int node;
    int i=0;
    int visited[7]={0,0,0,0,0,0,0};
    int a[7][7]={
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}
    };
    printf()
    return 0;
}