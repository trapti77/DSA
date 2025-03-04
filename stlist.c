//2.STACK IMPLEMENTATION USING LINKED LIST
#include<stdio.h>
#include<stdlib.h>
struct node
{

int data;
struct node*next;
};
void traversal(struct node*top)
{
    while(top!=NULL)
    {
        printf("element:%d\n",top->data);
        top=top->next;
    }
}
int isfull(struct node*top)
{
    struct node*n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL)
    {
        return 1;
    }
    return 0;
}
int isempty(struct node*top)
{
    if(top==NULL)
    {
        return 1;
    }
    return 0;
}
struct node* push(struct node*top,int n)
{
    
    if(isfull(top))
    {
       printf("overflow\n");
    }
    struct node*p=(struct node*)malloc(sizeof(struct node));
    p->data=n;
    p->next=top;
    top=p;
    return top;
}
int pop(struct node**top)
{
    if(isempty(*top))
    {
        printf("underflow\n");
    }
    struct node*p=*top;
    *top=(*top)->next;
    int val=p->data;
    free(p);
    return val;
}
int main()
{
struct node*top=NULL;
top=push(top,3);
top=push(top,4);
top=push(top,5);
printf("popped element:%d\n",pop(&top));
printf("popped element:%d\n",pop(&top));
printf("popped element:%d\n.",pop(&top));
traversal(top);
    return 0;
}