#include<iostream>
using namespace std;
class node
{
public:
int data;
node*left;
node*right;
node(int val)
{
    this->data=val;
    this->left=NULL;
    this->right=NULL;
}
};
/*node*display(node*root)
{
cout<<"enter data"<<endl;
int d;
cin>>d;
root=new node(d);
if(d==-1)
{
    return NULL;
}
cout<<"enter data for left"<<endl;
root->left=display(root->left);
cout<<"enter  data for  right"<<endl;
root->right=display(root->right);
return root;
}*/
void inorder(node*root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    node* root=NULL;
root=display(root);
inorder(root);
    return 0;
}