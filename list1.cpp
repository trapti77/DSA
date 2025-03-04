#include<iostream>
#include<list>
using namespace std;
void display(list<int>&s)
{
    list<int>::iterator t;
    for(t=s.begin();t!=s.end();t++)
    {
cout<<*t<<" ";
    }
    
}
int main()
{
    list<int>lst;
    int n;
    cin>>n;
    cout<<"enter list"<<endl;
 for(int i=0;i<n;i++)
    {
       int e;
       cin>>e;
       lst.push_back(e);
    }
    cout<<"enter list1"<<endl;
    list<int>lst1;
 for(int i=0;i<n;i++)
    {
       int e;
       cin>>e;
       lst1.push_back(e);
    }
   cout<<"list:";
   display(lst);
    cout<<endl;
  cout<<"list1:";
 display(lst1);
   cout<<endl;
   cout<<"after merge:";
   lst.merge(lst1);
   display(lst);
   cout<<endl;
   cout<<"after sort lst:";
   lst.sort();
   lst1.sort();
   display(lst);
   cout<<endl;
   cout<<"after sort lst1:";
   display(lst1);
   cout<<endl;
   cout<<"after reverse:";
   lst.reverse();
   display(lst);
    return 0;
}