//given n string print uniqe string in lexiographical order with their frequency
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        m[str]=m[str]+1;
    }
    for(auto pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;   
         }
    return 0;
}