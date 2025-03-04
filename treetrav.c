#include<stdio.h>
#include<malloc.h>
//STRUCTURE OF TREE
struct node
{
int data;
struct node*left;
struct node*right;
};
struct node*creatnode(int data)
{
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
//PREORDER TRAVERSAL;
/*void preorder(struct node*root)
{
    struct node*q;
    q=(struct node*)malloc(sizeof(struct node));
    if(root!=NULL)
    {
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
//POSTORDER TRAVERSAL
void postorder(struct node*root)
{
    struct node*q;
    q=(struct node*)malloc(sizeof(struct node));
    if(root!=NULL)
    {
        
        preorder(root->left);
        preorder(root->right);
        printf("%d\t",root->data);
    }
}*/
//INORDER TRAVERSAL
struct node* inorder(struct node*root)
{
    struct node*q;
    q=(struct node*)malloc(sizeof(struct node));
    if(root!=NULL)
    {
       
        inorder(root->left);
         return root->data;
        inorder(root->right);
    }
}

int main()
{
    //CREATING NODES AND CALLING PREORDER FUNCTION
struct node*p=creatnode(4);
struct node*p1=creatnode(1);
struct node*p2=creatnode(6);
struct node*p3=creatnode(5);
struct node*p4=creatnode(2);
//LINKING NODE TO EACH OTHER
p->left=p1;
p->right=p2;
p1->left=p3;
p1->right=p4;
//CALLING FUNCTION
/*printf("preorder:\n");
preorder(p);
printf("\npostorder:\n");
postorder(p);*/
printf("\ninorder:\n");
p=inorder(p);
while(p!=NULL)
{
    printf("%d",p->data);
}
    return 0;
}
/*int main()
{
    struct node*p =createnode(4);
    struct node*p1=createnode(1);
    struct node*p2=createnode(6);
    struct node*p3=createnode(5);
    struct node*p4=createnode(2);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
   // p2->left=NULL;
   // p2->right=p4;
    printf("preorder:\n");
    preorder(p);
    printf("\npostorder:\n");
    postorder(p);
    printf("\ninorder:\n");
    inorder(p);
return 0;
}*/