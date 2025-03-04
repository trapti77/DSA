/*
            5
            /\
           3  6
          /\
         1  4
         inorder traversal =1,3,4,5,6;
        if roo>left && root<right but left<right then it is called bst tree; 
*/
#include<iostream>
#include<malloc.h>
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
int isBST(struct node*root)
{
   static  struct node*prev=NULL;
    if(root!=NULL)
{
if(!isBST(root->left))
{
    return 0;
}
if(prev!=NULL&&root->data<=prev->data)
{
    return 0;
}
prev=root;
return isBST(root->right);
}
else
{
    return 1;
}
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
cout<<isBST(p);
    return 0;
}