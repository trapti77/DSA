#include<stdio.h>
#include<stdlib.h>
struct node
{

int data;
struct node*next;
};
struct node*top=NULL;//global variable
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
int peek(int posi)
{
    /*if(isempty(top))
    {
        printf("underflow\n");
    }
    return top->data;
    */
   struct node*p=top;
   for(int i=0;i<posi-1&&p!=NULL;i++)
   {
    p=p->next;
   }
   if(p!=NULL)
   {
return p->data;
   }
   else{
    return -1;
   }
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
int stacktop(struct node*top)
{
    return top->data;
}
int stackbott(struct node*top)
{
    return top->data;
}
int pop(struct node*tp)
{
    if(isempty(tp))
    {
        printf("underflow\n");
    }
    struct node*p=tp;
    top=(tp)->next;
    int val=p->data;
    free(p);
    return val;
}
int main()
{
top=push(top,3);
top=push(top,4);
top=push(top,5);
printf("popped element:%d\n",pop(top));
printf("top element:%d\n",peek(2));
traversal(top);
    return 0;
}