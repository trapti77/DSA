//deletion of element by the value of index
#include<iostream>
using namespace std;
struct Node{
int data;
struct Node*next;
};
void print(struct Node*head)
{
    while(head!=NULL)
    {
cout<<head->data<<endl;
head=head->next;
    }
}
struct Node*deletebyvalue(struct Node*head,int value)
{
    struct Node*p=head;
    struct Node*q=head->next;
    while(q->data!=value)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value)
    {
        p->next=q->next;
    }
    free(q);
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
   head->next=second;
//link second and third
 second->data=11;
second->next=third;
//link third and fourth;
 third->data=15;
third->next=NULL;
print(head);
head=deletebyvalue(head,16);
print(head);
    return 0;
}