#include<iostream>
using namespace std;
class Point{
public:
int data;
Point*next;
};
 void print(Point*h)
{
    while(h!=NULL)
    {
cout<<h->data<<endl;
h=h->next;
    }
}
void addeleatend(Point**head,int value)
{
//1.prepare a new node
Point*newnode=new Point();
newnode->data=value;
 newnode->next=NULL;
//2.if linked list is empty newnode will be a headnode
if(*head==NULL)//check for empty
{
    *head=newnode;
    return ;
}
//3. find the last node
Point*last=*head;
while(last->next!=NULL)
{
    last=last->next;
}
//4. insert newnode after last node(at the end)
last->next=newnode;
 
}
int main()
{
    //creation of node
Point*head=new Point();
 Point*second=new Point();
Point*third=new Point();
//initialize value or node
head->data=8;
head->next=second;
second->data=7;
second->next=third;
third->data=9;
third->next=NULL;
addeleatend(&head,4);
addeleatend(&head,10);
print(head);
    return 0;

}