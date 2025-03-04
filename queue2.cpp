//CIRCULAR QUEUE OPERATIONS EXAMPLE
#include <stdio.h>
#include <queue>
#include <stdlib.h>
struct queue
{
public:
    int f;
    int r;
    int size;
    int *arr;
};
int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
int isFull(struct queue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("overflow\n");
    }
    else
    {
        printf("enqueue element is %d\n",val);
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
    }
}
int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("underflow\n");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
    }
}
int main()
{
    queue q;
    q.size = 4;
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
return 0;
}