
#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node*next;

};
void traverse(struct Node*head)
{
    while(head!=NULL)
    {
       printf("%d\n",head->data);
       head=head->next;
    }
}
struct Node*del_end(struct Node*head,struct Node*node)
{
    //deletion by nodes
    struct Node*ptr=head;
    struct Node*p=head->next;
   while(ptr->next!=node)
   {
    ptr=ptr->next;
    p=p->next;
   }
    if(ptr->next==node)
    {
        ptr->next=p->next;
        free(p);
    }
    return head;
    /*//deletion btw by value
    struct Node*ptr=head;
    struct Node*p=head->next;
    while(p->data!=n)
    {
     ptr=ptr->next;
     p=p->next;
    }
    if(p->data==n)
    {
        ptr->next=p->next;
        free(p);
    }
    return head;
    */
    /*
   //DELETION AT END
   struct Node*ptr=head;
    struct Node*p=head->next;
    while(p->next!=NULL)
{
    ptr=ptr->next;
    p=p->next;
}
    ptr->next=NULL;
    free(p);
    return head;
    */
   /*delettion for first
    struct Node*ptr=head;
    head=head->next;
    free(ptr);
    return head;*/
}
int main()
{
    struct Node*head;
    struct Node*first;
    struct Node*second;
    struct Node*third;
    head=(struct Node*)malloc(sizeof(struct Node));
    first=(struct Node*)malloc(sizeof(struct Node));  
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    head->data=1;
    head->next=first;
    first->data=2;
    first->next=second;
    second->data=3;
    second->next=third;
     third->data=4;
    third->next=NULL;
    traverse(head);
    head=del_end(head,second);
    traverse(head);
    return 0;
}