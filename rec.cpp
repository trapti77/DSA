
#include<iostream>
using namespace std;
int sq(int n)
{
    return n*n;
}
bool happy(int n)
{
    if(n==1) {return true;}
    else{return false;}
    int rem=0;
while(n>0)
{
int d=n%10;
rem+=sq(d);
n=n/10;
}
return happy(rem);
}
int main()
{
    int n;
    cin>>n;
    cout<<happy(n);
    return 0;
}