#include<iostream>
using namespace std;
/*NUMBER SYSTEM REVISION*/
//binary to decimal conversion;
/*int main()
{
    int n;
    cin>>n;
    int ans=0;
    int power=1;
    while(n>0)
    {
        int lastd=n%10;
        ans=ans+(lastd*power);
        power=power*2;
        n=n/10;
    }
    cout<<ans;
    return 0;
}*/
//decimal to binary conversion;
/*int main()
{
    int n;
    cin>>n;
    int ans=0;
    int power=1;
    while(n>0)
    {
int lastdigit=n%2;
ans=ans+(lastdigit*power);
power=power*10;
n=n/2;

    }
    cout<<ans;
    return 0;
}*/
/*FUNCTION REVISION*/
//int callbv(int z)
/*int callbr(int &z)
{
    z=100;
    return z;
}
int main()
{
    int a=99;
  // cout<< callbv(a)<<endl;
  cout<<a<<endl;
  cout<<callbr(a)<<endl;
    cout<<a;//a=100 bacause we have  stored value 100 at the address  of a;
    return 0;
}*/
/*REVISION OF ARRAY*/
/*int main()
{
    //int arr[]={1,2,3,4,5,6};
    char arr[]={'m','n','s','s','t'};
    int size=sizeof(arr);
    int length=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl<<length<<endl;
    return 0;
}*/



