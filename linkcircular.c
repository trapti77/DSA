//traversing progaram using cirecular linked list
#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node*next;
};
void traversal(struct Node*head)
{
  struct Node*ptr=head;
  do
  {
    printf("value is %d\n",ptr->data);
    ptr=ptr->next;
  } while (ptr!=head);
  
}
struct Node*insert_head(struct Node*head,int value)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head->next;
    ptr->data=value;
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;

    ptr->next=head;
    head=ptr;
    return head;
}
int main()
{
  struct Node*head;
  struct Node*second;
  struct Node*third;
head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
head->data=7;
second->data=8;
third->data=9;
head->next=second;
second->next=third;
third->next=head;
traversal(head);
head=insert_head(head,80);
traversal(head);
  return 0;
}