#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void traversal(struct node*p)
{
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}
int main()
{
    struct node*head;
    struct node*first;
    struct node*sec;
   head =(struct node*)malloc(sizeof(struct node));
    first =(struct node*)malloc(sizeof(struct node));
     sec =(struct node*)malloc(sizeof(struct node));
     head->data=5;
     head->next=first;
     first->data=16;
     first->next=sec;
sec->data=67;
sec->next=NULL;
traversal(head);
return 0;
}