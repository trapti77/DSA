#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
    struct Node*prev;
};

void forward(struct Node*head)
{
struct Node*ptr=head;
while(ptr!=NULL)
{
    printf("element is:%d\n",ptr->data);
    ptr=ptr->next;
}
}
void backward(struct Node*tail)
{
struct Node*p=tail;
while(p!=NULL)
{
    printf("element is:%d\n",p->data);
    p=p->prev;
}
}
int main()
{
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*tail;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    tail=(struct Node*)malloc(sizeof(struct Node));
    head->data=8;
    second->data=9;
    third->data=10;
    tail->data=11;
    head->next=second;
    head->prev=NULL;
     second->next=third;
    second->prev=head;
    third->next=tail;
    third->prev=second;
     tail->next=NULL;
    tail->prev=third;
    printf("forward traversal using head:\n");
    forward(head);
    printf("backward traversal using tail:\n");
    backward(tail);
    return 0;
}