#include<bits/stdc++.h>
using namespace std;
void print(map<int,string>&m)
{
    map<int ,string>::iterator it;
for(it=m.begin();it!=m.end();it++)//rule 2
{
    cout<<(*it).first<<" "<<(*it).second<<endl;
}
}
int main()
{
    map<int,string>m;
    m[1]="trapti";//rule 1 to insert element
    m[3]="sakshi";
    m[2]="sonakshi";
    m[5]="natthu";
    m[4]="manisha";
    m.insert({6,"patel"});//rule2and function 1

   /* for(auto &pr:m)//rule 1 for print element
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
map<int ,string>::iterator it;
for(it=m.begin();it!=m.end();it++)//rule 2
{
    cout<<(*it).first<<" "<<(*it).second<<endl;
}*/
//print(m);//rule 3
/*auto it=m.find(7);
if(it==m.end())
{
cout<<"no value"<<endl;
}
else
{
    cout<<(*it).first<<" "<<(*it).second<<endl;
}*/
auto it=m.find(1);
if(it!=m.end())
{
    m.erase(it);
print(m);
}
    return 0;
}