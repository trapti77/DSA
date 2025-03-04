/*#include<iostream>                           
using namespace std;
class ABC
{
    int a[4];
public:
void input()
{
for(int i=0;i<4;i++)
{
    cin>>a[i];
}
}
void display()
{
for(int i=0;i<4;i++)
{
    cout<<a[i]<<" ";
}
}
void minimum()
{
    int min;
    for(int i=0;i<4;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<"mnimum:"<<min;

}
};
int main()
{
    ABC e;
    cout<<"enter the nomber:"<<endl;
    e.input();
    cout<<"display the array:"<<endl;
    e.display();
    cout<<"display the min:"<<endl;
    e.minimum();
    return 0;
}*/
/*#include<ostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void solution()
{
    int n;
    cin>>n;
vector<int>a(n);
for(int i=0;i<n;++i)
{
    cin>>a[i];
}
int min_value=*min_element(a.begin(),a.end());
int min_value_freq=count(a.begin(),a.end(),min_value);
cout<<min_value_freq<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}*/
//travering in singly 
#include<iostream>
using namespace std;
struct Node
{
int data;
struct Node*next;
struct Node*prev;
};
void traverse(struct Node*head)
{
    while(head!=NULL)
    {
        printf("%d\n",head->data);
        head=head->next;
    }
}
struct Node*insert_btw(struct Node*head,struct Node*prev,int value)
{
     
     //insertion after a node;
     struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
       ptr->data=value;
       ptr->next=prev->next;
        prev->next=ptr;
        return head;
      /*
      //insert at between
      struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
       struct Node*p=head;
       ptr->data=value;
       while(p->next!=NULL)
       {
        if(p->data==n)
        {
         ptr->next=p->next;
         p->next=ptr;
        }
        p=p->next;
       }
       return head;
       */
       /*insert at end
    while(p->next!=NULL)
    {
    p=p->next;
    }
    p->next=ptr;
ptr->next=NULL;
return head;
*/
/*insert at begin
ptr->next=head;
head=ptr;
return head;*/

}
int main()
{
    struct Node*head;
    struct Node*first;
    struct Node*second;
    head=(struct Node*)malloc(sizeof(struct Node));
    first=(struct Node*)malloc(sizeof(struct Node));  
    second=(struct Node*)malloc(sizeof(struct Node));
    head->data=1;
    head->next=first;
    first->data=2;
    first->next=second;
    second->data=3;
    second->next=NULL;
    traverse(head);
    printf("insert to begin\n");
    int n;
    cout<<"enter no:";
    cin>>n;
    head=insert_btw(head,first,n);
    traverse(head);
    return 0;
}