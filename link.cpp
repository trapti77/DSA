#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
public:
int data;
node*next;
};
node*deletion(node*head,int in)
{
node*p=head;
node*q=p->next;
int i=0;
while(i!=in-1)
{
    p=p->next;
    q=q->next;
    i++;
}
p->next=q->next;
free(q);
return head;
}
void display(node*head)
{
    node*temp=head;
while(temp!=NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}

}
int main()
{
     node*head=(class node*)malloc(sizeof(class node));
     node*sec=(class node*)malloc(sizeof(class node));
     node*thir=(class node*)malloc(sizeof(class node));
     node*four=(class node*)malloc(sizeof(class node));
     node*five=(class node*)malloc(sizeof(class node));
    head->data=1;
    head->next=sec;
    sec->data=2;
    sec->next=thir;
    thir->data=3;
    thir->next=four;
    four->data=4;
    four->next=five;
    five->data=5;
    five->next=NULL;
   deletion(head,3);  
display(head);
    return 0;
}