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
/*struct node*search(struct node*root,int key)//this is searching element in the tree function
{
    while(root!=NULL)
    {
        if(key==root->data)
        {
            return root;
        }
       else  if(key<root->data)
        {
            root=root->left;
        }
        else
        {
            root=root->right;
        }
    }
    return NULL;
}*/
//linking new root
void insertion(struct node*root,int key)
{
    struct node*prev=NULL;
    while(root!=NULL)
    {
        prev=root;
        if(root->data==key)
        {
            cout<<"cannot insert data in tree because already this data is present"<<endl;
            return ;
        }
        if(key<root->data)
        {
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    struct node*ptr=createnode(key);
if(key<prev->data)
{
  prev->left=ptr;  
}
else{
    prev->right=ptr;
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
int key;
cin>>key;
insertion(p,key);
cout<<p->right->right->data;
    return 0;
}
