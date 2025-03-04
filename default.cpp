#include<iostream>
using namespace std;
void swap(int a,int b);
int main()
{
    int a=10;
    int b=49;
    swap(a,b);
}
void swap(int m,int n)
{
    int t;
    t=m;
    m=n;
    n=t;
    cout<<"a="<<m<<" "<<"b="<<n;
}

/*int main()
{
int add(int a=30,int b=20,int c=30);
    int a=10;
    int b=20;
    cout<<add(a,b)<<endl;//60

    cout<<add(a)<<endl;//60
    cout<<add()<<endl;//80
    return 0;
}
int add(int m,int n ,int c)
{
    return m+n+c;
}*/
