#include<iostream>
using namespace std;
struct node
{
int data;
struct node*left;
struct node*right;
};
struct node*createnode(int data)
{
    struct node*ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
}
struct node*deletion(struct node*root,int key)
{

}
int main()
{
struct node*p=createnode(5);
struct node*p1=createnode(3);
struct node*p2=createnode(6);
struct node*p3=createnode(1);
struct node*p4=createnode(4);
p->left=p1;
p->right=p2;
p1->left=p3;
p1->right=p4;
int key;
cin>>key;
deletion(p,key);
cout<<p->right->right->data;
}