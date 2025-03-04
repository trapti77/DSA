#include<iostream>
using namespace std;
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
int main()
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
}

