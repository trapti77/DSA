#include<iostream>
using namespace std;
void checkevenorodd(int n)
{
    if(n%2==0)
    {
        cout<<"this is even number"<<endl;
    }
    else{
        cout<<"this is odd number"<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    checkevenorodd(n);
    return 0;
}