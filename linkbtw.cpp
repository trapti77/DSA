#include<iostream>
using namespace std;
 class Node{
    public:
  int data;
  Node*next;
};
 void print(Node*h)
{
while(h!=NULL)
{
    cout<<h->data<<endl;
    h=h->next;
}
}
Node*insertbtw(Node*ptr,int value)
{
    //create new node
    Node*p=new Node();
    p->data=value;
    p->next=ptr->next;
    ptr->next=p;
    return ptr;

}
int main()
{ 
    Node*head=new Node();
     Node*second=new Node();
     Node*third=new Node();

     head->data=7;
     head->next=second;
     second->data=8;
     second->next=third;
     third->data=9;
     third->next=NULL;
    head= insertbtw(head,2);
     print(head);
    
    return 0;
}