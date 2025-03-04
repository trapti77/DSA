//delete first element from the list
#include<iostream>
using namespace std;
class Node{
public:
int data;
Node*next;
};
void print(Node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}
Node*deletefirst(Node*head)
{
//prepare a node
Node*ptr=new Node();
ptr->next=head;
head=head->next;
free(ptr);
return head;
}
int main()
{
     Node*head=new Node();
    Node*second=new Node();
    Node*third=new Node();

    head->data=8;
    head->next=second;
    second->data=9;
    second->next=third;
    third->data=10;
     third->next=NULL;
    head=deletefirst(head);//delete  first element from the list 
    head=deletefirst(head);
     print(head);
    return 0;
}