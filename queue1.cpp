//NORMAL QUEUE OPERATIONS 
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
    q.size=10;
    q.f=q.r=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
    if(isEmpty(&q))
    {
        printf("is emtpy\n");
    }
    enqueue(&q,12);
    enqueue(&q,13);
    enqueue(&q,14);
    printf("dequeue element%d\n",dequeue(&q));
     printf("dequeue element%d\n",dequeue(&q));
    if(isEmpty(&q))
    {
        printf("is emtpy\n");
    }
    if(isFull(&q))
{
    printf("is full\n");
}
    return 0;
}
//this is problem that cannot solve using normal queue so we are use circular queue
//so lets move for circular queue solving this problem
/*int main()
{
    queue q;
    q.size = 5;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    if (isEmpty(&q))
    {
        printf("queue is empty\n");
    }
    // printf("element 1 %d\n",enqueue(&q, 28));
    enqueue(&q, 29);
    enqueue(&q, 22);
    enqueue(&q, 20);
    enqueue(&q, 23);
    if (!isEmpty(&q))
    {
        printf("queue is not empty\n");
    }
    if (!isFull(&q))
    {
        printf("queue is not full\n");
    }
   printf("dequing element is%d\n",dequeue(&q));
    printf("dequing element is%d\n",dequeue(&q));
     printf("dequing element is%d\n",dequeue(&q));
 printf("dequing element is%d\n",dequeue(&q));
 enqueue(&q, 19);
    enqueue(&q, 17);
    enqueue(&q, 10);
    enqueue(&q, 15);

    if (isFull(&q))
    {
        printf("queue is full\n");
    }
}*/