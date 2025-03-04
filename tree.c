//STRUCTURE OF BINARY TREE;
#include<stdio.h>
#include<malloc.h>

struct node//STRUCTure of tree representation using linked
{
int data;
struct node*left;
struct node*right;
};
struct node*creatnode(int data)
{
  struct node *n;//creating a node pointer
  n=(struct node*)malloc(sizeof(struct node));//memory allocate in th heap;
  n->data=data;//setting data
  n->left=NULL;//setting left and right children with the null
  n->right=NULL; //setting left and right children with the null
  return n; //finally return the ceated node
}
int main()
{
   /* //creating root node
  struct node *p;
  p=(struct node*)malloc(sizeof(struct node));
  p->data=2;
  p->left=NULL;
  p->right=NULL;
  //creating left node
  struct node *p1;
  p1=(struct node*)malloc(sizeof(struct node));
  p1->data=1;
  p1->left=NULL;
  p1->right=NULL;
  //creating right node
  struct node *p2;
  p2=(struct node*)malloc(sizeof(struct node));
  p2->data=4;
  p2->left=NULL;
  p2->right=NULL;
//linking the nodes
p->left=p1;
p->right=p2;
*/
struct node *p=creatnode(2);
struct node *p1=creatnode(1);
struct node *p2=creatnode(4);
//linking the nodes
p->left=p1;
p->right=p2;

return 0;
}