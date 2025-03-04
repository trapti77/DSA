#include<iostream>
using namespace std;
class Node{
public:
int value;
Node *next;
};
void print(Node*h)
{
    while(h!=NULL)
    {
        cout<<h->value<<endl;
        h=h->next;
    }
}
void addeleatfront(Node**head,int newvalue)
{
    //prepare a newnode
    Node* newnode=new Node();
    newnode->value=newvalue;
    //put it in front of new node
    newnode->next=*head;
    //move head of the list to point to the new node
    *head=newnode;
}
int main()
{
    //declare node
    Node*head=new Node();
    Node*second=new Node();
    Node*third=new Node();
    //initialize value
    head->value=5;
    head->next=second;
    second->value=7;
    second->next=third;
    third->value=9;
    third->next=NULL;
   addeleatfront(&head,10);
   print(head);

    return 0;
}