//1.IMPLEMENTATION OF STACK USING ARRAY;
#include<stdio.h>
#include<stdlib.h>
struct stack{
int top;
int size;
int *arr;
};
int isempty(struct stack* ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    return 0;
}
int isfull(struct stack* ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    return 0;
}
void push(struct stack* ptr,int n)
{
    if(isfull(ptr))
    {
        printf("overflow");
    }
    ptr->top++;
    ptr->arr[ptr->top]=n;
}
void pop(struct stack*ptr)
{
    if(isempty(ptr))
    {
        printf("underflow\n");
    }
    int val=ptr->arr[ptr->top];
     ptr->top--;
printf("%d  ",val);
}
int peek(struct stack*ptr)
{
   if(isempty(ptr))
    {
        printf("underflow\n");
    }
    return ptr->arr[ptr->top];
}
int main()
{
    struct stack*st=(struct stack*)malloc(sizeof(struct stack));
   st->size=10;
   st->top=-1;
   st->arr=(int *)malloc(sizeof(int));
    printf("%d",isfull(st));
    printf("\n");
     printf("%d\n",isempty(st));
     push(st,2);
     push(st,3);
     push(st,4);
     push(st,5);
     push(st,6);
     printf("%d",isfull(st));
    printf("\n");
     printf("%d\n",isempty(st));
     pop(st);
     pop(st);
     pop(st);
     printf("\n");
     printf("%d ",peek(st));
    return 0;
}
