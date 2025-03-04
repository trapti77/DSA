#include<iostream>
using namespace std;
class Node{
public:
int value ;
Node *next;

};
 void print(Node*head)
{
while(head!=NULL)
{
    cout<<head->value<<endl;
    head=head->next;
}
}
void afternode(Node*privious,int newvalue)
{
//1.check if privious node is NULL
if(privious==NULL)
{
    cout<<"privious can not be NULL"<<endl;
    return;
}
//2.prepare a newnode
Node*newnode=new Node();
newnode->value=newvalue;

//3.insert newnode after privious node
newnode->next=privious->next;
privious->next=newnode;
}
Node* rev(Node*head){
			Node*prev=NULL;
			Node*curr=head;
			Node*temp=NULL;
			while(curr!=NULL)
			{
			temp=curr->next;	
			curr->next=prev;
			prev=curr;
			curr=temp;
			}
			head=prev;
			return head;
	      }
void reorder(Node*head)
{
//STEP1-------------find middle----
	Node*s=head;
	Node*f=head->next;
	while(f!=NULL||f->next!=NULL)
	{
	s=s->next;
	f=f->next->next;	
	}
//STEP2---------------reverse--------
Node*second=rev(s->next);
s->next=NULL;
Node*first=head;
//STEP3----------------merge both list first and second----
while(second!=NULL)
{
Node*t1=first->next;
Node*t2=second->next;
first->next=second;
second->next=t1;
first=t1;
second=t2;	
}	
}
int main()
{
    Node*head=new Node();
    Node*second=new Node();
    Node*third=new Node();

    head->value=8;
    head->next=second;
    second->value=9;
    second->next=third;
   third->value=10;
   third->next=NULL;
   afternode(head,4);
   afternode(second,12);
   afternode(NULL,5);
   print(head);
   cout<<"after reorder"<<endl;
   reorder(head);
   print(head);
    return 0;
}