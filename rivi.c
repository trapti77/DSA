#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node*next;
};
void print(struct node *head)
{
while(head!=NULL)
{
    printf("%d",head->data);
    head=head->next;
}
}
struct node*linkdelete(struct node*head)
    {
struct node*ptr=head;

head=head->next;
free(head);
return head;
 }
int main()
{
    struct node*head;
    struct node*first;
    struct node*sec;
    struct node*thir;
    head=(struct node*)malloc(sizeof(struct node));
     first=(struct node*)malloc(sizeof(struct node));
      sec=(struct node*)malloc(sizeof(struct node));
       thir=(struct node*)malloc(sizeof(struct node));
       head->data=11;
       head->next=first;
       first->data=12;
       first->next=sec;
       sec->data=13;
       sec->next=thir;
       thir->data=14;
       thir->next=NULL;
       head=linkdelete(head);
       print(head);
       return 0;
}