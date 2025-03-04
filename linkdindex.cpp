//deletion of element by the index
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
      int data;
      struct Node*next;
};
void traversal(struct Node*ptr)
{
    while(ptr!=NULL)
    {
cout<<"element is:"<<ptr->data<<endl;
ptr=ptr->next;
    }
}
struct Node*deleteindex(struct Node*head,int index)
{
struct Node*p=head;
struct Node*q=head->next;
for(int i=0;i<index-1;i++)
{
p=p->next;
q=q->next;
}
p->next=q->next;
free(q);
return head;
}
int main()
{
    //creation of node
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;
    //allocate memory for nodes in the lineked  list in the heap
    head=(struct Node*)malloc(sizeof(struct Node));
     second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
   fourth=(struct Node*)malloc(sizeof(struct Node));
   //link first and second nodes ;
   head->data=7;
   head->next=second;
//link second and third
 second->data=11;
second->next=third;
//link third and fourth;
 third->data=15;
third->next=fourth;
//link fourht and last;
 fourth->data=27;
fourth->next=NULL;
head=deleteindex(head ,2);
traversal(head);
    return 0;
}