#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
/*struct node
{
int data;
struct node*next;
};
void print(struct node*head)
{
    while(head!=NULL)
    {
    printf("%d  ",head->data);
    head=head->next;
    }
}
int main()
{
   struct node*head;
    
     struct node*first;
      struct node*sec;
       struct node*thi;
    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    sec=(struct node*)malloc(sizeof(struct node));
    thi=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->next=first;
     first->data=9;
    first->next=sec;
     sec->data=8;
    sec->next=thi;
     thi->data=7;
    thi->next=NULL;
    print(head);
    return 0;
}*/
/*struct node
{
    int data;
    struct node*left;
    struct node*right;
};
struct node*createnode(int data)
{
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void preorder(struct node*r)
{
    struct node*ro;
    ro=(struct node*)malloc(sizeof(struct node));
    if(r!=NULL)
    {
printf("%d  ",r->data);
preorder(r->left);
preorder(r->right);
    }
}
int main()
{
    struct node*p=createnode(4);
     struct node*p1=createnode(1);
      struct node*p2=createnode(6);
       struct node*p3=createnode(5);
        struct node*p4=createnode(2);
        p->left=p1;
        p->right=p2;
        p1->left=p3;
        p1->right=p4;
      preorder(p);
    return 0;
}*/
/*
///insert new node at first
struct node
{
int val;
struct node*next;
};
void print(struct node*r)
{
    while(r!=NULL)
    {
        printf("%d  ",r->val);
        r=r->next;
    }
}
void insert(struct node*h,int data)
{
    struct node*n=(struct node*)malloc(sizeof(struct node));
    n->val=data;
    n->next=h;
    h=n;
    
}
int main()
{
    struct node*p=(struct node*)malloc(sizeof(struct node));
    struct node*p1=(struct node*)malloc(sizeof(struct node));
    struct node*p2=(struct node*)malloc(sizeof(struct node));
    struct node*p3=(struct node*)malloc(sizeof(struct node));
    struct node*p4=(struct node*)malloc(sizeof(struct node));
    p->val=10;
    p->next=p1;
p1->val=9;
p1->next=p2;
p2->val=8;
    p2->next=p3;
    p3->val=7;
    p3->next=p4;
    p4->val=6;
    p4->next=NULL;
    insert(p,11);
    print(p);
    return 0;

}*/